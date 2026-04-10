//-*-c++-*-
//=============================================================================
//
// Copyright (c) Ant Group Co., Ltd
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//=============================================================================

#include "sm.h"

#include <algorithm>
#include <ctime>
#include <list>
#include <map>
#include <set>
#include <utility>
#include <vector>

#include "air/base/container.h"
#include "air/base/ptr_wrapper.h"
#include "air/core/opcode.h"
#include "air/opt/dfg_container.h"
#include "air/opt/dfg_node.h"
#include "air/opt/scc_container.h"
#include "air/opt/scc_node.h"
#include "air/opt/ssa_container.h"
#include "air/util/debug.h"
#include "dfg_region.h"
#include "dfg_region_builder.h"
#include "fhe/ckks/ckks_opcode.h"
#include "min_cut_region.h"
#include "resbm_ctx.h"
#include "smo_bootstrap_inserter.h"

namespace fhe {
namespace ckks {

using namespace air::opt;
using air::base::ADDR_DATUM_PTR;
using air::base::CONTAINER;
using air::base::NODE_PTR;
using air::base::PREG_PTR;
using air::base::SIGNATURE_TYPE_PTR;
using air::base::SPOS;
using air::base::STMT_LIST;
using air::base::STMT_PTR;
using air::base::TYPE_PTR;

namespace {

static bool Is_bootstrap_node(CONST_REGION_ELEM_PTR elem) {
  DFG_NODE_PTR dfg_node = elem->Dfg_node();
  return dfg_node->Is_node() && dfg_node->Node()->Opcode() == OPC_BOOTSTRAP;
}

static void Init_scc_trav_state(const SCC_CONTAINER* scc_cntr,
                                const REGION_PTR&    region) {
  for (REGION::ELEM_ITER elem_iter = region->Begin_elem();
       elem_iter != region->End_elem(); ++elem_iter) {
    SCC_NODE_ID  scc_id   = scc_cntr->Scc_node(elem_iter->Id());
    SCC_NODE_PTR scc_node = scc_cntr->Node(scc_id);
    scc_node->Set_trav_state(TRAV_STATE_RAW);
  }
}

struct FIXED_BTS_INFO {
  std::set<REGION_ELEM_ID> Cut_elem;
};

struct SAVED_BOOTSTRAP {
  NODE_PTR   Parent;
  uint32_t   Child_idx = 0;
  NODE_PTR   Bootstrap;
};

struct FIXED_BTS_ANCHOR {
  NODE_INFO     Operand;
  CALLSITE_INFO Callsite;
  air::base::FUNC_ID Parent_func;

  FIXED_BTS_ANCHOR(const NODE_INFO& operand, const CALLSITE_INFO& callsite,
                   air::base::FUNC_ID parent_func)
      : Operand(operand), Callsite(callsite), Parent_func(parent_func) {}
};

static void Strip_bootstrap_nodes(
    GLOB_SCOPE* glob_scope, std::vector<SAVED_BOOTSTRAP>* saved_bootstraps) {
  AIR_ASSERT(glob_scope != nullptr);
  AIR_ASSERT(saved_bootstraps != nullptr);

  for (GLOB_SCOPE::FUNC_SCOPE_ITER scope_iter = glob_scope->Begin_func_scope();
       scope_iter != glob_scope->End_func_scope(); ++scope_iter) {
    air::base::CONTAINER* cntr = &(*scope_iter).Container();
    air::base::STMT_LIST  sl   = cntr->Stmt_list();
    for (air::base::STMT_PTR stmt = sl.Begin_stmt(); stmt != sl.End_stmt();
         stmt                     = stmt->Next()) {
      NODE_PTR stmt_node = stmt->Node();
      for (uint32_t id = 0; id < stmt_node->Num_child(); ++id) {
        NODE_PTR child = stmt_node->Child(id);
        if (child->Opcode() != OPC_BOOTSTRAP) continue;

        SAVED_BOOTSTRAP saved;
        saved.Parent    = stmt_node;
        saved.Child_idx = id;
        saved.Bootstrap = child;
        saved_bootstraps->push_back(saved);

        stmt_node->Set_child(id, child->Child(0));
      }
    }
  }
}

static void Restore_bootstrap_nodes(
    const std::vector<SAVED_BOOTSTRAP>& saved_bootstraps) {
  for (const SAVED_BOOTSTRAP& saved : saved_bootstraps) {
    NODE_PTR curr_child = saved.Parent->Child(saved.Child_idx);
    saved.Bootstrap->Set_child(0, curr_child);
    saved.Parent->Set_child(saved.Child_idx, saved.Bootstrap);
  }
}

static REGION_ELEM_PTR Find_fixed_bootstrap_elem(
    REGION_CONTAINER* region_cntr, const FIXED_BTS_ANCHOR& anchor) {
  AIR_ASSERT(region_cntr != nullptr);

  for (uint32_t region_id = 1; region_id < region_cntr->Region_cnt();
       ++region_id) {
    REGION_PTR region = region_cntr->Region(REGION_ID(region_id));
    for (REGION::ELEM_ITER elem_iter = region->Begin_elem();
         elem_iter != region->End_elem(); ++elem_iter) {
      REGION_ELEM_PTR elem = *elem_iter;
      if (elem->Parent_func() != anchor.Parent_func) continue;
      if (!(elem->Callsite_info() == anchor.Callsite)) continue;
      DFG_NODE_PTR dfg_node = elem->Dfg_node();
      if (anchor.Operand.Is_expr()) {
        if (!dfg_node->Is_node()) continue;
        if (dfg_node->Node_id() != anchor.Operand.Expr()) continue;
      } else {
        if (!dfg_node->Is_ssa_ver()) continue;
        if (dfg_node->Ssa_ver_id() != anchor.Operand.Ssa_ver()) continue;
      }
      return elem;
    }
  }
  return REGION_ELEM_PTR();
}

static void Collect_fixed_bootstrap_anchors(
    REGION_CONTAINER* region_cntr, std::vector<FIXED_BTS_ANCHOR>* anchors) {
  AIR_ASSERT(region_cntr != nullptr);
  AIR_ASSERT(anchors != nullptr);

  for (uint32_t region_id = 1; region_id < region_cntr->Region_cnt();
       ++region_id) {
    REGION_PTR region = region_cntr->Region(REGION_ID(region_id));
    for (REGION::ELEM_ITER elem_iter = region->Begin_elem();
         elem_iter != region->End_elem(); ++elem_iter) {
      REGION_ELEM_PTR elem = *elem_iter;
      if (!Is_bootstrap_node(elem)) continue;

      for (uint32_t pred_idx = 0; pred_idx < elem->Pred_cnt(); ++pred_idx) {
        if (elem->Pred_id(pred_idx) == air::base::Null_id) continue;
        REGION_ELEM_PTR pred_elem = elem->Pred(pred_idx);
        DFG_NODE_PTR    dfg_node  = pred_elem->Dfg_node();
        if (dfg_node->Is_node()) {
          anchors->emplace_back(NODE_INFO(dfg_node->Node_id()),
                                pred_elem->Callsite_info(),
                                pred_elem->Parent_func());
        } else if (dfg_node->Is_ssa_ver()) {
          anchors->emplace_back(NODE_INFO(dfg_node->Ssa_ver_id()),
                                pred_elem->Callsite_info(),
                                pred_elem->Parent_func());
        }
        break;
      }
    }
  }
}

class SM_RESCALE_MGR {
public:
  using CALLSITE_RS      = std::map<CALLSITE_INFO, RS_SET>;
  using FORMAL_SCALE_LEV = std::map<CALLSITE_INFO, VAR_SCALE_LEV::VEC>;

