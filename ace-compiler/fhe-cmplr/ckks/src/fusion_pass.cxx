//-*-c++-*- 
//=============================================================================
//
// Copyright (c) Ant Group Co., Ltd
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//=============================================================================

#include "fhe/ckks/fusion_pass.h"

#include <vector>

#include "air/core/opcode.h"
#include "fhe/ckks/ckks_opcode.h"
#include "air/util/debug.h"
#include "fhe/driver/fhe_cmplr.h"
#include "fhe/poly/poly2c_pass.h"
#include "nn/core/attr.h"
#include "nn/vector/vector_opcode.h"

namespace fhe {

namespace ckks {

namespace {

static constexpr const char* ROTATE_SELF_ATTR = "rotate_self";
static constexpr const char* POST_RESCALE_ATTR = "post_rescale";
static constexpr const char* PLAIN_LEN_ATTR = "plain_len";
static constexpr const char* PLAIN_SCALE_ATTR = "plain_scale";
static constexpr const char* PLAIN_LEVEL_ATTR = "plain_level";
static constexpr const char* GRID_COUNT_ATTR = "grid_count";
static constexpr const char* GRID_SHIFT_ATTR = "grid_shift";

using air::base::CONTAINER;
using air::base::FUNC_SCOPE;
using air::base::NODE_PTR;
using air::base::Null_ptr;
using air::base::STMT_LIST;
using air::base::STMT_PTR;

struct STORE_TARGET {
  bool              _valid   = false;
  bool              _is_preg = false;
  air::base::TYPE_ID _type;
  uint32_t          _id = 0;
};

struct LOOP_STEPS {
  const int* _values = nullptr;
  uint32_t   _count  = 0;
};

struct LOOP_INFO {
  bool                    _valid  = false;
  air::base::ADDR_DATUM_ID _iv;
  uint32_t                _trip_count = 0;
};

struct PLAIN_TABLE_INFO {
  bool      _valid = false;
  NODE_PTR  _table = Null_ptr;
  uint32_t  _len   = 0;
  uint32_t  _scale = 0;
  uint32_t  _level = 0;
};

bool Is_store_stmt(STMT_PTR stmt) {
  return stmt->Opcode() == air::core::OPC_ST ||
         stmt->Opcode() == air::core::OPC_STP;
}

STORE_TARGET Get_store_target(STMT_PTR stmt) {
  STORE_TARGET target;
  if (!Is_store_stmt(stmt)) {
    return target;
  }

  target._valid = true;
  if (stmt->Opcode() == air::core::OPC_ST) {
    target._type = stmt->Node()->Addr_datum()->Type_id();
    target._id   = stmt->Node()->Addr_datum_id().Value();
    return target;
  }

  target._is_preg = true;
  target._type    = stmt->Node()->Preg()->Type_id();
  target._id      = stmt->Node()->Preg_id().Value();
  return target;
}

STORE_TARGET Get_load_target(NODE_PTR node) {
  STORE_TARGET target;
  if (node == Null_ptr) {
    return target;
  }

  if (node->Opcode() == air::core::OPC_LD) {
    target._valid = true;
    target._type  = node->Addr_datum()->Type_id();
    target._id    = node->Addr_datum_id().Value();
    return target;
  }

  if (node->Opcode() == air::core::OPC_LDP) {
    target._valid   = true;
    target._is_preg = true;
    target._type    = node->Preg()->Type_id();
    target._id      = node->Preg_id().Value();
  }
  return target;
}

bool Same_target(const STORE_TARGET& lhs, const STORE_TARGET& rhs) {
  return lhs._valid && rhs._valid && lhs._is_preg == rhs._is_preg &&
         lhs._id == rhs._id;
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

bool Is_mul_plain_expr(NODE_PTR node, const core::LOWER_CTX& lower_ctx) {
  if (node == Null_ptr || node->Opcode() != OPC_MUL || node->Num_child() < 2) {
    return false;
  }
  NODE_PTR plain_opnd = node->Child(1);
  return plain_opnd != Null_ptr &&
         lower_ctx.Is_plain_type(plain_opnd->Rtype_id());
}

NODE_PTR Build_mul_plain_rescale_from_mul(NODE_PTR mul_expr,
                                          NODE_PTR template_expr) {
  AIR_ASSERT(mul_expr != Null_ptr && mul_expr->Opcode() == OPC_MUL);
  AIR_ASSERT(template_expr != Null_ptr);

  CONTAINER* cntr = template_expr->Container();
  AIR_ASSERT(cntr != nullptr);

  NODE_PTR fused = cntr->New_bin_arith(
      OPC_MUL_PLAIN_RESCALE, template_expr->Rtype(),
      cntr->Clone_node_tree(mul_expr->Child(0)),
      cntr->Clone_node_tree(mul_expr->Child(1)), template_expr->Spos());
  fused->Copy_attr(template_expr);
  return fused;
}

NODE_PTR Build_mul_plain_rescale_expr(NODE_PTR rescale_expr) {
  AIR_ASSERT(rescale_expr != Null_ptr && rescale_expr->Opcode() == OPC_RESCALE);
  return Build_mul_plain_rescale_from_mul(rescale_expr->Child(0), rescale_expr);
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

uint32_t Count_block_stmt(NODE_PTR block) {
  if (block == Null_ptr || !block->Is_block()) {
    return 0;
  }

  uint32_t count = 0;
  for (STMT_PTR stmt = block->Begin_stmt(); stmt != block->End_stmt();
       stmt          = stmt->Next()) {
    ++count;
  }
  return count;
}

STMT_PTR Get_nth_block_stmt(NODE_PTR block, uint32_t index) {
  if (block == Null_ptr || !block->Is_block()) {
    return Null_ptr;
  }

  uint32_t current = 0;
  for (STMT_PTR stmt = block->Begin_stmt(); stmt != block->End_stmt();
       stmt          = stmt->Next(), ++current) {
    if (current == index) {
      return stmt;
    }
  }
  return Null_ptr;
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

NODE_PTR Clone_with_iv_subst(CONTAINER* cntr, NODE_PTR orig,
                             air::base::ADDR_DATUM_ID iv_id,
                             uint32_t iv_value) {
  AIR_ASSERT(cntr != nullptr);
  if (orig == Null_ptr) {
    return Null_ptr;
  }

  if (orig->Opcode() == air::core::OPC_LD && orig->Addr_datum_id() == iv_id) {
    return cntr->New_intconst(orig->Rtype(), iv_value, orig->Spos());
  }

  NODE_PTR cloned = cntr->Clone_node(orig);
  for (uint32_t idx = 0; idx < orig->Num_child(); ++idx) {
    cloned->Set_child(
        idx, Clone_with_iv_subst(cntr, orig->Child(idx), iv_id, iv_value));
  }
  return cloned;
}

bool Match_const_uint32(NODE_PTR node, uint32_t* value) {
  if (node == Null_ptr || value == nullptr ||
      node->Opcode() != air::core::OPC_INTCONST) {
    return false;
  }
  *value = static_cast<uint32_t>(node->Intconst());
  return true;
}

bool Match_loop_iv(NODE_PTR node, air::base::ADDR_DATUM_ID iv_id) {
  return node != Null_ptr && node->Opcode() == air::core::OPC_LD &&
         node->Addr_datum_id() == iv_id;
}

bool Match_mul_of_iv(NODE_PTR node, air::base::ADDR_DATUM_ID iv_id,
                     uint32_t factor) {
  return node != Null_ptr && node->Opcode() == air::core::OPC_MUL &&
         Match_loop_iv(node->Child(0), iv_id) &&
         node->Child(1) != Null_ptr &&
         node->Child(1)->Opcode() == air::core::OPC_INTCONST &&
         static_cast<uint32_t>(node->Child(1)->Intconst()) == factor;
}

bool Match_linear_table_index(NODE_PTR node, air::base::ADDR_DATUM_ID iv_id) {
  return Match_loop_iv(node, iv_id);
}

bool Match_block_table_index(NODE_PTR node, air::base::ADDR_DATUM_ID grid_iv,
                             air::base::ADDR_DATUM_ID block_iv,
                             uint32_t block_count) {
  if (node == Null_ptr || node->Opcode() != air::core::OPC_ADD) {
    return false;
  }

  NODE_PTR child0 = node->Child(0);
  NODE_PTR child1 = node->Child(1);
  return (Match_loop_iv(child0, block_iv) &&
          Match_mul_of_iv(child1, grid_iv, block_count)) ||
         (Match_loop_iv(child1, block_iv) &&
          Match_mul_of_iv(child0, grid_iv, block_count));
}

bool Match_plain_table_encode(NODE_PTR encode_expr, NODE_PTR* table_expr,
                              uint32_t* plain_len, uint32_t* plain_scale,
                              uint32_t* plain_level) {
  if (encode_expr == Null_ptr || table_expr == nullptr || plain_len == nullptr ||
      plain_scale == nullptr || plain_level == nullptr ||
      encode_expr->Opcode() != OPC_ENCODE || encode_expr->Num_child() < 4) {
    return false;
  }

  NODE_PTR slice = encode_expr->Child(0);
  if (slice == Null_ptr || slice->Opcode() != nn::vector::OPC_SLICE ||
      slice->Num_child() < 3 || slice->Child(0) == Null_ptr ||
      slice->Child(0)->Opcode() != air::core::OPC_LDC) {
    return false;
  }

  uint32_t encode_len = 0;
  uint32_t slice_len  = 0;
  if (!Match_const_uint32(encode_expr->Child(1), &encode_len) ||
      !Match_const_uint32(slice->Child(2), &slice_len) ||
      encode_len != slice_len ||
      !Match_const_uint32(encode_expr->Child(2), plain_scale) ||
      !Match_const_uint32(encode_expr->Child(3), plain_level)) {
    return false;
  }

  *table_expr = slice->Child(0);
  *plain_len  = encode_len;
  return true;
}

bool Match_linear_plain_table(NODE_PTR encode_expr,
                              air::base::ADDR_DATUM_ID iv_id,
                              PLAIN_TABLE_INFO* info) {
  NODE_PTR table_expr = Null_ptr;
  if (info == nullptr ||
      !Match_plain_table_encode(encode_expr, &table_expr, &info->_len,
                                &info->_scale, &info->_level)) {
    return false;
  }

  NODE_PTR slice = encode_expr->Child(0);
  if (!Match_linear_table_index(slice->Child(1), iv_id)) {
    return false;
  }

  info->_valid = true;
  info->_table = table_expr;
  return true;
}

bool Match_block_plain_table(NODE_PTR encode_expr,
                             air::base::ADDR_DATUM_ID grid_iv,
                             air::base::ADDR_DATUM_ID block_iv,
                             uint32_t block_count, PLAIN_TABLE_INFO* info) {
  NODE_PTR table_expr = Null_ptr;
  if (info == nullptr ||
      !Match_plain_table_encode(encode_expr, &table_expr, &info->_len,
                                &info->_scale, &info->_level)) {
    return false;
  }

  NODE_PTR slice = encode_expr->Child(0);
  if (!Match_block_table_index(slice->Child(1), grid_iv, block_iv,
                               block_count)) {
    return false;
  }

  info->_valid = true;
  info->_table = table_expr;
  return true;
}

bool Match_bank_array_load(NODE_PTR expr, air::base::ADDR_DATUM_ID bank_id,
                           air::base::ADDR_DATUM_ID block_iv) {
  if (expr == Null_ptr || expr->Opcode() != air::core::OPC_ILD ||
      expr->Num_child() == 0) {
    return false;
  }

  NODE_PTR array = expr->Child(0);
  if (array == Null_ptr || array->Opcode() != air::core::OPC_ARRAY ||
      array->Num_child() < 2 || array->Child(0) == Null_ptr ||
      array->Child(1) == Null_ptr ||
      array->Child(0)->Opcode() != air::core::OPC_LDA ||
      array->Child(0)->Addr_datum_id() != bank_id ||
      !Match_loop_iv(array->Child(1), block_iv)) {
    return false;
  }
  return true;
}

bool Match_grid_rotate_accumulate(NODE_PTR expr, const STORE_TARGET& out_target,
                                  const STORE_TARGET& grid_target,
                                  uint32_t grid_count, int* grid_shift) {
  if (expr == Null_ptr || grid_shift == nullptr || expr->Opcode() != OPC_ADD) {
    return false;
  }

  NODE_PTR out_load    = Null_ptr;
  NODE_PTR rotate_expr = Null_ptr;
  if (Is_load_of_target(expr->Child(0), out_target)) {
    out_load    = expr->Child(0);
    rotate_expr = expr->Child(1);
  } else if (Is_load_of_target(expr->Child(1), out_target)) {
    out_load    = expr->Child(1);
    rotate_expr = expr->Child(0);
  }
  if (out_load == Null_ptr || rotate_expr == Null_ptr ||
      rotate_expr->Opcode() != OPC_ROTATE ||
      !Is_load_of_target(rotate_expr->Child(0), grid_target)) {
    return false;
  }

  uint32_t   step_count = 0;
  const int* steps =
      rotate_expr->Attr<int>(nn::core::ATTR::RNUM, &step_count);
  if (steps == nullptr || step_count != grid_count || steps[0] != 0) {
    return false;
  }

  int stride = (step_count > 1) ? steps[1] : 0;
  for (uint32_t idx = 1; idx < step_count; ++idx) {
    if (steps[idx] != static_cast<int>(idx) * stride) {
      return false;
    }
  }

  *grid_shift = stride;
  return true;
}

NODE_PTR Find_rotate_add_expr(NODE_PTR expr, const STORE_TARGET& acc_target,
                              NODE_PTR* rotate_expr) {
  if (expr == Null_ptr || expr->Opcode() != OPC_ADD || rotate_expr == nullptr) {
    return Null_ptr;
  }

  NODE_PTR child0 = expr->Child(0);
  NODE_PTR child1 = expr->Child(1);
  if (Is_load_of_target(child0, acc_target) &&
      child1 != Null_ptr && child1->Opcode() == OPC_ROTATE) {
    *rotate_expr = child1;
    return child0;
  }
  if (Is_load_of_target(child1, acc_target) &&
      child0 != Null_ptr && child0->Opcode() == OPC_ROTATE) {
    *rotate_expr = child0;
    return child1;
  }
  return Null_ptr;
}

NODE_PTR Build_rotate_add_reduce_expr(NODE_PTR loop_expr, NODE_PTR source_expr,
                                      LOOP_STEPS steps, bool rotate_self) {
  AIR_ASSERT(loop_expr != Null_ptr && source_expr != Null_ptr);
  AIR_ASSERT(steps._values != nullptr && steps._count > 0);

  CONTAINER* cntr = loop_expr->Container();
  AIR_ASSERT(cntr != nullptr);

  NODE_PTR fused = cntr->New_cust_node(OPC_ROTATE_ADD_REDUCE,
                                       loop_expr->Rtype(), loop_expr->Spos());
  fused->Set_child(0, cntr->Clone_node_tree(source_expr));
  fused->Copy_attr(loop_expr);
  fused->Set_attr(nn::core::ATTR::RNUM, steps._values, steps._count);
  uint32_t rotate_self_flag = rotate_self ? 1 : 0;
  fused->Set_attr(ROTATE_SELF_ATTR, &rotate_self_flag, 1);
  return fused;
}

NODE_PTR Build_rotate_add_reduce_expr(NODE_PTR template_expr, NODE_PTR source_expr,
                                      const std::vector<int>& steps,
                                      bool rotate_self) {
  AIR_ASSERT(!steps.empty());

  CONTAINER* cntr = template_expr->Container();
  AIR_ASSERT(cntr != nullptr);

  NODE_PTR fused =
      cntr->New_cust_node(OPC_ROTATE_ADD_REDUCE, template_expr->Rtype(),
                          template_expr->Spos());
  fused->Set_child(0, cntr->Clone_node_tree(source_expr));
  fused->Copy_attr(template_expr);
  fused->Set_attr(nn::core::ATTR::RNUM, steps.data(), steps.size());
  uint32_t rotate_self_flag = rotate_self ? 1 : 0;
  fused->Set_attr(ROTATE_SELF_ATTR, &rotate_self_flag, 1);
  return fused;
}

NODE_PTR Build_linear_transform_expr(NODE_PTR template_expr, NODE_PTR source_expr,
                                     LOOP_STEPS steps, bool post_rescale,
                                     uint32_t term_count) {
  AIR_ASSERT(template_expr != Null_ptr && source_expr != Null_ptr);
  AIR_ASSERT(steps._values != nullptr && steps._count == term_count);

  CONTAINER* cntr = template_expr->Container();
  AIR_ASSERT(cntr != nullptr);

  NODE_PTR fused = cntr->New_cust_node(OPC_LINEAR_TRANSFORM,
                                       template_expr->Rtype(),
                                       template_expr->Spos(), term_count);
  fused->Set_num_arg(term_count);
  fused->Set_child(0, cntr->Clone_node_tree(source_expr));
  fused->Copy_attr(template_expr);
  fused->Set_attr(nn::core::ATTR::RNUM, steps._values, steps._count);
  uint32_t post_rescale_flag = post_rescale ? 1 : 0;
  fused->Set_attr(POST_RESCALE_ATTR, &post_rescale_flag, 1);
  return fused;
}

NODE_PTR Build_linear_transform_desc_expr(NODE_PTR template_expr,
                                          NODE_PTR source_expr,
                                          LOOP_STEPS steps,
                                          bool post_rescale,
                                          const PLAIN_TABLE_INFO& table_info) {
  AIR_ASSERT(template_expr != Null_ptr && source_expr != Null_ptr);
  AIR_ASSERT(table_info._valid && table_info._table != Null_ptr);

  CONTAINER* cntr = template_expr->Container();
  AIR_ASSERT(cntr != nullptr);

  NODE_PTR fused = cntr->New_cust_node(OPC_LINEAR_TRANSFORM,
                                       template_expr->Rtype(),
                                       template_expr->Spos(), 1);
  fused->Set_num_arg(1);
  fused->Set_child(0, cntr->Clone_node_tree(source_expr));
  fused->Set_arg(0, cntr->Clone_node_tree(table_info._table));
  fused->Copy_attr(template_expr);
  fused->Set_attr(nn::core::ATTR::RNUM, steps._values, steps._count);
  uint32_t post_rescale_flag = post_rescale ? 1 : 0;
  fused->Set_attr(POST_RESCALE_ATTR, &post_rescale_flag, 1);
  fused->Set_attr(PLAIN_LEN_ATTR, &table_info._len, 1);
  fused->Set_attr(PLAIN_SCALE_ATTR, &table_info._scale, 1);
  fused->Set_attr(PLAIN_LEVEL_ATTR, &table_info._level, 1);
  return fused;
}

STMT_PTR Build_blocking_rotate_stmt(STMT_PTR loop_stmt, NODE_PTR array_base,
                                    NODE_PTR source_expr, NODE_PTR rotate_expr,
                                    LOOP_STEPS steps) {
  AIR_ASSERT(loop_stmt != Null_ptr);
  AIR_ASSERT(array_base != Null_ptr && source_expr != Null_ptr &&
             rotate_expr != Null_ptr);
  AIR_ASSERT(steps._values != nullptr && steps._count > 0);

  CONTAINER* cntr = loop_stmt->Container();
  AIR_ASSERT(cntr != nullptr);

  STMT_PTR fused = cntr->New_cust_stmt(OPC_BLOCKING_ROTATE, loop_stmt->Spos());
  fused->Node()->Set_child(0, cntr->Clone_node_tree(array_base));
  fused->Node()->Set_child(1, cntr->Clone_node_tree(source_expr));
  fused->Node()->Copy_attr(rotate_expr);
  fused->Node()->Set_attr(nn::core::ATTR::RNUM, steps._values, steps._count);
  return fused;
}

STMT_PTR Build_block_linear_transform_stmt(
    STMT_PTR anchor_stmt, air::base::ADDR_DATUM_PTR out_var, NODE_PTR source_expr,
    const PLAIN_TABLE_INFO& table_info, LOOP_STEPS bank_steps,
    uint32_t grid_count, int grid_shift, bool post_rescale, NODE_PTR attr_src) {
  AIR_ASSERT(anchor_stmt != Null_ptr && out_var != air::base::Null_ptr);
  AIR_ASSERT(source_expr != Null_ptr && table_info._valid &&
             table_info._table != Null_ptr);
  AIR_ASSERT(bank_steps._values != nullptr && bank_steps._count > 0);

  CONTAINER* cntr = anchor_stmt->Container();
  AIR_ASSERT(cntr != nullptr);

  STMT_PTR fused =
      cntr->New_cust_stmt(OPC_BLOCK_LINEAR_TRANSFORM, anchor_stmt->Spos());
  fused->Node()->Set_child(
      0, cntr->New_lda(out_var, air::base::POINTER_KIND::FLAT64,
                       anchor_stmt->Spos()));
  fused->Node()->Set_child(1, cntr->Clone_node_tree(source_expr));
  fused->Node()->Set_child(2, cntr->Clone_node_tree(table_info._table));
  if (attr_src != Null_ptr) {
    fused->Node()->Copy_attr(attr_src);
  }
  fused->Node()->Set_attr(nn::core::ATTR::RNUM, bank_steps._values,
                          bank_steps._count);
  fused->Node()->Set_attr(GRID_COUNT_ATTR, &grid_count, 1);
  fused->Node()->Set_attr(GRID_SHIFT_ATTR, &grid_shift, 1);
  uint32_t post_rescale_flag = post_rescale ? 1 : 0;
  fused->Node()->Set_attr(POST_RESCALE_ATTR, &post_rescale_flag, 1);
  fused->Node()->Set_attr(PLAIN_LEN_ATTR, &table_info._len, 1);
  fused->Node()->Set_attr(PLAIN_SCALE_ATTR, &table_info._scale, 1);
  fused->Node()->Set_attr(PLAIN_LEVEL_ATTR, &table_info._level, 1);
  return fused;
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

bool Fuse_mul_plain_rescale(STMT_PTR stmt, const core::LOWER_CTX& lower_ctx) {
  if (!Is_store_stmt(stmt)) {
    return false;
  }

  STMT_PTR next = stmt->Next();
  if (next == Null_ptr || !Is_store_stmt(next)) {
    return false;
  }

  NODE_PTR mul_store     = stmt->Node();
  NODE_PTR mul_expr      = mul_store->Child(0);
  NODE_PTR rescale_store = next->Node();
  NODE_PTR rescale_expr  = rescale_store->Child(0);

  if (mul_expr == Null_ptr || rescale_expr == Null_ptr) {
    return false;
  }
  if (!Is_mul_plain_expr(mul_expr, lower_ctx) ||
      rescale_expr->Opcode() != OPC_RESCALE) {
    return false;
  }

  STORE_TARGET target = Get_store_target(stmt);
  if (!target._valid || !lower_ctx.Is_cipher_type(target._type)) {
    return false;
  }
  if (!Is_load_of_target(rescale_expr->Child(0), target)) {
    return false;
  }

  FUNC_SCOPE* func = stmt->Func_scope();
  AIR_ASSERT(func != nullptr);
  if (Count_target_uses(func->Container().Entry_node(), target) != 1) {
    return false;
  }

  CONTAINER* cntr = stmt->Container();
  AIR_ASSERT(cntr == next->Container());

  rescale_store->Set_child(0, Build_mul_plain_rescale_from_mul(mul_expr,
                                                               rescale_expr));

  STMT_LIST stmt_list = STMT_LIST::Enclosing_list(stmt);
  stmt_list.Remove(stmt);
  return true;
}

bool Fuse_mul_plain_rescale_expr(NODE_PTR parent, uint32_t child_idx,
                                 const core::LOWER_CTX& lower_ctx) {
  if (parent == Null_ptr || child_idx >= parent->Num_child()) {
    return false;
  }

  NODE_PTR child = parent->Child(child_idx);
  if (child == Null_ptr || child->Opcode() != OPC_RESCALE ||
      child->Num_child() == 0) {
    return false;
  }
  if (!Is_mul_plain_expr(child->Child(0), lower_ctx)) {
    return false;
  }

  parent->Set_child(child_idx, Build_mul_plain_rescale_expr(child));
  return true;
}

bool Fuse_rotate_add_reduce(STMT_PTR stmt, const core::LOWER_CTX& lower_ctx) {
  if (!Is_store_stmt(stmt)) {
    return false;
  }

  STMT_PTR loop_stmt = stmt->Next();
  if (loop_stmt == Null_ptr || loop_stmt->Opcode() != air::core::OPC_DO_LOOP) {
    return false;
  }

  STORE_TARGET acc_target = Get_store_target(stmt);
  if (!acc_target._valid || !lower_ctx.Is_cipher_type(acc_target._type)) {
    return false;
  }

  NODE_PTR init_expr = stmt->Node()->Child(0);
  if (init_expr == Null_ptr) {
    return false;
  }
  STORE_TARGET init_source = Get_load_target(init_expr);
  if (!init_source._valid || !lower_ctx.Is_cipher_type(init_source._type)) {
    return false;
  }

  NODE_PTR loop_node = loop_stmt->Node();
  STMT_PTR body_stmt = Get_single_block_stmt(loop_node->Body_blk());
  if (body_stmt == Null_ptr || !Is_store_stmt(body_stmt)) {
    return false;
  }
  if (!Same_target(acc_target, Get_store_target(body_stmt))) {
    return false;
  }

  NODE_PTR rotate_expr = Null_ptr;
  NODE_PTR loop_expr   = body_stmt->Node()->Child(0);
  if (Find_rotate_add_expr(loop_expr, acc_target, &rotate_expr) == Null_ptr) {
    return false;
  }

  STORE_TARGET rotate_source = Get_load_target(rotate_expr->Child(0));
  if (!rotate_source._valid || !lower_ctx.Is_cipher_type(rotate_source._type)) {
    return false;
  }

  bool rotate_self = false;
  if (Same_target(rotate_source, acc_target)) {
    rotate_self = true;
  } else if (!Same_target(rotate_source, init_source)) {
    return false;
  }

  LOOP_STEPS steps;
  steps._values = rotate_expr->Attr<int>(nn::core::ATTR::RNUM, &steps._count);
  if (steps._values == nullptr || steps._count == 0) {
    return false;
  }

  stmt->Node()->Set_child(0, Build_rotate_add_reduce_expr(loop_expr, init_expr,
                                                          steps, rotate_self));
  STMT_LIST stmt_list = STMT_LIST::Enclosing_list(loop_stmt);
  stmt_list.Remove(loop_stmt);
  return true;
}

bool Collect_rotate_add_terms(NODE_PTR expr, const core::LOWER_CTX& lower_ctx,
                              STORE_TARGET* source_target,
                              NODE_PTR* source_expr,
                              std::vector<int>* steps, bool* has_base) {
  if (expr == Null_ptr || source_target == nullptr || source_expr == nullptr ||
      steps == nullptr || has_base == nullptr) {
    return false;
  }

  if (expr->Opcode() == OPC_ADD) {
    return Collect_rotate_add_terms(expr->Child(0), lower_ctx, source_target,
                                    source_expr, steps, has_base) &&
           Collect_rotate_add_terms(expr->Child(1), lower_ctx, source_target,
                                    source_expr, steps, has_base);
  }

  if (expr->Opcode() == OPC_ROTATE) {
    STORE_TARGET rotate_source = Get_load_target(expr->Child(0));
    if (!rotate_source._valid ||
        !lower_ctx.Is_cipher_type(rotate_source._type)) {
      return false;
    }
    if (!source_target->_valid) {
      *source_target = rotate_source;
      *source_expr   = expr->Child(0);
    } else if (!Same_target(*source_target, rotate_source)) {
      return false;
    }

    uint32_t   step_count = 0;
    const int* step_attr =
        expr->Attr<int>(nn::core::ATTR::RNUM, &step_count);
    if (step_attr == nullptr || step_count != 1) {
      return false;
    }
    if (step_attr[0] == 0) {
      if (*has_base) {
        return false;
      }
      *has_base = true;
    } else {
      steps->push_back(step_attr[0]);
    }
    return true;
  }

  STORE_TARGET leaf_target = Get_load_target(expr);
  if (!leaf_target._valid || !lower_ctx.Is_cipher_type(leaf_target._type)) {
    return false;
  }
  if (!source_target->_valid) {
    *source_target = leaf_target;
    *source_expr   = expr;
  } else if (!Same_target(*source_target, leaf_target)) {
    return false;
  }
  if (*has_base) {
    return false;
  }
  *has_base = true;
  return true;
}

bool Fuse_rotate_add_reduce_tree(STMT_PTR stmt,
                                 const core::LOWER_CTX& lower_ctx) {
  if (!Is_store_stmt(stmt)) {
    return false;
  }

  STORE_TARGET target = Get_store_target(stmt);
  if (!target._valid || !lower_ctx.Is_cipher_type(target._type)) {
    return false;
  }

  NODE_PTR expr = stmt->Node()->Child(0);
  if (expr == Null_ptr || expr->Opcode() != OPC_ADD) {
    return false;
  }

  STORE_TARGET     source_target;
  NODE_PTR         source_expr = Null_ptr;
  std::vector<int> steps;
  bool             has_base = false;
  if (!Collect_rotate_add_terms(expr, lower_ctx, &source_target, &source_expr,
                                &steps, &has_base) ||
      !source_target._valid || source_expr == Null_ptr || !has_base ||
      steps.empty()) {
    return false;
  }

  stmt->Node()->Set_child(
      0, Build_rotate_add_reduce_expr(expr, source_expr, steps, false));
  return true;
}

bool Match_linear_transform_accumulate(
    NODE_PTR expr, const STORE_TARGET& acc_target,
    const STORE_TARGET* rotate_tmp_target, const LOOP_INFO& loop_info,
    const core::LOWER_CTX& lower_ctx, NODE_PTR* source_expr,
    NODE_PTR* encode_expr, LOOP_STEPS* steps) {
  if (expr == Null_ptr || source_expr == nullptr || encode_expr == nullptr ||
      steps == nullptr || expr->Opcode() != OPC_ADD) {
    return false;
  }

  NODE_PTR acc_load = Null_ptr;
  NODE_PTR mul_expr = Null_ptr;
  if (Is_load_of_target(expr->Child(0), acc_target)) {
    acc_load = expr->Child(0);
    mul_expr = expr->Child(1);
  } else if (Is_load_of_target(expr->Child(1), acc_target)) {
    acc_load = expr->Child(1);
    mul_expr = expr->Child(0);
  }
  if (acc_load == Null_ptr || mul_expr == Null_ptr ||
      !Is_mul_plain_expr(mul_expr, lower_ctx)) {
    return false;
  }

  NODE_PTR rotate_term = mul_expr->Child(0);
  if (rotate_term == Null_ptr) {
    return false;
  }
  NODE_PTR local_src   = Null_ptr;
  LOOP_STEPS local_steps;
  if (rotate_tmp_target != nullptr && rotate_tmp_target->_valid &&
      Is_load_of_target(rotate_term, *rotate_tmp_target)) {
    if (steps->_values == nullptr || steps->_count != loop_info._trip_count) {
      return false;
    }
    local_src   = *source_expr;
    local_steps = *steps;
  } else if (rotate_term->Opcode() == OPC_ROTATE) {
    local_src = rotate_term->Child(0);
    local_steps._values =
        rotate_term->Attr<int>(nn::core::ATTR::RNUM, &local_steps._count);
    if (local_steps._values == nullptr ||
        local_steps._count != loop_info._trip_count) {
      return false;
    }
  } else {
    return false;
  }

  if (local_src == Null_ptr ||
      !lower_ctx.Is_cipher_type(local_src->Rtype_id()) ||
      Uses_addr_datum(local_src, loop_info._iv)) {
    return false;
  }

  *source_expr = local_src;
  *encode_expr = mul_expr->Child(1);
  *steps       = local_steps;
  return *encode_expr != Null_ptr && (*encode_expr)->Opcode() == OPC_ENCODE;
}

bool Fuse_linear_transform(STMT_PTR stmt, const core::LOWER_CTX& lower_ctx) {
  if (!Is_store_stmt(stmt)) {
    return false;
  }

  STORE_TARGET acc_target = Get_store_target(stmt);
  if (!acc_target._valid || !lower_ctx.Is_cipher_type(acc_target._type)) {
    return false;
  }

  NODE_PTR init_expr = stmt->Node()->Child(0);
  if (init_expr == Null_ptr || init_expr->Opcode() != air::core::OPC_ZERO) {
    return false;
  }

  STMT_PTR loop_stmt = stmt->Next();
  if (loop_stmt == Null_ptr || loop_stmt->Opcode() != air::core::OPC_DO_LOOP) {
    return false;
  }

  LOOP_INFO loop_info;
  if (!Parse_loop_info(loop_stmt, &loop_info)) {
    return false;
  }

  NODE_PTR body = loop_stmt->Node()->Body_blk();
  uint32_t body_stmt_count = Count_block_stmt(body);
  if (body_stmt_count == 0 || body_stmt_count > 2) {
    return false;
  }

  STMT_PTR rotate_stmt = Null_ptr;
  STMT_PTR accum_stmt  = Null_ptr;
  STORE_TARGET rotate_tmp_target;
  NODE_PTR source_expr = Null_ptr;
  NODE_PTR encode_expr = Null_ptr;
  LOOP_STEPS steps;

  if (body_stmt_count == 2) {
    rotate_stmt = Get_nth_block_stmt(body, 0);
    accum_stmt  = Get_nth_block_stmt(body, 1);
    if (rotate_stmt == Null_ptr || accum_stmt == Null_ptr ||
        !Is_store_stmt(rotate_stmt) || !Is_store_stmt(accum_stmt)) {
      return false;
    }

    rotate_tmp_target = Get_store_target(rotate_stmt);
    NODE_PTR rotate_expr = rotate_stmt->Node()->Child(0);
    if (!rotate_tmp_target._valid || rotate_expr == Null_ptr ||
        rotate_expr->Opcode() != OPC_ROTATE ||
        !lower_ctx.Is_cipher_type(rotate_tmp_target._type)) {
      return false;
    }

    source_expr   = rotate_expr->Child(0);
    steps._values = rotate_expr->Attr<int>(nn::core::ATTR::RNUM, &steps._count);
    if (steps._values == nullptr || steps._count != loop_info._trip_count) {
      return false;
    }
  } else {
    accum_stmt = Get_single_block_stmt(body);
    if (accum_stmt == Null_ptr || !Is_store_stmt(accum_stmt)) {
      return false;
    }
  }

  if (!Same_target(acc_target, Get_store_target(accum_stmt))) {
    return false;
  }
  if (!Match_linear_transform_accumulate(accum_stmt->Node()->Child(0),
                                         acc_target,
                                         body_stmt_count == 2
                                             ? &rotate_tmp_target
                                             : nullptr,
                                         loop_info, lower_ctx, &source_expr,
                                         &encode_expr, &steps)) {
    return false;
  }
  if (source_expr == Null_ptr || encode_expr == Null_ptr ||
      Is_load_of_target(source_expr, acc_target) ||
      Uses_addr_datum(source_expr, loop_info._iv)) {
    return false;
  }

  STMT_PTR rescale_stmt = loop_stmt->Next();
  bool     post_rescale = false;
  NODE_PTR template_expr = accum_stmt->Node()->Child(0);
  if (rescale_stmt != Null_ptr && Is_store_stmt(rescale_stmt) &&
      Same_target(acc_target, Get_store_target(rescale_stmt))) {
    NODE_PTR rescale_expr = rescale_stmt->Node()->Child(0);
    if (rescale_expr != Null_ptr && rescale_expr->Opcode() == OPC_RESCALE &&
        Is_load_of_target(rescale_expr->Child(0), acc_target)) {
      post_rescale = true;
      template_expr = rescale_expr;
    }
  }

  CONTAINER* cntr = stmt->Container();
  AIR_ASSERT(cntr != nullptr);

  PLAIN_TABLE_INFO table_info;
  NODE_PTR         fused = Null_ptr;
  if (Match_linear_plain_table(encode_expr, loop_info._iv, &table_info)) {
    fused = Build_linear_transform_desc_expr(template_expr, source_expr, steps,
                                             post_rescale, table_info);
  } else {
    fused = Build_linear_transform_expr(template_expr, source_expr, steps,
                                        post_rescale, loop_info._trip_count);
  }
  STMT_LIST stmt_list = STMT_LIST::Enclosing_list(stmt);
  for (uint32_t idx = 0; idx < loop_info._trip_count; ++idx) {
    NODE_PTR encode_clone = Clone_with_iv_subst(cntr, encode_expr,
                                                loop_info._iv, idx);
    if (Uses_addr_datum(encode_clone, loop_info._iv)) {
      return false;
    }
  }
  if (!table_info._valid) {
    FUNC_SCOPE* func = stmt->Func_scope();
    AIR_ASSERT(func != nullptr);
    for (uint32_t idx = 0; idx < loop_info._trip_count; ++idx) {
      NODE_PTR encode_clone = Clone_with_iv_subst(cntr, encode_expr,
                                                  loop_info._iv, idx);
      air::base::PREG_PTR preg = func->New_preg(encode_clone->Rtype());
      STMT_PTR encode_stmt =
          cntr->New_stp(encode_clone, preg, encode_clone->Spos());
      stmt_list.Prepend(stmt, encode_stmt);
      fused->Set_arg(idx, cntr->New_ldp(preg, encode_clone->Spos()));
    }
  }

  stmt->Node()->Set_child(0, fused);
  stmt_list.Remove(loop_stmt);
  if (post_rescale) {
    stmt_list.Remove(rescale_stmt);
  }
  return true;
}

bool Fuse_block_linear_transform(STMT_PTR stmt,
                                 const core::LOWER_CTX& lower_ctx) {
  if (stmt == Null_ptr || stmt->Opcode() != OPC_BLOCKING_ROTATE) {
    return false;
  }

  NODE_PTR bank_base = stmt->Node()->Child(0);
  NODE_PTR source_expr = stmt->Node()->Child(1);
  if (bank_base == Null_ptr || source_expr == Null_ptr ||
      bank_base->Opcode() != air::core::OPC_LDA ||
      !lower_ctx.Is_cipher_type(source_expr->Rtype_id())) {
    return false;
  }

  LOOP_STEPS bank_steps;
  bank_steps._values =
      stmt->Node()->Attr<int>(nn::core::ATTR::RNUM, &bank_steps._count);
  if (bank_steps._values == nullptr || bank_steps._count == 0) {
    return false;
  }

  STMT_PTR init_stmt = stmt->Next();
  if (init_stmt == Null_ptr || init_stmt->Opcode() != air::core::OPC_ST ||
      !Is_store_stmt(init_stmt)) {
    return false;
  }
  STORE_TARGET out_target = Get_store_target(init_stmt);
  NODE_PTR init_expr      = init_stmt->Node()->Child(0);
  if (!out_target._valid || !lower_ctx.Is_cipher_type(out_target._type) ||
      init_expr == Null_ptr || init_expr->Opcode() != air::core::OPC_ZERO) {
    return false;
  }

  STMT_PTR outer_loop = init_stmt->Next();
  LOOP_INFO grid_loop_info;
  if (outer_loop == Null_ptr || outer_loop->Opcode() != air::core::OPC_DO_LOOP ||
      !Parse_loop_info(outer_loop, &grid_loop_info)) {
    return false;
  }

  NODE_PTR outer_body = outer_loop->Node()->Body_blk();
  if (Count_block_stmt(outer_body) != 3) {
    return false;
  }

  STMT_PTR grid_zero_stmt  = Get_nth_block_stmt(outer_body, 0);
  STMT_PTR inner_loop_stmt = Get_nth_block_stmt(outer_body, 1);
  STMT_PTR outer_acc_stmt  = Get_nth_block_stmt(outer_body, 2);
  if (grid_zero_stmt == Null_ptr || inner_loop_stmt == Null_ptr ||
      outer_acc_stmt == Null_ptr || !Is_store_stmt(grid_zero_stmt) ||
      inner_loop_stmt->Opcode() != air::core::OPC_DO_LOOP ||
      !Is_store_stmt(outer_acc_stmt)) {
    return false;
  }

  STORE_TARGET grid_target = Get_store_target(grid_zero_stmt);
  if (!grid_target._valid || !lower_ctx.Is_cipher_type(grid_target._type) ||
      grid_zero_stmt->Node()->Child(0) == Null_ptr ||
      grid_zero_stmt->Node()->Child(0)->Opcode() != air::core::OPC_ZERO) {
    return false;
  }
  if (!Same_target(out_target, Get_store_target(outer_acc_stmt))) {
    return false;
  }

  LOOP_INFO block_loop_info;
  if (!Parse_loop_info(inner_loop_stmt, &block_loop_info) ||
      block_loop_info._trip_count != bank_steps._count) {
    return false;
  }

  NODE_PTR inner_body = inner_loop_stmt->Node()->Body_blk();
  uint32_t inner_body_count = Count_block_stmt(inner_body);
  if (inner_body_count == 0 || inner_body_count > 2) {
    return false;
  }

  STMT_PTR load_stmt  = Null_ptr;
  STMT_PTR accum_stmt = Null_ptr;
  STORE_TARGET block_tmp_target;
  if (inner_body_count == 2) {
    load_stmt  = Get_nth_block_stmt(inner_body, 0);
    accum_stmt = Get_nth_block_stmt(inner_body, 1);
    if (load_stmt == Null_ptr || accum_stmt == Null_ptr ||
        !Is_store_stmt(load_stmt) || !Is_store_stmt(accum_stmt)) {
      return false;
    }
    block_tmp_target = Get_store_target(load_stmt);
    NODE_PTR load_expr = load_stmt->Node()->Child(0);
    if (!block_tmp_target._valid || !lower_ctx.Is_cipher_type(block_tmp_target._type) ||
        !Match_bank_array_load(load_expr, bank_base->Addr_datum_id(),
                               block_loop_info._iv)) {
      return false;
    }
  } else {
    accum_stmt = Get_single_block_stmt(inner_body);
    if (accum_stmt == Null_ptr || !Is_store_stmt(accum_stmt)) {
      return false;
    }
  }

  if (!Same_target(grid_target, Get_store_target(accum_stmt))) {
    return false;
  }

  NODE_PTR accum_expr = accum_stmt->Node()->Child(0);
  if (accum_expr == Null_ptr || accum_expr->Opcode() != OPC_ADD) {
    return false;
  }

  NODE_PTR grid_load = Null_ptr;
  NODE_PTR mul_expr  = Null_ptr;
  if (Is_load_of_target(accum_expr->Child(0), grid_target)) {
    grid_load = accum_expr->Child(0);
    mul_expr  = accum_expr->Child(1);
  } else if (Is_load_of_target(accum_expr->Child(1), grid_target)) {
    grid_load = accum_expr->Child(1);
    mul_expr  = accum_expr->Child(0);
  }
  if (grid_load == Null_ptr || mul_expr == Null_ptr ||
      !Is_mul_plain_expr(mul_expr, lower_ctx)) {
    return false;
  }

  NODE_PTR block_term = mul_expr->Child(0);
  if (block_term == Null_ptr) {
    return false;
  }
  if (inner_body_count == 2) {
    if (!Is_load_of_target(block_term, block_tmp_target)) {
      return false;
    }
  } else if (!Match_bank_array_load(block_term, bank_base->Addr_datum_id(),
                                    block_loop_info._iv)) {
    return false;
  }

  PLAIN_TABLE_INFO table_info;
  if (!Match_block_plain_table(mul_expr->Child(1), grid_loop_info._iv,
                               block_loop_info._iv, block_loop_info._trip_count,
                               &table_info)) {
    return false;
  }

  int grid_shift = 0;
  if (!Match_grid_rotate_accumulate(outer_acc_stmt->Node()->Child(0), out_target,
                                    grid_target, grid_loop_info._trip_count,
                                    &grid_shift)) {
    return false;
  }

  STMT_PTR rescale_stmt  = outer_loop->Next();
  bool     post_rescale  = false;
  NODE_PTR attr_template = outer_acc_stmt->Node()->Child(0);
  if (rescale_stmt != Null_ptr && Is_store_stmt(rescale_stmt) &&
      Same_target(out_target, Get_store_target(rescale_stmt))) {
    NODE_PTR rescale_expr = rescale_stmt->Node()->Child(0);
    if (rescale_expr != Null_ptr && rescale_expr->Opcode() == OPC_RESCALE &&
        Is_load_of_target(rescale_expr->Child(0), out_target)) {
      post_rescale = true;
      attr_template = rescale_expr;
    }
  }

  STMT_PTR fused = Build_block_linear_transform_stmt(
      stmt, init_stmt->Node()->Addr_datum(), source_expr, table_info, bank_steps,
      grid_loop_info._trip_count, grid_shift, post_rescale, attr_template);
  STMT_LIST stmt_list = STMT_LIST::Enclosing_list(stmt);
  stmt_list.Prepend(stmt, fused);
  stmt_list.Remove(stmt);
  stmt_list.Remove(init_stmt);
  stmt_list.Remove(outer_loop);
  if (post_rescale) {
    stmt_list.Remove(rescale_stmt);
  }
  return true;
}

bool Fuse_blocking_rotate(STMT_PTR stmt, const core::LOWER_CTX& lower_ctx) {
  if (stmt == Null_ptr || stmt->Opcode() != air::core::OPC_DO_LOOP) {
    return false;
  }

  LOOP_INFO loop_info;
  if (!Parse_loop_info(stmt, &loop_info)) {
    return false;
  }

  NODE_PTR body = stmt->Node()->Body_blk();
  STMT_PTR body_stmt = Get_single_block_stmt(body);
  if (body_stmt == Null_ptr || body_stmt->Opcode() != air::core::OPC_IST) {
    return false;
  }

  NODE_PTR addr_expr   = body_stmt->Node()->Child(0);
  NODE_PTR rotate_expr = body_stmt->Node()->Child(1);
  if (addr_expr == Null_ptr || rotate_expr == Null_ptr ||
      addr_expr->Opcode() != air::core::OPC_ARRAY ||
      rotate_expr->Opcode() != OPC_ROTATE) {
    return false;
  }

  if (!lower_ctx.Is_cipher_type(rotate_expr->Rtype_id()) ||
      !lower_ctx.Is_cipher_type(body_stmt->Node()->Access_type_id())) {
    return false;
  }

  if (addr_expr->Num_child() < 2 || addr_expr->Child(0) == Null_ptr ||
      addr_expr->Child(1) == Null_ptr ||
      addr_expr->Child(1)->Opcode() != air::core::OPC_LD ||
      addr_expr->Child(1)->Addr_datum_id() != loop_info._iv) {
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

  STMT_PTR fused = Build_blocking_rotate_stmt(stmt, addr_expr->Child(0),
                                              source_expr, rotate_expr, steps);
  STMT_LIST stmt_list = STMT_LIST::Enclosing_list(stmt);
  stmt_list.Prepend(stmt, fused);
  stmt_list.Remove(stmt);
  return true;
}

bool Run_mul_plain_rescale_expr_fusion(NODE_PTR node,
                                       const core::LOWER_CTX& lower_ctx) {
  if (node == Null_ptr) {
    return false;
  }

  bool changed = false;
  if (node->Is_block()) {
    for (STMT_PTR stmt = node->Begin_stmt(); stmt != node->End_stmt();
         stmt          = stmt->Next()) {
      changed |= Run_mul_plain_rescale_expr_fusion(stmt->Node(), lower_ctx);
    }
    return changed;
  }

  for (uint32_t idx = 0; idx < node->Num_child(); ++idx) {
    changed |= Run_mul_plain_rescale_expr_fusion(node->Child(idx), lower_ctx);
    changed |= Fuse_mul_plain_rescale_expr(node, idx, lower_ctx);
  }
  return changed;
}

bool Run_mul_plain_rescale_fusion(NODE_PTR node,
                                  const core::LOWER_CTX& lower_ctx) {
  if (node == Null_ptr) {
    return false;
  }

  bool changed = false;
  if (node->Is_block()) {
    for (STMT_PTR stmt = node->Begin_stmt(); stmt != node->End_stmt();) {
      STMT_PTR next_stmt = stmt->Next();
      changed |= Run_mul_plain_rescale_expr_fusion(stmt->Node(), lower_ctx);
      changed |= Run_mul_plain_rescale_fusion(stmt->Node(), lower_ctx);
      if (Fuse_block_linear_transform(stmt, lower_ctx)) {
        changed = true;
        return true;
      }
      if (Fuse_blocking_rotate(stmt, lower_ctx)) {
        changed = true;
        stmt    = next_stmt;
        continue;
      }
      if (Fuse_rotate_add_reduce_tree(stmt, lower_ctx)) {
        changed = true;
        stmt    = next_stmt;
        continue;
      }
      if (Fuse_linear_transform(stmt, lower_ctx)) {
        changed = true;
        stmt    = stmt->Next();
        continue;
      }
      if (Fuse_rotate_add_reduce(stmt, lower_ctx)) {
        changed = true;
        stmt    = stmt->Next();
        continue;
      }
      if (Fuse_mul_plain_rescale(stmt, lower_ctx)) {
        changed = true;
        stmt    = next_stmt;
        continue;
      }
      stmt = next_stmt;
    }
    return changed;
  }

  for (uint32_t idx = 0; idx < node->Num_child(); ++idx) {
    changed |= Run_mul_plain_rescale_fusion(node->Child(idx), lower_ctx);
  }
  return changed;
}

}  // namespace

CKKS_FUSION_PASS::CKKS_FUSION_PASS()
    : _driver(nullptr), _active(false), _provider(core::PROVIDER::INVALID) {}

R_CODE CKKS_FUSION_PASS::Init(driver::FHE_COMPILER* driver) {
  Set_driver(driver);
  return R_CODE::NORMAL;
}

R_CODE CKKS_FUSION_PASS::Pre_run() {
  Get_config().Update_options();

  const auto& poly2c_pass =
      Get_driver()->Get_pass<poly::POLY2C_PASS, driver::PASS_ID::POLY2C>();
  auto& poly2c_cfg =
      const_cast<poly::POLY2C_CONFIG&>(poly2c_pass.Config());
  poly2c_cfg.Update_options();

  _provider = poly2c_cfg.Provider();
  _active   = Get_config().Fusion() &&
            (_provider == core::PROVIDER::PHANTOM ||
             _provider == core::PROVIDER::CHEDDAR);
  return R_CODE::NORMAL;
}

R_CODE CKKS_FUSION_PASS::Run() {
  if (!Is_active()) {
    return R_CODE::NORMAL;
  }

  for (air::base::GLOB_SCOPE::FUNC_SCOPE_ITER it =
           Get_driver()->Glob_scope()->Begin_func_scope();
       it != Get_driver()->Glob_scope()->End_func_scope(); ++it) {
    FUNC_SCOPE* func = &(*it);
    while (Run_mul_plain_rescale_fusion(func->Container().Entry_node(),
                                        Get_driver()->Lower_ctx())) {
    }
  }
  return R_CODE::NORMAL;
}

void CKKS_FUSION_PASS::Post_run() {}

void CKKS_FUSION_PASS::Fini() {}

}  // namespace ckks

}  // namespace fhe
