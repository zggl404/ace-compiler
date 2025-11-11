//-*-c++-*-
//=============================================================================
//
// Copyright (c) Ant Group Co., Ltd
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//=============================================================================

#ifndef NN_VECTOR_CF_CTX_H
#define NN_VECTOR_CF_CTX_H

#include "air/base/instrument_ctx.h"
#include "air/core/default_handler.h"
#include "air/opt/ssa_build.h"
#include "air/opt/ssa_container.h"
#include "nn/vector/cf_simp.h"
#include "nn/vector/config.h"
#include "nn/vector/vector_ctx.h"
#include "nn/vector/vector_enum.h"
#include "nn/vector/vector_gen.h"
#include "nn/vector/vector_utils.h"

namespace nn {

namespace vector {

using namespace air::base;
using namespace air::driver;

using CF_DEF_SYM_NODE_VEC = std::vector<NODE_PTR>;

class CF_CTX : public INSTRUMENT_CTX {
public:
  CF_CTX(FUNC_SCOPE* func_scope, VECTOR_CTX& ctx, const DRIVER_CTX* driver_ctx,
         const VECTOR_CONFIG& cfg, CF_MAP cf_map)
      : _func_scope(func_scope),
        _ctx(ctx),
        _driver_ctx(driver_ctx),
        _config(cfg),
        _ssa_cntr(&_func_scope->Container()),
        _cf_map(cf_map),
        _def_sym_node_vec() {}

  template <typename RETV, typename VISITOR>
  RETV Handle_node(VISITOR* visitor, NODE_PTR node) {
    for (uint32_t i = 0; i < node->Num_child(); ++i) {
      visitor->template Visit<RETV>(node->Child(i));
    }

    // after copy propagation, mulc node has been child node.
    // if current node is constant folding target node, do constant folding
    // directly else, do identity_transformation

    if (this->Is_mul_const_op(node)) {
      if (_cur_cf_id != air::base::Null_id &&
          (_cf_map[node->Id()] == _cf_map[_cur_cf_id]) &&
          this->Is_mul_const_op(node->Child(0))) {
        // for case4
        // do constant folding directly when two mulc consecutive and has same
        // target folding node.
        NODE_PTR child_node = node->Child(0);
        Constant_folding(node);
        node->Set_child(0, child_node->Child(0));
        _cur_cf_id =
            air::base::Null_id;  // ask: when delete here, _cf_map[node->Id()]
                                 // == _cf_map[_cur_cf_id] will cause C++ map
                                 // strange behavior.
      }
    } else if ((node->Num_child() > 0) &&
               this->Is_mul_const_op(node->Child(0))) {
      if (((_cur_cf_id != air::base::Null_id) &&
           _cf_map[_cur_cf_id] == node->Id()) ||
          (node->Opcode() ==
           OPCODE(nn::core::NN,
                  nn::core::CONV))) {  // because cf_simp doen't process target
                                       // node correctly, hard code here!
        // do constant folding directly
        NODE_PTR child_node = node->Child(0);
        AIR_ASSERT(this->Is_mul_const_op(child_node));
        Constant_folding(node);
        node->Set_child(0, child_node->Child(0));
        _cur_cf_id = air::base::Null_id;
      } else {
        // ops(mul(input))  --> mul(ops'(input))
        Do_identity_transformation(node);
      }
    }

    // mark current constant folding source node
    if (_cf_map.find(node->Id()) != _cf_map.end()) {
      _cur_cf_id = node->Id();
    }

    return RETV();
  }

  // declare access API for VECTOR_CTX
  DECLARE_VECTOR_CTX_ACCESS_API(_ctx)

  // declare access API for VECTOR_CONFIG
  DECLARE_VECTOR_CONFIG_ACCESS_API(_config)

  // declare trace API for detail tracing
  DECLARE_TRACE_DETAIL_API(_config, _driver_ctx)

  CF_DEF_SYM_NODE_VEC& Get_def_sym_node_vec() { return _def_sym_node_vec; }

  void Insert_def_sym_node_vec(NODE_PTR def_sym_node) {
    _def_sym_node_vec.push_back(def_sym_node);
  }

  void Remove_def_sym_node(NODE_PTR def_sym_node) {
    // Remove the element using erase function and iterators
    auto it = std::find(_def_sym_node_vec.begin(), _def_sym_node_vec.end(),
                        def_sym_node);

    AIR_ASSERT(it != _def_sym_node_vec.end());
    // If element is found found, erase it
    if (it != _def_sym_node_vec.end()) {
      _def_sym_node_vec.erase(it);
    }
  }

  void Build_ssa() {
    air::opt::SSA_BUILDER ssa_builder(_func_scope, &_ssa_cntr, _driver_ctx);
    ssa_builder.Perform();
  }