  SM_RESCALE_MGR(RESBM_CTX* ctx, CALLSITE_RS* callsite_rs,
                 FORMAL_SCALE_LEV* formal_scale_lev)
      : _ctx(ctx),
        _callsite_rs(callsite_rs),
        _formal_scale_lev(formal_scale_lev) {
    AIR_ASSERT(_ctx != nullptr);
    AIR_ASSERT(_callsite_rs != nullptr);
    AIR_ASSERT(_formal_scale_lev != nullptr);
  }

  void Handle_fixed_band(REGION_ID src, const CUT_TYPE* src_fixed_cut,
                         REGION_ID dst, const CUT_TYPE& dst_fixed_cut) {
    AIR_ASSERT(src != air::base::Null_id);
    AIR_ASSERT(dst != air::base::Null_id);
    AIR_ASSERT(src.Value() < dst.Value());

    uint32_t used_level = dst.Value() - src.Value();
    AIR_ASSERT(used_level > 0);
    SCALE_LEVEL scale_info(1, used_level);

    if (src_fixed_cut != nullptr) {
      Handle_fixed_src_region(src, scale_info, *src_fixed_cut);
    } else {
      Handle_plain_src_region(src, scale_info);
    }
    for (uint32_t id = src.Value() + 1; id < dst.Value(); ++id) {
      scale_info = Handle_internal_region(REGION_ID(id), scale_info);
    }
    Handle_dst_region(dst, scale_info, dst_fixed_cut);
  }

  void Handle_tail(REGION_ID src, const CUT_TYPE* src_fixed_cut, REGION_ID dst) {
    AIR_ASSERT(src != air::base::Null_id);
    AIR_ASSERT(dst != air::base::Null_id);
    AIR_ASSERT(src.Value() <= dst.Value());

    uint32_t used_level =
        (src_fixed_cut != nullptr ? dst.Value() - src.Value()
                                  : dst.Value() - src.Value() + 1);
    AIR_ASSERT(used_level > 0);
    SCALE_LEVEL scale_info(1, used_level);

    if (src_fixed_cut != nullptr) {
      Handle_fixed_src_region(src, scale_info, *src_fixed_cut);
    } else {
      Handle_plain_src_region(src, scale_info);
    }
    for (uint32_t id = src.Value() + 1; id <= dst.Value(); ++id) {
      scale_info = Handle_internal_region(REGION_ID(id), scale_info);
    }
  }

private:
  using SCC_NODE_ID        = air::opt::SCC_NODE_ID;
  using SCC_NODE_PTR       = air::opt::SCC_NODE_PTR;
  using CONST_SCC_NODE_PTR = const SCC_NODE_PTR&;

  REGION_CONTAINER* Region_cntr() const {
    return const_cast<REGION_CONTAINER*>(Context()->Region_cntr());
  }
  RESBM_CTX* Context() const { return _ctx; }

