//-*-c++-*-
//=============================================================================
//
// Copyright (c) Ant Group Co., Ltd
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//=============================================================================

#include "fhe/ckks/gpu_fusion_pass.h"

#include <iostream>

#include "air/base/container.h"
#include "air/base/st.h"
#include "air/core/opcode.h"
#include "air/util/debug.h"
#include "fhe/ckks/ckks_opcode.h"
#include "fhe/core/lower_ctx.h"
#include "nn/core/attr.h"

using air::base::CONTAINER;
using air::base::FUNC_SCOPE;
using air::base::NODE_PTR;
using air::base::Null_ptr;
using air::base::STMT_LIST;
using air::base::STMT_PTR;

namespace fhe {
namespace ckks {

namespace {

struct STORE_TARGET {
  bool     _valid   = false;
  bool     _is_preg = false;
  uint64_t _id      = 0;
};

struct LOOP_STEPS {
  const int* _values = nullptr;
  uint32_t   _count  = 0;
};

struct LOOP_INFO {
  bool                     _valid      = false;
  air::base::ADDR_DATUM_ID _iv;
  uint32_t                 _trip_count = 0;
};

bool Is_store_stmt(STMT_PTR stmt) {
  return stmt != Null_ptr &&
         (stmt->Opcode() == air::core::OPC_ST ||
          stmt->Opcode() == air::core::OPC_STP);
}

STORE_TARGET Get_store_target(STMT_PTR stmt) {
  STORE_TARGET target;
  if (!Is_store_stmt(stmt)) {
    return target;
  }

  target._valid = true;
  if (stmt->Opcode() == air::core::OPC_ST) {
    target._id = stmt->Node()->Addr_datum_id().Value();
    return target;
  }

  target._is_preg = true;
  target._id      = stmt->Node()->Preg_id().Value();
  return target;
}

bool Is_load_of_target(NODE_PTR node, const STORE_TARGET& target) {
  if (!target._valid || node == Null_ptr) {
    return false;
  }
  if (target._is_preg) {
    return node->Opcode() == air::core::OPC_LDP &&
           node->Preg_id().Value() == target._id;
  }
  return node->Opcode() == air::core::OPC_LD &&
         node->Addr_datum_id().Value() == target._id;
}

STMT_PTR Get_single_block_stmt(NODE_PTR block) {
  if (block == Null_ptr || !block->Is_block()) {
    return Null_ptr;
  }

  STMT_PTR begin = block->Begin_stmt();
  STMT_PTR end   = block->End_stmt();
  if (begin == Null_ptr || begin == end || begin->Next() != end) {
    return Null_ptr;
  }
  return begin;
}

bool Parse_loop_info(STMT_PTR loop_stmt, LOOP_INFO* info) {
  if (loop_stmt == Null_ptr || info == nullptr ||
      loop_stmt->Opcode() != air::core::OPC_DO_LOOP) {
    return false;
  }

  NODE_PTR loop = loop_stmt->Node();
  if (loop->Loop_init()->Opcode() != air::core::OPC_INTCONST ||
      loop->Loop_init()->Intconst() != 0) {
    return false;
  }

  NODE_PTR comp = loop->Compare();
  if (comp == Null_ptr || comp->Opcode() != air::core::OPC_LT ||
      comp->Child(0) == Null_ptr || comp->Child(1) == Null_ptr ||
      comp->Child(0)->Opcode() != air::core::OPC_LD ||
      comp->Child(1)->Opcode() != air::core::OPC_INTCONST) {
    return false;
  }

  air::base::ADDR_DATUM_ID iv_id = loop->Iv_id();
  if (comp->Child(0)->Addr_datum_id() != iv_id) {
    return false;
  }

  NODE_PTR incr = loop->Loop_incr();
  if (incr == Null_ptr || incr->Opcode() != air::core::OPC_ADD ||
      incr->Child(0) == Null_ptr || incr->Child(1) == Null_ptr ||
      incr->Child(0)->Opcode() != air::core::OPC_LD ||
      incr->Child(0)->Addr_datum_id() != iv_id ||
      incr->Child(1)->Opcode() != air::core::OPC_INTCONST ||
      incr->Child(1)->Intconst() != 1) {
    return false;
  }

  uint64_t trip_count = comp->Child(1)->Intconst();
  if (trip_count == 0) {
    return false;
  }

  info->_valid      = true;
  info->_iv         = iv_id;
  info->_trip_count = static_cast<uint32_t>(trip_count);
  return true;
}

bool Uses_addr_datum(NODE_PTR node, air::base::ADDR_DATUM_ID datum_id) {
  if (node == Null_ptr || datum_id.Is_null()) {
    return false;
  }

  if (node->Opcode() == air::core::OPC_LD &&
      node->Addr_datum_id() == datum_id) {
    return true;
  }

  if (node->Is_block()) {
    for (STMT_PTR stmt = node->Begin_stmt(); stmt != node->End_stmt();
         stmt          = stmt->Next()) {
      if (Uses_addr_datum(stmt->Node(), datum_id)) {
        return true;
      }
    }
    return false;
  }

  for (uint32_t idx = 0; idx < node->Num_child(); ++idx) {
    if (Uses_addr_datum(node->Child(idx), datum_id)) {
      return true;
    }
  }
  return false;
}

NODE_PTR Match_indexed_array_base(NODE_PTR node,
                                  air::base::ADDR_DATUM_ID iv_id) {
  if (node == Null_ptr || node->Opcode() != air::core::OPC_ARRAY ||
      node->Num_child() < 2 || node->Child(0) == Null_ptr ||
      node->Child(1) == Null_ptr ||
      node->Child(1)->Opcode() != air::core::OPC_LD ||
      node->Child(1)->Addr_datum_id() != iv_id) {
    return Null_ptr;
  }
  return node->Child(0);
}

NODE_PTR Match_step_array_base(NODE_PTR node, air::base::ADDR_DATUM_ID iv_id) {
  if (node != Null_ptr && node->Opcode() == air::core::OPC_ILD &&
      node->Num_child() > 0) {
    return Match_indexed_array_base(node->Child(0), iv_id);
  }
  return Match_indexed_array_base(node, iv_id);
}

uint32_t Count_target_uses(NODE_PTR node, const STORE_TARGET& target) {
  if (node == Null_ptr) {
    return 0;
  }

  uint32_t use_count = Is_load_of_target(node, target) ? 1 : 0;
  if (node->Is_block()) {
    for (STMT_PTR stmt = node->Begin_stmt(); stmt != node->End_stmt();
         stmt          = stmt->Next()) {
      use_count += Count_target_uses(stmt->Node(), target);
    }
    return use_count;
  }

  for (uint32_t idx = 0; idx < node->Num_child(); ++idx) {
    use_count += Count_target_uses(node->Child(idx), target);
  }
  return use_count;
}

bool Is_mul_plain_expr(NODE_PTR node, const core::LOWER_CTX& lower_ctx) {
  if (node == Null_ptr || node->Opcode() != OPC_MUL || node->Num_child() < 2) {
    return false;
  }
  NODE_PTR plain_opnd = node->Child(1);
  return plain_opnd != Null_ptr &&
         lower_ctx.Is_plain_type(plain_opnd->Rtype_id());
}

bool Is_rotate_expr(NODE_PTR node) {
  return node != Null_ptr && node->Opcode() == OPC_ROTATE &&
         node->Num_child() >= 2;
}

bool Is_rotate_mul_plain_expr(NODE_PTR node,
                              const core::LOWER_CTX& lower_ctx) {
  return Is_mul_plain_expr(node, lower_ctx) && Is_rotate_expr(node->Child(0));
}

bool Is_cipher_array_load(NODE_PTR node, const core::LOWER_CTX& lower_ctx) {
  return node != Null_ptr && node->Opcode() == air::core::OPC_ILD &&
         node->Num_child() > 0 && node->Child(0) != Null_ptr &&
         node->Child(0)->Opcode() == air::core::OPC_ARRAY &&
         lower_ctx.Is_cipher_type(node->Rtype_id());
}

bool Match_accumulate_add(STMT_PTR add_stmt, const STORE_TARGET& tmp_target) {
  if (!Is_store_stmt(add_stmt)) {
    return false;
  }

  NODE_PTR add_expr = add_stmt->Node()->Child(0);
  if (add_expr == Null_ptr || add_expr->Opcode() != OPC_ADD ||
      add_expr->Num_child() < 2) {
    return false;
  }

  STORE_TARGET acc_target = Get_store_target(add_stmt);
  return (Is_load_of_target(add_expr->Child(0), acc_target) &&
          Is_load_of_target(add_expr->Child(1), tmp_target)) ||
         (Is_load_of_target(add_expr->Child(1), acc_target) &&
          Is_load_of_target(add_expr->Child(0), tmp_target));
}

NODE_PTR Get_inplace_accumulate_term(STMT_PTR add_stmt) {
  if (!Is_store_stmt(add_stmt)) {
    return Null_ptr;
  }

  NODE_PTR add_expr = add_stmt->Node()->Child(0);
  if (add_expr == Null_ptr || add_expr->Opcode() != OPC_ADD ||
      add_expr->Num_child() < 2) {
    return Null_ptr;
  }

  STORE_TARGET acc_target = Get_store_target(add_stmt);
  if (Is_load_of_target(add_expr->Child(0), acc_target)) {
    return add_expr->Child(1);
  }
  if (Is_load_of_target(add_expr->Child(1), acc_target)) {
    return add_expr->Child(0);
  }
  return Null_ptr;
}

bool Has_unsafe_ckks_op(NODE_PTR node) {
  if (node == Null_ptr) {
    return false;
  }

  if (node->Opcode().Domain() == CKKS_DOMAIN::ID &&
      node->Opcode() != OPC_ENCODE) {
    return true;
  }

  if (node->Is_block()) {
    for (STMT_PTR stmt = node->Begin_stmt(); stmt != node->End_stmt();
         stmt          = stmt->Next()) {
      if (Has_unsafe_ckks_op(stmt->Node())) {
        return true;
      }
    }
    return false;
  }

  for (uint32_t idx = 0; idx < node->Num_child(); ++idx) {
    if (Has_unsafe_ckks_op(node->Child(idx))) {
      return true;
    }
  }
  return false;
}

bool Stmt_blocks_copy_elim_scan(STMT_PTR stmt, const STORE_TARGET& target) {
  if (stmt == Null_ptr) {
    return true;
  }

  if (stmt->Opcode() == air::core::OPC_DO_LOOP ||
      stmt->Opcode() == air::core::OPC_IF) {
    return true;
  }

  NODE_PTR node = stmt->Node();
  if (node == Null_ptr || Has_unsafe_ckks_op(node)) {
    return true;
  }

  if (Is_store_stmt(stmt)) {
    STORE_TARGET store_target = Get_store_target(stmt);
    if (store_target._valid && store_target._is_preg == target._is_preg &&
        store_target._id == target._id) {
      return true;
    }
  }

  return Count_target_uses(node, target) != 0;
}

STMT_PTR Find_cipher_array_copy_def(STMT_PTR use_stmt,
                                    const STORE_TARGET& target,
                                    const core::LOWER_CTX& lower_ctx) {
  if (use_stmt == Null_ptr || !target._valid) {
    return Null_ptr;
  }

  STMT_PTR pos = use_stmt;
  while (pos->Has_prev()) {
    pos = pos->Prev();
    if (Is_store_stmt(pos)) {
      STORE_TARGET store_target = Get_store_target(pos);
      if (store_target._valid && store_target._is_preg == target._is_preg &&
          store_target._id == target._id) {
        NODE_PTR rhs = pos->Node()->Child(0);
        return Is_cipher_array_load(rhs, lower_ctx) ? pos : Null_ptr;
      }
    }

    if (Stmt_blocks_copy_elim_scan(pos, target)) {
      return Null_ptr;
    }
  }
  return Null_ptr;
}

bool Try_eliminate_mul_plain_add_input_copy(STMT_PTR stmt, NODE_PTR func_entry,
                                            const core::LOWER_CTX& lower_ctx,
                                            GPU_FUSION_STATS& stats) {
  if (!Is_store_stmt(stmt)) {
    return false;
  }

  NODE_PTR expr = stmt->Node()->Child(0);
  if (expr == Null_ptr || expr->Opcode() != OPC_MUL_PLAIN_ADD ||
      expr->Num_child() < 2) {
    return false;
  }

  NODE_PTR cipher_opnd = expr->Child(0);
  if (cipher_opnd == Null_ptr ||
      !lower_ctx.Is_cipher_type(cipher_opnd->Rtype_id())) {
    return false;
  }

  STORE_TARGET tmp_target;
  if (cipher_opnd->Opcode() == air::core::OPC_LD) {
    tmp_target._valid = true;
    tmp_target._id    = cipher_opnd->Addr_datum_id().Value();
  } else if (cipher_opnd->Opcode() == air::core::OPC_LDP) {
    tmp_target._valid   = true;
    tmp_target._is_preg = true;
    tmp_target._id      = cipher_opnd->Preg_id().Value();
  } else {
    return false;
  }

  if (Count_target_uses(func_entry, tmp_target) != 1) {
    return false;
  }

  STMT_PTR def_stmt = Find_cipher_array_copy_def(stmt, tmp_target, lower_ctx);
  if (def_stmt == Null_ptr) {
    return false;
  }

  CONTAINER* cntr = stmt->Container();
  expr->Set_child(0, cntr->Clone_node_tree(def_stmt->Node()->Child(0)));
  STMT_LIST::Enclosing_list(def_stmt).Remove(def_stmt);
  ++stats._copy_elim;
  return true;
}

NODE_PTR Build_mul_plain_add(NODE_PTR mul_expr, NODE_PTR add_expr) {
  CONTAINER* cntr = add_expr->Container();
  NODE_PTR fused =
      cntr->New_cust_node(OPC_MUL_PLAIN_ADD, add_expr->Rtype(),
                          add_expr->Spos());
  fused->Set_child(0, cntr->Clone_node_tree(mul_expr->Child(0)));
  fused->Set_child(1, cntr->Clone_node_tree(mul_expr->Child(1)));
  fused->Copy_attr(add_expr);
  return fused;
}

NODE_PTR Build_rotate_add(NODE_PTR rotate_expr, NODE_PTR add_expr) {
  CONTAINER* cntr = add_expr->Container();
  NODE_PTR fused =
      cntr->New_cust_node(OPC_ROTATE_ADD, add_expr->Rtype(),
                          add_expr->Spos());
  fused->Set_child(0, cntr->Clone_node_tree(rotate_expr->Child(0)));
  fused->Set_child(1, cntr->Clone_node_tree(rotate_expr->Child(1)));
  fused->Copy_attr(add_expr);
  return fused;
}

NODE_PTR Build_rotate_mul_plain_add(NODE_PTR mul_expr, NODE_PTR add_expr) {
  NODE_PTR rotate_expr = mul_expr->Child(0);
  CONTAINER* cntr      = add_expr->Container();
  NODE_PTR fused =
      cntr->New_cust_node(OPC_ROTATE_MUL_PLAIN_ADD, add_expr->Rtype(),
                          add_expr->Spos());
  fused->Set_child(0, cntr->Clone_node_tree(rotate_expr->Child(0)));
  fused->Set_child(1, cntr->Clone_node_tree(rotate_expr->Child(1)));
  fused->Set_child(2, cntr->Clone_node_tree(mul_expr->Child(1)));
  fused->Copy_attr(add_expr);
  return fused;
}

NODE_PTR Build_rotate_mul_plain_add(NODE_PTR rotate_expr, NODE_PTR mul_expr,
                                    NODE_PTR add_expr) {
  CONTAINER* cntr = add_expr->Container();
  NODE_PTR fused =
      cntr->New_cust_node(OPC_ROTATE_MUL_PLAIN_ADD, add_expr->Rtype(),
                          add_expr->Spos());
  fused->Set_child(0, cntr->Clone_node_tree(rotate_expr->Child(0)));
  fused->Set_child(1, cntr->Clone_node_tree(rotate_expr->Child(1)));
  fused->Set_child(2, cntr->Clone_node_tree(mul_expr->Child(1)));
  fused->Copy_attr(add_expr);
  return fused;
}

STMT_PTR Build_gpu_rotate_bank_stmt(STMT_PTR loop_stmt, NODE_PTR array_base,
                                    NODE_PTR source_expr, NODE_PTR steps_base,
                                    NODE_PTR rotate_expr,
                                    const LOOP_STEPS& steps) {
  AIR_ASSERT(loop_stmt != Null_ptr);
  AIR_ASSERT(array_base != Null_ptr && source_expr != Null_ptr &&
             steps_base != Null_ptr && rotate_expr != Null_ptr);
  AIR_ASSERT(steps._values != nullptr && steps._count > 0);

  CONTAINER* cntr = loop_stmt->Container();
  AIR_ASSERT(cntr != nullptr);

  STMT_PTR fused = cntr->New_cust_stmt(OPC_GPU_ROTATE_BANK, loop_stmt->Spos());
  fused->Node()->Set_child(0, cntr->Clone_node_tree(array_base));
  fused->Node()->Set_child(1, cntr->Clone_node_tree(source_expr));
  fused->Node()->Set_child(2, cntr->Clone_node_tree(steps_base));
  fused->Node()->Copy_attr(rotate_expr);
  fused->Node()->Set_attr(nn::core::ATTR::RNUM, steps._values, steps._count);
  return fused;
}

bool Try_fuse_add_expr(STMT_PTR stmt, const core::LOWER_CTX& lower_ctx,
                       bool runtime_supported, GPU_FUSION_STATS& stats) {
  NODE_PTR add_expr = stmt->Node()->Child(0);
  NODE_PTR term     = Get_inplace_accumulate_term(stmt);
  if (term == Null_ptr) {
    return false;
  }

  if (Is_rotate_mul_plain_expr(term, lower_ctx)) {
    if (!runtime_supported) {
      ++stats._fallback;
      return false;
    }
    stmt->Node()->Set_child(0, Build_rotate_mul_plain_add(term, add_expr));
    ++stats._rotate_mul_plain_add;
    ++stats._fallback;
    return true;
  }

  if (Is_rotate_expr(term)) {
    if (!runtime_supported) {
      ++stats._fallback;
      return false;
    }
    stmt->Node()->Set_child(0, Build_rotate_add(term, add_expr));
    ++stats._rotate_add;
    ++stats._fallback;
    return true;
  }

  if (Is_mul_plain_expr(term, lower_ctx)) {
    if (!runtime_supported) {
      ++stats._fallback;
      return false;
    }
    stmt->Node()->Set_child(0, Build_mul_plain_add(term, add_expr));
    ++stats._mul_plain_add;
    ++stats._fallback;
    return true;
  }
  return false;
}

bool Try_fuse_rotate_mul_plain_add(STMT_PTR stmt, NODE_PTR func_entry,
                                   const core::LOWER_CTX& lower_ctx,
                                   bool runtime_supported,
                                   GPU_FUSION_STATS& stats) {
  if (!Is_store_stmt(stmt)) {
    return false;
  }

  STMT_PTR next = stmt->Next();
  if (!Is_store_stmt(next)) {
    return false;
  }

  NODE_PTR rotate_expr = stmt->Node()->Child(0);
  if (!Is_rotate_expr(rotate_expr)) {
    return false;
  }

  STORE_TARGET rot_target = Get_store_target(stmt);
  NODE_PTR     add_expr   = next->Node()->Child(0);
  NODE_PTR     mul_expr   = Get_inplace_accumulate_term(next);
  if (!Is_mul_plain_expr(mul_expr, lower_ctx) ||
      !Is_load_of_target(mul_expr->Child(0), rot_target) ||
      Count_target_uses(func_entry, rot_target) != 1) {
    return false;
  }

  if (!runtime_supported) {
    ++stats._fallback;
    return false;
  }

  next->Node()->Set_child(
      0, Build_rotate_mul_plain_add(rotate_expr, mul_expr, add_expr));
  STMT_LIST::Enclosing_list(stmt).Remove(stmt);
  ++stats._rotate_mul_plain_add;
  ++stats._fallback;
  return true;
}

bool Try_fuse_gpu_rotate_bank(STMT_PTR stmt, const core::LOWER_CTX& lower_ctx,
                              bool              runtime_supported,
                              GPU_FUSION_STATS& stats) {
  if (stmt == Null_ptr || stmt->Opcode() != air::core::OPC_DO_LOOP) {
    return false;
  }

  LOOP_INFO loop_info;
  if (!Parse_loop_info(stmt, &loop_info)) {
    return false;
  }

  NODE_PTR body      = stmt->Node()->Body_blk();
  STMT_PTR body_stmt = Get_single_block_stmt(body);
  if (body_stmt == Null_ptr || body_stmt->Opcode() != air::core::OPC_IST) {
    return false;
  }

  NODE_PTR addr_expr   = body_stmt->Node()->Child(0);
  NODE_PTR rotate_expr = body_stmt->Node()->Child(1);
  if (addr_expr == Null_ptr || rotate_expr == Null_ptr ||
      rotate_expr->Opcode() != OPC_ROTATE || rotate_expr->Num_child() < 2) {
    return false;
  }

  if (!lower_ctx.Is_cipher_type(rotate_expr->Rtype_id()) ||
      !lower_ctx.Is_cipher_type(body_stmt->Node()->Access_type_id())) {
    return false;
  }

  NODE_PTR array_base = Match_indexed_array_base(addr_expr, loop_info._iv);
  NODE_PTR steps_base = Match_step_array_base(rotate_expr->Child(1),
                                              loop_info._iv);
  if (array_base == Null_ptr || steps_base == Null_ptr) {
    return false;
  }

  LOOP_STEPS steps;
  steps._values = rotate_expr->Attr<int>(nn::core::ATTR::RNUM, &steps._count);
  if (steps._values == nullptr || steps._count != loop_info._trip_count) {
    return false;
  }

  NODE_PTR source_expr = rotate_expr->Child(0);
  if (source_expr == Null_ptr ||
      !lower_ctx.Is_cipher_type(source_expr->Rtype_id()) ||
      Uses_addr_datum(source_expr, loop_info._iv)) {
    return false;
  }

  if (!runtime_supported) {
    ++stats._fallback;
    return false;
  }

  STMT_PTR fused = Build_gpu_rotate_bank_stmt(
      stmt, array_base, source_expr, steps_base, rotate_expr, steps);
  STMT_LIST stmt_list = STMT_LIST::Enclosing_list(stmt);
  stmt_list.Prepend(stmt, fused);
  stmt_list.Remove(stmt);
  ++stats._rotate_many;
  stats._copy_elim += steps._count;
  ++stats._fallback;
  return true;
}

bool Try_fuse_mul_plain_add(STMT_PTR stmt, NODE_PTR func_entry,
                            const core::LOWER_CTX& lower_ctx,
                            bool                   runtime_supported,
                            GPU_FUSION_STATS&      stats) {
  if (!Is_store_stmt(stmt)) {
    return false;
  }

  STMT_PTR next = stmt->Next();
  if (!Is_store_stmt(next)) {
    return false;
  }

  NODE_PTR mul_expr = stmt->Node()->Child(0);
  if (!Is_mul_plain_expr(mul_expr, lower_ctx)) {
    return false;
  }
  STORE_TARGET tmp_target = Get_store_target(stmt);
  if (!Match_accumulate_add(next, tmp_target)) {
    return false;
  }
  if (Count_target_uses(func_entry, tmp_target) != 1) {
    return false;
  }

  if (!runtime_supported) {
    ++stats._fallback;
    return false;
  }

  NODE_PTR add_expr = next->Node()->Child(0);
  next->Node()->Set_child(0, Build_mul_plain_add(mul_expr, add_expr));
  STMT_LIST::Enclosing_list(stmt).Remove(stmt);
  ++stats._mul_plain_add;
  ++stats._fallback;
  return true;
}

bool Try_fuse_rotate_add(STMT_PTR stmt, NODE_PTR func_entry,
                         bool runtime_supported, GPU_FUSION_STATS& stats) {
  if (!Is_store_stmt(stmt)) {
    return false;
  }

  STMT_PTR next = stmt->Next();
  if (!Is_store_stmt(next)) {
    return false;
  }

  NODE_PTR rotate_expr = stmt->Node()->Child(0);
  if (!Is_rotate_expr(rotate_expr)) {
    return false;
  }
  STORE_TARGET tmp_target = Get_store_target(stmt);
  if (!Match_accumulate_add(next, tmp_target)) {
    return false;
  }
  if (Count_target_uses(func_entry, tmp_target) != 1) {
    return false;
  }

  if (!runtime_supported) {
    ++stats._fallback;
    return false;
  }

  NODE_PTR add_expr = next->Node()->Child(0);
  next->Node()->Set_child(0, Build_rotate_add(rotate_expr, add_expr));
  STMT_LIST::Enclosing_list(stmt).Remove(stmt);
  ++stats._rotate_add;
  ++stats._fallback;
  return true;
}

bool Run_node_gpu_fusion(NODE_PTR node, NODE_PTR func_entry,
                         const core::LOWER_CTX& lower_ctx,
                         bool                   runtime_supported,
                         GPU_FUSION_STATS&      stats) {
  if (node == Null_ptr) {
    return false;
  }

  bool changed = false;
  if (!node->Is_block()) {
    for (uint32_t idx = 0; idx < node->Num_child(); ++idx) {
      changed |= Run_node_gpu_fusion(node->Child(idx), func_entry, lower_ctx,
                                     runtime_supported, stats);
    }
    return changed;
  }

  STMT_PTR stmt = node->Begin_stmt();
  while (stmt != node->End_stmt()) {
    STMT_PTR next_stmt = stmt->Next();

    if (Try_fuse_gpu_rotate_bank(stmt, lower_ctx, runtime_supported, stats)) {
      changed = true;
      stmt    = next_stmt;
      continue;
    }

    changed |= Run_node_gpu_fusion(stmt->Node(), func_entry, lower_ctx,
                                   runtime_supported, stats);
    if (Is_store_stmt(stmt) &&
        Try_fuse_add_expr(stmt, lower_ctx, runtime_supported, stats)) {
      changed = true;
      changed |= Try_eliminate_mul_plain_add_input_copy(
          stmt, func_entry, lower_ctx, stats);
    } else if (Try_fuse_rotate_mul_plain_add(
                   stmt, func_entry, lower_ctx, runtime_supported, stats) ||
               Try_fuse_rotate_add(stmt, func_entry, runtime_supported, stats) ||
               Try_fuse_mul_plain_add(stmt, func_entry, lower_ctx,
                                      runtime_supported, stats)) {
      changed = true;
      changed |= Try_eliminate_mul_plain_add_input_copy(
          stmt, func_entry, lower_ctx, stats);
    }
    stmt = next_stmt;
  }
  return changed;
}

void Run_func_gpu_fusion(FUNC_SCOPE* func, const core::LOWER_CTX& lower_ctx,
                         bool runtime_supported, GPU_FUSION_STATS& stats) {
  NODE_PTR entry = func->Container().Entry_node();
  if (entry == Null_ptr) {
    return;
  }
  Run_node_gpu_fusion(entry, entry, lower_ctx, runtime_supported, stats);
}

}  // namespace

GPU_FUSION_STATS Run_gpu_fusion(air::base::GLOB_SCOPE* glob,
                                const core::LOWER_CTX& lower_ctx,
                                bool runtime_supported) {
  GPU_FUSION_STATS stats;
  for (air::base::GLOB_SCOPE::FUNC_SCOPE_ITER it =
           glob->Begin_func_scope();
       it != glob->End_func_scope(); ++it) {
    Run_func_gpu_fusion(&(*it), lower_ctx, runtime_supported, stats);
  }
  return stats;
}

void Print_gpu_fusion_stats(const GPU_FUSION_STATS& stats,
                            bool runtime_supported, std::ostream& os) {
  os << "[gpu-fusion] MulPlainAdd hit count: " << stats._mul_plain_add
     << std::endl;
  os << "[gpu-fusion] RotateAdd hit count: " << stats._rotate_add << std::endl;
  os << "[gpu-fusion] RotateMulPlainAdd hit count: "
     << stats._rotate_mul_plain_add << std::endl;
  os << "[gpu-fusion] RotateMany hit count: " << stats._rotate_many
     << std::endl;
  os << "[gpu-fusion] copy elimination count: " << stats._copy_elim
     << std::endl;
  os << "[gpu-fusion] fallback count: " << stats._fallback;
  if (runtime_supported) {
    os << " (not fused by ckks gpu-fusion pass)";
  } else {
    os << " (backend unsupported)";
  }
  os << std::endl;
}

}  // namespace ckks
}  // namespace fhe