  air::opt::SSA_CONTAINER* Ssa_cntr() { return &_ssa_cntr; }
  air::base::CONTAINER*    Container() { return _ssa_cntr.Container(); }

  //! @brief judge whether it is a const multiplication operation
  bool Is_mul_const_op(NODE_PTR node) {
    if (((node->Opcode() ==
          OPCODE(nn::vector::VECTOR, nn::vector::VECTOR_OPCODE::MUL)) ||
         (node->Opcode() == OPCODE(nn::core::NN, nn::core::MUL))) &&
        (node->Child(1)->Opcode() == air::core::OPC_LDC)) {
      return true;
    }
    return false;
  }

  //! @brief judge whether this is a contant folding target node
  //! target node currenly are conv, gemm and
  //! mul op which multiply variable with constant
  //! these ops are the folding destination.
  bool Is_cf_target(NODE_PTR node) {
    if ((node->Opcode() == OPCODE(nn::core::NN, nn::core::GEMM)) ||
        (node->Opcode() == OPCODE(nn::core::NN, nn::core::CONV)) ||
        (((node->Opcode() ==
           OPCODE(nn::vector::VECTOR, nn::vector::VECTOR_OPCODE::MUL)) ||
          (node->Opcode() == OPCODE(nn::core::NN, nn::core::MUL))) &&
         (node->Child(1)->Opcode() == air::core::OPC_LDC))) {
      return true;
    }
    return false;
  }

  //! @brief judge whether this is a contant folding target node
  //! target node currenly are conv, gemm and
  //! mul op which multiply variable with constant
  //! these ops are the folding destination.
  bool Is_cf_strong_target(NODE_PTR node) {
    if ((node->Opcode() == OPCODE(nn::core::NN, nn::core::GEMM)) ||
        (node->Opcode() == OPCODE(nn::core::NN, nn::core::CONV))) {
      return true;
    }
    return false;
  }

  //! @brief judge whether this is a contant folding target node
  //! target node currenly are conv, gemm and
  //! mul op which multiply variable with constant
  //! these ops are the folding destination.
  bool Is_cf_weak_target(NODE_PTR node) {
    if ((((node->Opcode() ==
           OPCODE(nn::vector::VECTOR, nn::vector::VECTOR_OPCODE::MUL)) ||
          (node->Opcode() == OPCODE(nn::core::NN, nn::core::MUL))) &&
         (node->Child(1)->Opcode() == air::core::OPC_LDC))) {
      return true;
    }
    return false;
  }