  void Set_formal_scale_level(CONST_REGION_ELEM_PTR elem,
                              const SCALE_LEVEL&    scale_lev) {
    DFG_NODE_PTR dfg_node = elem->Dfg_node();
    if (!dfg_node->Is_ssa_ver()) return;

    const SSA_CONTAINER* ssa_cntr =
        Context()->Region_cntr()->Ssa_cntr(elem->Parent_func());
    SSA_VER_PTR ver = dfg_node->Ssa_ver();
    if (ver->Kind() != VER_DEF_KIND::CHI) return;

    air::base::STMT_PTR def_stmt =
        ssa_cntr->Chi_node(ver->Def_chi_id())->Def_stmt();
    if (def_stmt->Opcode() != air::core::OPC_FUNC_ENTRY) return;

    SSA_SYM_PTR sym = ssa_cntr->Sym(ver->Sym_id());
    if (!sym->Is_addr_datum()) return;

    air::base::ADDR_DATUM_PTR addr_datum = ssa_cntr->Func_scope()->Addr_datum(
        air::base::ADDR_DATUM_ID(sym->Var_id()));
    if (!addr_datum->Is_formal()) return;

    FUNC_SCOPE* func_scope = addr_datum->Defining_func_scope();
    uint32_t    formal_id  = 0;
    for (; formal_id < func_scope->Formal_cnt(); ++formal_id) {
      if (func_scope->Formal(formal_id) == addr_datum) break;
    }
    AIR_ASSERT(formal_id < func_scope->Formal_cnt());

    VAR_SCALE_LEV formal_scale_lev(addr_datum, scale_lev);
    VAR_SCALE_LEV::VEC& formal_scale_list =
        (*_formal_scale_lev)[elem->Callsite_info()];
    if (formal_scale_list.size() <= formal_id) {
      formal_scale_list.resize(formal_id + 1);
    }
    formal_scale_list[formal_id] = formal_scale_lev;
  }

  void Update_scale_level(REGION_ELEM_ID elem_id, const SCALE_LEVEL& scale_lev) {
    REGION_ELEM_PTR elem = Region_cntr()->Region_elem(elem_id);
    Set_formal_scale_level(elem, scale_lev);
  }

  void Update_scale_level(CONST_SCC_NODE_PTR scc_node,
                          const SCALE_LEVEL& scale_lev) {
    for (SCC_NODE::ELEM_ITER elem_iter = scc_node->Begin_elem();
         elem_iter != scc_node->End_elem(); ++elem_iter) {
      Update_scale_level(REGION_ELEM_ID(*elem_iter), scale_lev);
    }
  }

  void Add_rescale_point(REGION_ELEM_ID elem_id) {
    REGION_ELEM_PTR elem     = Region_cntr()->Region_elem(elem_id);
    DFG_NODE_PTR    dfg_node = elem->Dfg_node();
    RS_SET&         rs_set   = (*_callsite_rs)[elem->Callsite_info()];
    if (dfg_node->Is_ssa_ver()) {
      rs_set.emplace(NODE_INFO(dfg_node->Ssa_ver_id()));
    } else {
      rs_set.emplace(NODE_INFO(dfg_node->Node_id()));
    }
  }

  void Handle_plain_src_region(REGION_ID region_id,
                               const SCALE_LEVEL& scale_lev) {
    REGION_PTR region = Region_cntr()->Region(region_id);
    for (REGION::ELEM_ITER elem_iter = region->Begin_elem();
         elem_iter != region->End_elem(); ++elem_iter) {
      Update_scale_level(elem_iter->Id(), scale_lev);
    }
  }

  void Handle_fixed_src_region(REGION_ID region_id, const SCALE_LEVEL& scale_lev,
                               const CUT_TYPE& fixed_bts_cut) {
    REGION_PTR           region   = Region_cntr()->Region(region_id);
    const SCC_CONTAINER* scc_cntr = Region_cntr()->Scc_cntr();
    Init_scc_trav_state(scc_cntr, region);

    std::list<SCC_NODE_PTR> worklist;
    for (REGION_ELEM_ID elem_id : fixed_bts_cut.Cut_elem()) {
      Update_scale_level(elem_id, scale_lev);
      SCC_NODE_ID  scc_id   = scc_cntr->Scc_node(elem_id);
      SCC_NODE_PTR scc_node = scc_cntr->Node(scc_id);
      scc_node->Set_trav_state(TRAV_STATE_VISITED);
      worklist.push_back(scc_node);
    }

    while (!worklist.empty()) {
      SCC_NODE_PTR scc_node = worklist.back();
      worklist.pop_back();
      scc_node->Set_trav_state(TRAV_STATE_VISITED);

      for (SCC_NODE::SCC_EDGE_ITER edge_iter = scc_node->Begin_succ();
           edge_iter != scc_node->End_succ(); ++edge_iter) {
        SCC_NODE_PTR succ_scc_node = edge_iter->Dst();
        if (!succ_scc_node->At_trav_state(TRAV_STATE_RAW)) continue;

        REGION_ID succ_region = Region_cntr()->Scc_region(succ_scc_node->Id());
        if (succ_region != region->Id()) continue;

        succ_scc_node->Set_trav_state(TRAV_STATE_PROCESSING);
        worklist.push_front(succ_scc_node);
        Update_scale_level(succ_scc_node, scale_lev);
      }
    }
  }

  void Handle_elem_ahead_rescale(const SCC_CONTAINER* scc_cntr,
                                 const REGION_PTR&    region,
                                 const SCALE_LEVEL&   scale_lev) {
    for (REGION::ELEM_ITER elem_iter = region->Begin_elem();
         elem_iter != region->End_elem(); ++elem_iter) {
      SCC_NODE_ID  scc_id   = scc_cntr->Scc_node(elem_iter->Id());
      SCC_NODE_PTR scc_node = scc_cntr->Node(scc_id);
      if (!scc_node->At_trav_state(TRAV_STATE_RAW)) continue;

      Update_scale_level(elem_iter->Id(), scale_lev);
    }
  }

  SCALE_LEVEL Handle_internal_region(REGION_ID region_id,
                                     const SCALE_LEVEL& scale_lev) {
    const CUT_TYPE& cut =
        Context()->Min_cut(region_id, scale_lev.Level(), MIN_CUT_RESCALE);
    for (REGION_ELEM_ID elem_id : cut.Cut_elem()) {
      Add_rescale_point(elem_id);
    }

    REGION_PTR           region   = Region_cntr()->Region(region_id);
    const SCC_CONTAINER* scc_cntr = Region_cntr()->Scc_cntr();
    Init_scc_trav_state(scc_cntr, region);

    SCALE_LEVEL rescale_scale_lev(scale_lev.Scale(), scale_lev.Level() - 1);
    SCALE_LEVEL mul_scale_lev(scale_lev.Scale() + 1, scale_lev.Level());
    std::list<SCC_NODE_PTR> worklist;
    for (REGION_ELEM_ID elem_id : cut.Cut_elem()) {
      SCC_NODE_ID  scc_id   = scc_cntr->Scc_node(elem_id);
      SCC_NODE_PTR scc_node = scc_cntr->Node(scc_id);
      if (scc_node->Elem_cnt() > 1) {
        Update_scale_level(scc_node, mul_scale_lev);
      }

      Update_scale_level(elem_id, rescale_scale_lev);
      scc_node->Set_trav_state(TRAV_STATE_VISITED);
      worklist.push_back(scc_node);
    }

    while (!worklist.empty()) {
      SCC_NODE_PTR scc_node = worklist.back();
      worklist.pop_back();
      for (SCC_NODE::SCC_EDGE_ITER edge_iter = scc_node->Begin_succ();
           edge_iter != scc_node->End_succ(); ++edge_iter) {
        SCC_NODE_PTR succ_scc_node = edge_iter->Dst();
        if (succ_scc_node->Trav_state() == TRAV_STATE_VISITED) continue;

        REGION_ID succ_region = Region_cntr()->Scc_region(succ_scc_node->Id());
        if (succ_region != region->Id()) continue;
        succ_scc_node->Set_trav_state(TRAV_STATE_VISITED);
        worklist.push_front(succ_scc_node);

        Update_scale_level(succ_scc_node, rescale_scale_lev);
      }
    }

    Handle_elem_ahead_rescale(scc_cntr, region, mul_scale_lev);
    return rescale_scale_lev;
  }

  void Handle_dst_region(REGION_ID region_id, const SCALE_LEVEL& scale_lev,
                         const CUT_TYPE& fixed_bts_cut) {
    AIR_ASSERT(scale_lev.Scale() == scale_lev.Level());
    const CUT_TYPE& rs_cut =
        Context()->Min_cut(region_id, 1, MIN_CUT_RESCALE);
    for (REGION_ELEM_ID elem_id : rs_cut.Cut_elem()) {
      Add_rescale_point(elem_id);
    }

    REGION_PTR           region   = Region_cntr()->Region(region_id);
    const SCC_CONTAINER* scc_cntr = Region_cntr()->Scc_cntr();
    Init_scc_trav_state(scc_cntr, region);

    std::list<SCC_NODE_PTR> worklist;
    SCALE_LEVEL mul_scale_lev(scale_lev.Scale() + 1, scale_lev.Level());
    SCALE_LEVEL rescale_scale_lev(scale_lev.Scale(), scale_lev.Level() - 1);
    for (REGION_ELEM_ID elem_id : rs_cut.Cut_elem()) {
      SCC_NODE_ID  scc_id   = scc_cntr->Scc_node(elem_id);
      SCC_NODE_PTR scc_node = scc_cntr->Node(scc_id);
      scc_node->Set_trav_state(TRAV_STATE_PROCESSING);
      worklist.push_back(scc_node);

      Update_scale_level(scc_node, mul_scale_lev);
      Update_scale_level(elem_id, rescale_scale_lev);
    }

    for (REGION_ELEM_ID elem_id : fixed_bts_cut.Cut_elem()) {
      SCC_NODE_ID  scc_id   = scc_cntr->Scc_node(elem_id);
      SCC_NODE_PTR scc_node = scc_cntr->Node(scc_id);
      if (scc_node->At_trav_state(TRAV_STATE_PROCESSING)) {
        Update_scale_level(elem_id, rescale_scale_lev);
      } else if (scc_node->At_trav_state(TRAV_STATE_RAW)) {
        Update_scale_level(elem_id, mul_scale_lev);
      }
      scc_node->Set_trav_state(TRAV_STATE_VISITED);
    }

    while (!worklist.empty()) {
      SCC_NODE_PTR scc_node = worklist.back();
      worklist.pop_back();

      for (SCC_NODE::SCC_EDGE_ITER edge_iter = scc_node->Begin_succ();
           edge_iter != scc_node->End_succ(); ++edge_iter) {
        SCC_NODE_PTR succ_scc_node = edge_iter->Dst();
        REGION_ID    succ_region = Region_cntr()->Scc_region(succ_scc_node->Id());
        if (succ_region != region->Id()) continue;

        worklist.push_front(succ_scc_node);
        if (!succ_scc_node->At_trav_state(TRAV_STATE_VISITED)) {
          succ_scc_node->Set_trav_state(scc_node->Trav_state());
        }
        if (succ_scc_node->At_trav_state(TRAV_STATE_PROCESSING)) {
          Update_scale_level(succ_scc_node, rescale_scale_lev);
        }
      }
    }

    Handle_elem_ahead_rescale(scc_cntr, region, mul_scale_lev);
  }