  //! @brief folding scalar operand in multiply op to dest node's weight
  //! constant when dest node is conv/gemm, or folding it to dest node's
  //! constant operand when dest node is mul node.
  //! 1. get scalar operand of multiply op,
  //! 2. get dest node's first weight child or first constant node,
  //! 3. do constant folding,
  //! 4. set back weight or constant after folding to dest node.
  //! @param mul_scalar_node: multiply node whose second child is scalar.
  void Constant_folding(NODE_PTR node) {
    AIR_ASSERT_MSG(
        (node->Opcode() == OPCODE(nn::core::NN, nn::core::GEMM)) ||
            (node->Opcode() == OPCODE(nn::core::NN, nn::core::CONV)) ||
            (node->Opcode() == OPCODE(nn::core::NN, nn::core::MUL)) ||
            (node->Opcode() ==
             OPCODE(nn::vector::VECTOR, nn::vector::VECTOR_OPCODE::MUL)),
        "folding target node should only be gemm, conv or mulc "
        "till now");

    CONTAINER*  cntr   = this->Container();
    GLOB_SCOPE* gscope = cntr->Glob_scope();

    NODE_PTR mul_scalar_node = node->Child(0);
    // 1. get scalar operand of multiply op
    NODE_PTR scalar_operand = mul_scalar_node->Child(1);
    AIR_ASSERT_MSG(scalar_operand->Rtype()->Is_prim(),
                   "multiply node's second child must be primitive type");
    float scalar_val = scalar_operand->Const()->Float_literal().Val_as_float();

    if (node->Opcode() == OPCODE(nn::core::NN, nn::core::GEMM) ||
        node->Opcode() == OPCODE(nn::core::NN, nn::core::CONV)) {
      // 2. get dest node's first weight child
      NODE_PTR weight_node = node->Child(1);
      int64_t  channel_out = 0, channel_in_kernel = 0, kernel_height = 0,
              kernel_width = 0;
      Get_array_nchw(weight_node->Rtype(), channel_out, channel_in_kernel,
                     kernel_height, kernel_width);

      const float* cptr = weight_node->Const()->Array_ptr<float>();
      FPVEC        weight(cptr, cptr + channel_out * channel_in_kernel *
                                           kernel_height * kernel_width);
      // 3. folding scalar constant value into dest node's weight operant
      std::transform(weight.begin(), weight.end(), weight.begin(),
                     std::bind(std::multiplies<float>(), std::placeholders::_1,
                               scalar_val));

      // 4. set back weight after constant folding to dest node
      std::string cf_weight_str =
          New_array_name("const_fuse_weight_float",
                         weight_node->Rtype()->Cast_to_arr()->Shape());

      CONSTANT_PTR cf_weight_const = New_array_const(
          gscope, cf_weight_str.c_str(),
          channel_out * channel_in_kernel * kernel_height * kernel_width,
          weight_node->Rtype()->Cast_to_arr()->Elem_type(),
          weight_node->Rtype()->Cast_to_arr()->Shape(), (void*)weight.data(),
          node->Spos());
      NODE_PTR cf_weight = cntr->New_ldc(cf_weight_const, node->Spos());

      node->Set_child(1, cf_weight);
    } else if (node->Opcode() ==
               OPCODE(nn::vector::VECTOR, nn::vector::VECTOR_OPCODE::MUL)) {
      // 2. get constant operand of target multiply op
      NODE_PTR dest_const_operand = node->Child(1);
      AIR_ASSERT_MSG(dest_const_operand->Rtype()->Is_prim(),
                     "till now, only support destination multiply node's "
                     "second child must be primitive type");
      float dest_const_val =
          dest_const_operand->Const()->Float_literal().Val_as_float();

      // 3. folding scalar constant value into dest node's mul operand
      float folding_val = scalar_val * dest_const_val;

      // 4. set back operand after constant folding to dest node
      CONSTANT_PTR folding_const =
          gscope->New_const(CONSTANT_KIND::FLOAT, dest_const_operand->Rtype(),
                            (long double)folding_val);
      NODE_PTR folding_node = cntr->New_ldc(folding_const, node->Spos());
      node->Set_child(1, folding_node);
    } else {
      AIR_ASSERT_MSG(
          false, "only gemm, conv, mulc is supported for constant folding now");
    }

    if (_config.Fusion_count()) {
      _ctx.Incr_fusion_count();
    }
  }

  //! @brief do identity transformation between node and children
  //! mulc node. after this transformation, mulc node
  //! becomes the parent node, and the original parent node will be
  //! mulc node's child node.
  void Do_identity_transformation(NODE_PTR node) {
    AIR_ASSERT(node->Opcode() != OPCODE(nn::core::NN, nn::core::GEMM) &&
               node->Opcode() != OPCODE(nn::core::NN, nn::core::CONV));

    NODE_PTR child_node = node->Child(0);
    AIR_ASSERT(this->Is_mul_const_op(child_node));

    // change op node's child0 to mulc's child0
    node->Set_child(0, child_node->Child(0));

    // save op node's tmp result to preg
    CONTAINER* cntr     = this->Container();
    PREG_PTR   tmp_preg = cntr->Parent_func_scope()->New_preg(node->Rtype());
    STMT_PTR   st_tmp   = cntr->New_stp(node, tmp_preg, node->Spos());
    this->Prepend(st_tmp);

    // change mulc node's child to op node.
    child_node->Set_child(0, cntr->New_ldp(tmp_preg, node->Spos()));

    // make this new mulc to make prop mulc simple
    this->Insert_cf_map(child_node->Id(), _cf_map[_cur_cf_id]);

    // get the parent node of current node.
    NODE_PTR parent_node = this->Parent(1);
    // change appropriate child to new mulc node
    for (uint32_t i = 0; i < parent_node->Num_child(); i++) {
      if (parent_node->Child(i)->Id() == node->Id()) {
        parent_node->Set_child(i, child_node);
      }
    }
  }