  RESBM_CTX*        _ctx              = nullptr;
  CALLSITE_RS*      _callsite_rs      = nullptr;
  FORMAL_SCALE_LEV* _formal_scale_lev = nullptr;
};

class SM_RESCALE_INSERTER {
public:
  using FUNC_ID          = air::base::FUNC_ID;
  using FUNC_SCOPE       = air::base::FUNC_SCOPE;
  using GLOB_SCOPE       = air::base::GLOB_SCOPE;
  using SSA_VER_PTR      = air::opt::SSA_VER_PTR;
  using DFG_NODE_ID      = air::opt::DFG_NODE_ID;
  using DFG_NODE_PTR     = air::opt::DFG_NODE_PTR;
  using FORMAL_SCALE_LEV = std::map<CALLSITE_INFO, VAR_SCALE_LEV::VEC>;
  using CALLSITE_RS      = std::map<CALLSITE_INFO, RS_SET>;
  using PLAN2FUNC        = std::map<RS_SET, FUNC_ID>;
  using CORE_HANDLER     = air::core::HANDLER<CORE_BTS_INSERTER_IMPL>;
  using CKKS_HANDLER     = HANDLER<CKKS_BTS_INSERTER_IMPL>;
  using VISITOR = air::base::VISITOR<INSERTER_CTX, CORE_HANDLER, CKKS_HANDLER>;

  SM_RESCALE_INSERTER(RESBM_CTX* resbm_ctx, GLOB_SCOPE* glob_scope,
                      core::LOWER_CTX* lower_ctx, const CALLSITE_RS& callsite_rs,
                      const FORMAL_SCALE_LEV& formal_scale_lev)
      : _resbm_ctx(resbm_ctx),
        _glob_scope(glob_scope),
        _lower_ctx(lower_ctx),
        _callsite_rs(callsite_rs),
        _formal_scale_lev(formal_scale_lev) {}

  void Perform() {
    const REGION_CONTAINER* reg_cntr      = Resbm_ctx()->Region_cntr();
    FUNC_ID                 entry_func_id = reg_cntr->Entry_func();
    for (const std::pair<CALLSITE_INFO, RS_SET>& call_rs_pair : _callsite_rs) {
      const CALLSITE_INFO& callsite = call_rs_pair.first;
      const RS_SET&        rs_set   = call_rs_pair.second;
      if (rs_set.empty()) continue;
      if (callsite.Callee() == entry_func_id) {
        Handle_entry_func(rs_set);
      } else {
        Handle_called_func(callsite, rs_set);
      }
    }
  }

private:
  void Rescale_ssa_ver(INSERTER_CTX& ctx, SSA_VER_PTR ver) {
    STMT_PTR def_stmt;
    if (ver->Kind() == air::opt::VER_DEF_KIND::PHI) {
      def_stmt = ctx.Ssa_cntr()->Phi_node(ver->Def_phi_id())->Def_stmt();
    } else if (ver->Kind() == VER_DEF_KIND::CHI ||
               ver->Kind() == VER_DEF_KIND::STMT) {
      def_stmt = ctx.Cntr()->Stmt(ver->Def_stmt_id());
    } else {
      AIR_ASSERT_MSG(false, "SSA_VER with not supported define kind");
    }

    STMT_PTR rs_stmt = ctx.Rescale_ssa_ver(ver);
    if (rs_stmt != STMT_PTR()) {
      if (def_stmt->Node()->Is_entry()) {
        ctx.Cntr()->Stmt_list().Prepend(rs_stmt);
      } else {
        STMT_LIST sl(def_stmt->Parent_node());
        sl.Append(def_stmt, rs_stmt);
      }
    }
  }

  void Rescale_expr(INSERTER_CTX& ctx, DFG_NODE_PTR dfg_node) {
    AIR_ASSERT(dfg_node->Is_node());
    NODE_PTR node = dfg_node->Node();
    AIR_ASSERT(Lower_ctx()->Is_cipher_type(node->Rtype_id()) ||
               Lower_ctx()->Is_cipher3_type(node->Rtype_id()));
    NODE_PTR rs_node = ctx.Rescale_expr(node);
    for (DFG_EDGE_ITER edge_iter = dfg_node->Begin_succ();
         edge_iter != dfg_node->End_succ(); ++edge_iter) {
      DFG_NODE_PTR dst_node = edge_iter->Dst();
      if (dst_node->Is_node()) {
        NODE_PTR parent_node = dst_node->Node();
        for (uint32_t id = 0; id < parent_node->Num_child(); ++id) {
          if (parent_node->Child_id(id) != node->Id()) continue;
          parent_node->Set_child(id, rs_node);
        }
      } else if (dst_node->Is_ssa_ver()) {
        SSA_VER_PTR ssa_ver = dst_node->Ssa_ver();
        AIR_ASSERT(ssa_ver->Kind() == air::opt::VER_DEF_KIND::STMT);
        STMT_PTR def_stmt = ssa_ver->Def_stmt();
        OPCODE   opc      = def_stmt->Opcode();
        if (opc == air::core::OPC_ST || opc == air::core::OPC_STP) {
          def_stmt->Node()->Set_child(0, rs_node);
        } else if (opc == air::core::OPC_IST) {
          def_stmt->Node()->Set_child(1, rs_node);
        } else {
          AIR_ASSERT_MSG(false, "not supported define opcode");
        }
      } else {
        AIR_ASSERT_MSG(false, "not supported DFG node");
      }
    }
  }

  void Rescale_entry_func(FUNC_ID func, const RS_SET& rs_set) {
    const DFG_CONTAINER* dfg_cntr = Resbm_ctx()->Region_cntr()->Dfg_cntr(func);
    const SSA_CONTAINER* ssa_cntr = dfg_cntr->Ssa_cntr();
    CONTAINER*           cntr     = ssa_cntr->Container();
    INSERTER_CTX         insert_ctx(rs_set, ssa_cntr, cntr, Lower_ctx(),
                                    Resbm_ctx());
    for (const NODE_INFO& rs_info : rs_set) {
      if (rs_info.Is_expr()) {
        DFG_NODE_ID dfg_node_id = dfg_cntr->Node_id(rs_info.Expr());
        AIR_ASSERT(dfg_node_id != Null_id);
        DFG_NODE_PTR dfg_node = dfg_cntr->Node(dfg_node_id);
        Rescale_expr(insert_ctx, dfg_node);
      } else if (rs_info.Is_ssa_ver()) {
        SSA_VER_PTR ver = ssa_cntr->Ver(rs_info.Ssa_ver());
        Rescale_ssa_ver(insert_ctx, ver);
      } else {
        AIR_ASSERT_MSG(false, "not supported data kind");
      }
    }
  }

  FUNC_PTR Planed_func(FUNC_ID func, const RS_SET& rs_set) {
    FUNC_ID planned_func = Plan_func(rs_set);
    if (!planned_func.Is_null()) {
      return Glob_scope()->Func(planned_func);
    }

    FUNC_PTR           orig_func       = Glob_scope()->Func(func);
    FUNC_SCOPE*        orig_func_scope = &Glob_scope()->Open_func_scope(func);
    SIGNATURE_TYPE_PTR sig  = orig_func->Entry_point()->Type()->Cast_to_sig();
    const SPOS&        spos = Glob_scope()->Unknown_simple_spos();

    std::string new_func_name(orig_func->Name()->Char_str());
    new_func_name += "_" + std::to_string(_plan_func.size());

    FUNC_PTR new_func = Glob_scope()->New_func(new_func_name.c_str(), spos);
    Glob_scope()->New_entry_point(sig, new_func, new_func_name.c_str(), spos);

    FUNC_SCOPE* new_func_scope = &Glob_scope()->New_func_scope(new_func);
    new_func_scope->Clone(*orig_func_scope);
    CONTAINER* new_cntr = &new_func_scope->Container();
    new_cntr->New_func_entry(spos);

    const SSA_CONTAINER* ssa_cntr = Resbm_ctx()->Region_cntr()->Ssa_cntr(func);
    INSERTER_CTX         inserter_ctx(rs_set, ssa_cntr, new_cntr, Lower_ctx(),
                              Resbm_ctx());
    VISITOR              visitor(inserter_ctx);
    (void)visitor.Visit<INSERTER_RETV>(ssa_cntr->Container()->Entry_node());

    AIR_ASSERT_MSG(inserter_ctx.Rescaled_all(), "exists not processed rescale");

    Set_plan_func(rs_set, new_func->Id());
    return new_func;
  }

  void Set_param_scale_lev(const CALLSITE_INFO& callsite, NODE_PTR param,
                           uint32_t formal_id) {
    if (!Lower_ctx()->Is_cipher_type(param->Rtype_id()) &&
        !Lower_ctx()->Is_cipher3_type(param->Rtype_id())) {
      return;
    }

    FORMAL_SCALE_LEV::const_iterator iter = _formal_scale_lev.find(callsite);
    AIR_ASSERT(iter != _formal_scale_lev.end());

    FUNC_SCOPE*    func_scope = &Glob_scope()->Open_func_scope(callsite.Callee());
    ADDR_DATUM_PTR formal     = func_scope->Formal(formal_id);

    const VAR_SCALE_LEV::VEC& formal_scale_vec = iter->second;
    AIR_ASSERT(formal_scale_vec.size() > formal_id);
    const VAR_SCALE_LEV& formal_scale_lev = formal_scale_vec[formal_id];
    AIR_ASSERT(formal_scale_lev.Var() == formal);
    AIR_ASSERT(!formal_scale_lev.Scale_lev().Is_invalid());
    uint32_t level = formal_scale_lev.Scale_lev().Level() + 1;

    param->Set_attr(core::FHE_ATTR_KIND::LEVEL, &level, 1);
  }