  //! @brief Partial copy propation, only copy propagate strided_slice define
  //! site to use site.
  void Partial_copy_prop(NODE_PTR node) {
    air::opt::SSA_CONTAINER* ssa_cntr = this->Ssa_cntr();
    air::opt::SSA_VER_PTR    ssa_ver  = ssa_cntr->Node_ver(node->Id());
    AIR_ASSERT_MSG(ssa_ver->Kind() == air::opt::VER_DEF_KIND::STMT,
                   "must define by stmt");

    CONTAINER* cntr     = ssa_cntr->Container();
    NODE_PTR   def_node = cntr->Stmt(ssa_ver->Def_stmt_id())->Node();

    bool need_cp = true;
    // get the parent node of this ld node.
    NODE_PTR parent_node = this->Parent(1);
    if (parent_node->Opcode() == OPCODE(nn::core::NN, nn::core::ADD)) {
      // substitute use with def
      for (uint32_t i = 0; i < parent_node->Num_child(); i++) {
        NODE_PTR              child_node = parent_node->Child(i);
        air::opt::SSA_VER_PTR child_ssa_ver =
            ssa_cntr->Node_ver(child_node->Id());
        NODE_PTR child_def_node =
            cntr->Stmt(child_ssa_ver->Def_stmt_id())->Node();
        if (child_def_node->Child(0)->Opcode() ==
            OPCODE(nn::core::NN, nn::core::CONV)) {
          need_cp = false;
          break;
        }
      }
    }

    // indicate has multiple use sites, remove from list
    if (!need_cp) {
      if (std::find(_def_sym_node_vec.begin(), _def_sym_node_vec.end(),
                    def_node) != _def_sym_node_vec.end()) {
        this->Remove_def_sym_node(def_node);
      }
    }

    // only copy prop mulc(who has fusion target or new mulc) define to use site
    if (this->Is_mul_const_op(def_node->Child(0)) &&
        (_cf_map.find(def_node->Child(0)->Id()) != _cf_map.end()) && need_cp) {
      NODE_PTR def_expr = cntr->Clone_node_tree(def_node->Child(0));

      // substitute use with def
      for (uint32_t i = 0; i < parent_node->Num_child(); i++) {
        if (parent_node->Child(i)->Id() == node->Id()) {
          parent_node->Set_child(i, def_expr);
        }
      }
      // record old define node, later will be deleted(DSE)
      CF_DEF_SYM_NODE_VEC def_sym_node_vec = this->Get_def_sym_node_vec();
      if (std::find(def_sym_node_vec.begin(), def_sym_node_vec.end(),
                    def_node) == def_sym_node_vec.end()) {
        this->Insert_def_sym_node_vec(def_node);
      }
    }
  }

  //! @brief delete all dead store node after partial copy propagation
  void Dead_store_elimination() {
    CF_DEF_SYM_NODE_VEC def_sym_node_vec = this->Get_def_sym_node_vec();
    for (CF_DEF_SYM_NODE_VEC::iterator it = def_sym_node_vec.begin();
         it != def_sym_node_vec.end(); ++it) {
      NODE_PTR  def_node  = *it;
      STMT_LIST stmt_list = STMT_LIST::Enclosing_list(def_node->Stmt());
      stmt_list.Remove(def_node->Stmt());
    }
  }

  void Insert_cf_map(NODE_ID node_id, NODE_ID target_id) {
    _cf_map.insert(std::pair<NODE_ID, NODE_ID>(node_id, target_id));
  }

private:
  FUNC_SCOPE*             _func_scope;
  VECTOR_CTX&             _ctx;
  const DRIVER_CTX*       _driver_ctx;
  const VECTOR_CONFIG&    _config;
  air::opt::SSA_CONTAINER _ssa_cntr;
  CF_MAP                  _cf_map;
  CF_DEF_SYM_NODE_VEC     _def_sym_node_vec;
  NODE_ID                 _cur_cf_id = air::base::Null_id;
};

//! @brief CORE handler
class CF_CORE_HANDLER : public air::core::DEFAULT_HANDLER {
public:
  template <typename RETV, typename VISITOR>
  RETV Handle_st(VISITOR* visitor, NODE_PTR node) {
    visitor->template Visit<RETV>(node->Child(0));
    return RETV();
  }

  template <typename RETV, typename VISITOR>
  RETV Handle_stp(VISITOR* visitor, NODE_PTR node) {
    visitor->template Visit<RETV>(node->Child(0));
    return RETV();
  }

  template <typename RETV, typename VISITOR>
  RETV Handle_ld(VISITOR* visitor, NODE_PTR node) {
    // input is the parameter of the function, do not process ld "input" here.
    if (!node->Has_sym() ||
        (strncmp(node->Addr_datum()->Name()->Char_str(), "input", 5) != 0)) {
      visitor->Context().Partial_copy_prop(node);
    }
    return RETV();
  }

  template <typename RETV, typename VISITOR>
  RETV Handle_ldp(VISITOR* visitor, NODE_PTR node) {
    return Handle_ld<RETV, VISITOR>(visitor, node);
  }

  template <typename RETV, typename VISITOR>
  RETV Handle_retv(VISITOR* visitor, NODE_PTR node) {
    AIR_ASSERT_MSG(node->Num_child() == 1, "retv should only contains 1 child");
    visitor->Context().Dead_store_elimination();
    return RETV();
  }

};  // CF_CORE_HANDLER

}  // namespace vector

}  // namespace nn

#endif  // NN_VECTOR_CF_CTX_H