  void Handle_entry_func(const RS_SET& rs_set) {
    FUNC_ID entry_func_id = Resbm_ctx()->Region_cntr()->Entry_func();
    Rescale_entry_func(entry_func_id, rs_set);
  }

  void Handle_called_func(const CALLSITE_INFO& callsite, const RS_SET& rs_set) {
    const REGION_CONTAINER* reg_cntr    = Resbm_ctx()->Region_cntr();
    FUNC_ID                 caller_func = callsite.Caller();
    FUNC_ID                 callee_func = callsite.Callee();
    AIR_ASSERT(!callee_func.Is_null());
    AIR_ASSERT(!caller_func.Is_null() && caller_func == reg_cntr->Entry_func());

    FUNC_PTR        rs_func       = Planed_func(callee_func, rs_set);
    CONST_ENTRY_PTR rs_func_entry = rs_func->Entry_point();

    const DFG_CONTAINER* dfg_cntr   = reg_cntr->Dfg_cntr(caller_func);
    FUNC_SCOPE*          func_scope = &Glob_scope()->Open_func_scope(caller_func);
    CONTAINER*           cntr       = &func_scope->Container();
    NODE_PTR             call_node  = dfg_cntr->Node(callsite.Node())->Node();
    STMT_PTR new_call = cntr->New_call(rs_func_entry, call_node->Ret_preg(),
                                       call_node->Num_arg(), call_node->Spos());
    for (uint32_t id = 0; id < call_node->Num_child(); ++id) {
      NODE_PTR child = call_node->Child(id);
      new_call->Node()->Set_child(id, child);
      Set_param_scale_lev(callsite, child, id);
    }
    new_call->Node()->Copy_attr(call_node);

    STMT_LIST stmt_list(call_node->Stmt()->Parent_node());
    stmt_list.Append(call_node->Stmt(), new_call);
    stmt_list.Remove(call_node->Stmt());
  }

  FUNC_ID Plan_func(const RS_SET& rs_set) const {
    PLAN2FUNC::const_iterator iter = _plan_func.find(rs_set);
    if (iter == _plan_func.end()) return FUNC_ID();
    return iter->second;
  }

  void Set_plan_func(const RS_SET& rs_set, FUNC_ID func) {
    AIR_ASSERT(!func.Is_null());
    _plan_func[rs_set] = func;
  }

  RESBM_CTX*       Resbm_ctx() const { return _resbm_ctx; }
  GLOB_SCOPE*      Glob_scope() const { return _glob_scope; }
  core::LOWER_CTX* Lower_ctx() const { return _lower_ctx; }

  RESBM_CTX*       _resbm_ctx  = nullptr;
  core::LOWER_CTX* _lower_ctx  = nullptr;
  GLOB_SCOPE*      _glob_scope = nullptr;
  CALLSITE_RS      _callsite_rs;
  FORMAL_SCALE_LEV _formal_scale_lev;
  PLAN2FUNC        _plan_func;
};

}  // namespace

SM::SM(const air::driver::DRIVER_CTX* driver_ctx, const CKKS_CONFIG* cfg,
       GLOB_SCOPE* glob_scope, LOWER_CTX* lower_ctx)
    : _glob_scope(glob_scope),
      _lower_ctx(lower_ctx),
      _config(cfg),
      _driver_ctx(driver_ctx) {}

void SM::Update_trace_detail() const {
  CKKS_CONFIG* config = const_cast<CKKS_CONFIG*>(_config);
  config->_trace_detail |= config->Trace_resbm() ? TD_RESBM_SCALE_MGR : 0;
  config->_trace_detail |= config->Trace_min_cut() ? TD_RESBM_MIN_CUT : 0;
  config->_trace_detail |= config->Trace_rsc_insert() ? TD_RESBM_RS_INSERT : 0;
}

R_CODE SM::Perform() {
  Update_trace_detail();
  _applied = false;

  REGION_CONTAINER anchor_region_cntr(_glob_scope, _lower_ctx);
  REGION_BUILDER   anchor_builder(&anchor_region_cntr, _driver_ctx);
  R_CODE           ret = anchor_builder.Perform();
  if (ret != R_CODE::NORMAL) return ret;

  std::vector<FIXED_BTS_ANCHOR> fixed_bts_anchors;
  Collect_fixed_bootstrap_anchors(&anchor_region_cntr, &fixed_bts_anchors);

  std::vector<SAVED_BOOTSTRAP> saved_bootstraps;
  Strip_bootstrap_nodes(_glob_scope, &saved_bootstraps);

  REGION_CONTAINER region_cntr(_glob_scope, _lower_ctx);
  RESBM_CTX        ctx(_driver_ctx, _config, &region_cntr);
  clock_t          start = clock();

  REGION_BUILDER region_builder(&region_cntr, _driver_ctx);
  ret = region_builder.Perform();
  if (ret != R_CODE::NORMAL) {
    Restore_bootstrap_nodes(saved_bootstraps);
    return ret;
  }

  std::map<REGION_ID, FIXED_BTS_INFO> fixed_bts_by_region;
  for (const FIXED_BTS_ANCHOR& anchor : fixed_bts_anchors) {
    REGION_ELEM_PTR child_elem = Find_fixed_bootstrap_elem(&region_cntr, anchor);
    if (child_elem == REGION_ELEM_PTR()) continue;
    FIXED_BTS_INFO& info = fixed_bts_by_region[child_elem->Region_id()];
    info.Cut_elem.insert(child_elem->Id());
  }

  SM_RESCALE_MGR::CALLSITE_RS      callsite_rs;
  SM_RESCALE_MGR::FORMAL_SCALE_LEV formal_scale_lev;
  SM_RESCALE_MGR                   mgr(&ctx, &callsite_rs, &formal_scale_lev);

  std::vector<REGION_ID> fixed_regions;
  fixed_regions.reserve(fixed_bts_by_region.size());
  for (const std::pair<const REGION_ID, FIXED_BTS_INFO>& pair :
       fixed_bts_by_region) {
    if (!pair.second.Cut_elem.empty()) {
      fixed_regions.push_back(pair.first);
    }
  }
  if (fixed_regions.empty()) {
    ctx.Trace(TD_RESBM_SCALE_MGR,
              "SM skipped: no fixed bootstrap anchors were found.\n");
    Restore_bootstrap_nodes(saved_bootstraps);
    return R_CODE::NORMAL;
  }
  std::sort(fixed_regions.begin(), fixed_regions.end(),
            [](REGION_ID lhs, REGION_ID rhs) { return lhs.Value() < rhs.Value(); });

  REGION_ID last_region(region_cntr.Region_cnt() - 1);
  auto max_consumable = [&](REGION_ID band_src,
                            const CUT_TYPE* band_src_fixed_cut) -> uint32_t {
    if (band_src_fixed_cut != nullptr) return _config->Max_bts_lvl();
    if (band_src.Value() == 1 && _config->Input_cipher_lvl() > 0) {
      return _config->Input_cipher_lvl() - 1;
    }
    return _config->Max_bts_lvl();
  };
  REGION_ID        src(1);
  const CUT_TYPE*  src_fixed_cut = nullptr;
  size_t           fixed_idx     = 0;
  if (!fixed_regions.empty() && fixed_regions.front().Value() == 1) {
    src = fixed_regions.front();
    fixed_idx = 1;
  }

  std::vector<CUT_TYPE> fixed_cuts;
  fixed_cuts.reserve(fixed_regions.size());
  for (REGION_ID region_id : fixed_regions) {
    fixed_cuts.emplace_back(&region_cntr, fixed_bts_by_region[region_id].Cut_elem,
                            0.);
  }

  auto Fixed_cut = [&](REGION_ID region_id) -> const CUT_TYPE* {
    for (size_t i = 0; i < fixed_regions.size(); ++i) {
      if (fixed_regions[i] == region_id) return &fixed_cuts[i];
    }
    return nullptr;
  };

  if (src == REGION_ID(1) && fixed_idx == 1) {
    src_fixed_cut = Fixed_cut(src);
  }

  for (; fixed_idx < fixed_regions.size(); ++fixed_idx) {
    REGION_ID dst = fixed_regions[fixed_idx];
    if (dst.Value() <= src.Value()) continue;

    uint32_t required_level = dst.Value() - src.Value();
    uint32_t avail_level = max_consumable(src, src_fixed_cut);
    if (required_level > avail_level) {
      ctx.Trace(TD_RESBM_SCALE_MGR, "SM skipped: fixed band [", src.Value(),
                ", ", dst.Value(), "] requires ", required_level,
                " levels, but only ", avail_level, " are consumable.\n");
      Restore_bootstrap_nodes(saved_bootstraps);
      return R_CODE::NORMAL;
    }

    const CUT_TYPE* dst_fixed_cut = Fixed_cut(dst);
    AIR_ASSERT(dst_fixed_cut != nullptr);
    mgr.Handle_fixed_band(src, src_fixed_cut, dst, *dst_fixed_cut);
    src           = dst;
    src_fixed_cut = dst_fixed_cut;
  }

  if (src_fixed_cut != nullptr && src.Value() <= last_region.Value()) {
    uint32_t required_level = last_region.Value() - src.Value();
    uint32_t avail_level = max_consumable(src, src_fixed_cut);
    if (required_level > avail_level) {
      ctx.Trace(TD_RESBM_SCALE_MGR, "SM skipped: tail band [", src.Value(),
                ", ", last_region.Value(), "] requires ",
                required_level, " levels, but only ", avail_level,
                " are consumable.\n");
      Restore_bootstrap_nodes(saved_bootstraps);
      return R_CODE::NORMAL;
    }
    mgr.Handle_tail(src, src_fixed_cut, last_region);
  }

  SM_RESCALE_INSERTER inserter(&ctx, _glob_scope, _lower_ctx, callsite_rs,
                               formal_scale_lev);
  inserter.Perform();
  Restore_bootstrap_nodes(saved_bootstraps);
  _applied = true;

  clock_t end_t = clock();
  ctx.Trace(TD_RESBM_SCALE_MGR, "SM end. Consume ",
            1.0 * (end_t - start) / CLOCKS_PER_SEC, " s.\n");
  return R_CODE::NORMAL;
}

}  // namespace ckks
}  // namespace fhe
