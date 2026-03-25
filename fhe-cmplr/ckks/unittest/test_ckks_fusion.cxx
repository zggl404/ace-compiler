//-*-c++-*-
//=============================================================================
//
// Copyright (c) Ant Group Co., Ltd
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//=============================================================================

#include <cstdint>
#include <sstream>
#include <string>
#include <vector>

#include "air/base/container.h"
#include "air/base/meta_info.h"
#include "air/core/opcode.h"
#include "fhe/ckks/ckks_opcode.h"
#include "fhe/driver/fhe_cmplr.h"
#include "fhe/test/gen_ckks_ir.h"
#include "gtest/gtest.h"
#include "nn/vector/vector_gen.h"
#include "nn/vector/vector_opcode.h"

namespace {

using air::base::ADDR_DATUM_ID;
using air::base::ADDR_DATUM_PTR;
using air::base::CONSTANT_KIND;
using air::base::CONSTANT_PTR;
using air::base::CONTAINER;
using air::base::FUNC_SCOPE;
using air::base::GLOB_SCOPE;
using air::base::NODE_PTR;
using air::base::PRIMITIVE_TYPE;
using air::base::SPOS;
using air::base::STMT_LIST;
using air::base::STMT_PTR;
using fhe::ckks::CKKS_FUSION_PASS;
using fhe::driver::FHE_COMPILER;
using fhe::poly::test::CKKS_IR_GEN;
using nn::vector::VECTOR_GEN;

static constexpr const char* kPostRescaleAttr = "post_rescale";
static constexpr const char* kPlainLenAttr    = "plain_len";
static constexpr const char* kPlainScaleAttr  = "plain_scale";
static constexpr const char* kPlainLevelAttr  = "plain_level";
static constexpr const char* kGridCountAttr   = "grid_count";
static constexpr const char* kGridShiftAttr   = "grid_shift";

struct TEST_COMPILER {
  air::driver::DRIVER root;
  FHE_COMPILER        cmplr;

  TEST_COMPILER() : root(true), cmplr(false) {}
};

struct LinearTransformSignature {
  uint64_t         source_id     = 0;
  uint64_t         table_id      = 0;
  std::vector<int> steps;
  uint32_t         plain_len     = 0;
  uint32_t         plain_scale   = 0;
  uint32_t         plain_level   = 0;
  bool             post_rescale  = false;

  std::string To_string() const {
    std::ostringstream os;
    os << "src=" << source_id << " table=" << table_id << " len=" << plain_len
       << " scale=" << plain_scale << " level=" << plain_level
       << " post=" << post_rescale << " steps=[";
    for (size_t idx = 0; idx < steps.size(); ++idx) {
      if (idx != 0) {
        os << ",";
      }
      os << steps[idx];
    }
    os << "]";
    return os.str();
  }
};

struct BlockLinearTransformSignature {
  uint64_t         out_id         = 0;
  uint64_t         source_id      = 0;
  uint64_t         table_id       = 0;
  std::vector<int> bank_steps;
  uint32_t         grid_count     = 0;
  int              grid_shift     = 0;
  uint32_t         plain_len      = 0;
  uint32_t         plain_scale    = 0;
  uint32_t         plain_level    = 0;
  bool             post_rescale   = false;

  std::string To_string() const {
    std::ostringstream os;
    os << "out=" << out_id << " src=" << source_id << " table=" << table_id
       << " grid_count=" << grid_count << " grid_shift=" << grid_shift
       << " len=" << plain_len << " scale=" << plain_scale
       << " level=" << plain_level << " post=" << post_rescale
       << " bank_steps=[";
    for (size_t idx = 0; idx < bank_steps.size(); ++idx) {
      if (idx != 0) {
        os << ",";
      }
      os << bank_steps[idx];
    }
    os << "]";
    return os.str();
  }
};

R_CODE Init_compiler(TEST_COMPILER* harness, bool enable_fusion,
                     const char* provider) {
  AIR_ASSERT(harness != nullptr);
  R_CODE ret = harness->cmplr.Init(&harness->root);
  if (ret != R_CODE::NORMAL) {
    return ret;
  }
  std::vector<const char*> argv = {"fhe_cmplr", "/dev/null"};
  if (enable_fusion) {
    argv.push_back("-CKKS:fus");
  }
  std::string provider_opt = std::string("-P2C:lib=") + provider;
  argv.push_back(provider_opt.c_str());
  return harness->root.Init(static_cast<int>(argv.size()),
                            const_cast<char**>(argv.data()));
}

uint32_t Count_block_stmt(NODE_PTR block) {
  if (block == air::base::Null_ptr) {
    return 0;
  }
  uint32_t count = 0;
  for (STMT_PTR stmt = block->Begin_stmt(); stmt != block->End_stmt();
       stmt          = stmt->Next()) {
    ++count;
  }
  return count;
}

bool Match_const_u32(NODE_PTR node, uint32_t* value) {
  if (node == air::base::Null_ptr || value == nullptr ||
      node->Opcode() != air::core::OPC_INTCONST) {
    return false;
  }
  *value = static_cast<uint32_t>(node->Intconst());
  return true;
}

bool Match_ld_of(NODE_PTR node, ADDR_DATUM_ID datum_id) {
  return node != air::base::Null_ptr && node->Opcode() == air::core::OPC_LD &&
         node->Addr_datum_id() == datum_id;
}

bool Parse_loop_info(STMT_PTR loop_stmt, ADDR_DATUM_ID* iv_id,
                     uint32_t* trip_count) {
  if (loop_stmt == air::base::Null_ptr ||
      loop_stmt->Opcode() != air::core::OPC_DO_LOOP || iv_id == nullptr ||
      trip_count == nullptr) {
    return false;
  }

  NODE_PTR loop = loop_stmt->Node();
  if (loop == air::base::Null_ptr || loop->Iv_id().Is_null()) {
    return false;
  }

  NODE_PTR init = loop->Loop_init();
  if (init == air::base::Null_ptr || init->Opcode() != air::core::OPC_INTCONST ||
      init->Intconst() != 0) {
    return false;
  }

  NODE_PTR comp = loop->Compare();
  if (comp == air::base::Null_ptr || comp->Opcode() != air::core::OPC_LT ||
      comp->Child(0) == air::base::Null_ptr ||
      comp->Child(1) == air::base::Null_ptr ||
      comp->Child(0)->Opcode() != air::core::OPC_LD ||
      comp->Child(0)->Addr_datum_id() != loop->Iv_id() ||
      comp->Child(1)->Opcode() != air::core::OPC_INTCONST ||
      comp->Child(1)->Intconst() <= 0) {
    return false;
  }

  NODE_PTR incr = loop->Loop_incr();
  if (incr == air::base::Null_ptr || incr->Opcode() != air::core::OPC_ADD ||
      incr->Child(0) == air::base::Null_ptr ||
      incr->Child(1) == air::base::Null_ptr ||
      incr->Child(0)->Opcode() != air::core::OPC_LD ||
      incr->Child(0)->Addr_datum_id() != loop->Iv_id() ||
      incr->Child(1)->Opcode() != air::core::OPC_INTCONST ||
      incr->Child(1)->Intconst() != 1) {
    return false;
  }

  *iv_id      = loop->Iv_id();
  *trip_count = static_cast<uint32_t>(comp->Child(1)->Intconst());
  return true;
}

CONSTANT_PTR Make_float_table(GLOB_SCOPE* glob, const SPOS& spos,
                              const char* name, uint32_t total_len) {
  air::base::TYPE_PTR f32_type = glob->Prim_type(PRIMITIVE_TYPE::FLOAT_32);
  std::vector<int64_t> dims{static_cast<int64_t>(total_len)};
  air::base::TYPE_PTR  arr_type = glob->New_arr_type(name, f32_type, dims, spos);
  std::vector<float>   data(total_len);
  for (uint32_t idx = 0; idx < total_len; ++idx) {
    data[idx] = static_cast<float>(idx + 1) / 16.0f;
  }
  return glob->New_const(CONSTANT_KIND::ARRAY, arr_type, data.data(),
                         data.size() * sizeof(float));
}

NODE_PTR Make_encode_slice(CONTAINER* cntr, CKKS_IR_GEN& gen,
                           CONSTANT_PTR table, NODE_PTR start_idx,
                           uint32_t plain_len, uint32_t plain_scale,
                           uint32_t plain_level) {
  air::base::TYPE_PTR int32_type =
      cntr->Glob_scope()->Prim_type(PRIMITIVE_TYPE::INT_S32);
  NODE_PTR slice = VECTOR_GEN(cntr).New_slice(
      cntr->New_ldc(table, gen.Spos()), start_idx,
      cntr->New_intconst(int32_type, plain_len, gen.Spos()), gen.Spos());
  NODE_PTR encode =
      cntr->New_cust_node(fhe::ckks::OPC_ENCODE, gen.Plain_ty(), gen.Spos());
  encode->Set_child(0, slice);
  encode->Set_child(1, cntr->New_intconst(int32_type, plain_len, gen.Spos()));
  encode->Set_child(2, cntr->New_intconst(int32_type, plain_scale, gen.Spos()));
  encode->Set_child(3, cntr->New_intconst(int32_type, plain_level, gen.Spos()));
  return encode;
}

NODE_PTR Make_rotate_expr(CONTAINER* cntr, CKKS_IR_GEN& gen,
                          ADDR_DATUM_PTR source, ADDR_DATUM_PTR iv,
                          const std::vector<int>& steps) {
  NODE_PTR rotate =
      cntr->New_cust_node(fhe::ckks::OPC_ROTATE, gen.Ciph_ty(), gen.Spos());
  rotate->Set_child(0, cntr->New_ld(source, gen.Spos()));
  rotate->Set_child(1, cntr->New_ld(iv, gen.Spos()));
  rotate->Set_attr(nn::core::ATTR::RNUM, steps.data(), steps.size());
  return rotate;
}

void Append_counting_loop(CONTAINER* cntr, STMT_LIST* sl, ADDR_DATUM_PTR iv,
                          uint32_t trip_count, NODE_PTR body, const SPOS& spos) {
  air::base::TYPE_PTR int32_type =
      cntr->Glob_scope()->Prim_type(PRIMITIVE_TYPE::INT_S32);
  NODE_PTR init = cntr->New_intconst(int32_type, 0, spos);
  NODE_PTR cmp  = cntr->New_bin_arith(
      air::core::OPC_LT, int32_type, cntr->New_ld(iv, spos),
      cntr->New_intconst(int32_type, trip_count, spos), spos);
  NODE_PTR incr = cntr->New_bin_arith(
      air::core::OPC_ADD, int32_type, cntr->New_ld(iv, spos),
      cntr->New_intconst(int32_type, 1, spos), spos);
  sl->Append(cntr->New_do_loop(iv, init, cmp, incr, body, spos));
}

void Build_linear_transform_case(CKKS_IR_GEN& gen) {
  static constexpr uint32_t kTermCount  = 3;
  static constexpr uint32_t kPlainLen   = 8;
  static constexpr uint32_t kPlainScale = 7;
  static constexpr uint32_t kPlainLevel = 2;

  CONTAINER*      cntr = gen.Main_container();
  STMT_LIST       sl   = cntr->Stmt_list();
  ADDR_DATUM_PTR  acc  = gen.Gen_ciph_var("lt_acc");
  ADDR_DATUM_PTR  iv   = gen.Gen_int_var("lt_iv");
  CONSTANT_PTR    table =
      Make_float_table(gen.Glob(), gen.Spos(), "lt_table",
                       kTermCount * kPlainLen);
  std::vector<int> steps{0, 5, 11};

  sl.Append(cntr->New_st(cntr->New_zero(gen.Ciph_ty(), gen.Spos()), acc,
                         gen.Spos()));

  NODE_PTR body = cntr->New_stmt_block(gen.Spos());
  STMT_LIST body_sl(body);
  NODE_PTR encode = Make_encode_slice(cntr, gen, table, cntr->New_ld(iv, gen.Spos()),
                                      kPlainLen, kPlainScale, kPlainLevel);
  NODE_PTR rotate = Make_rotate_expr(cntr, gen, gen.Input_var(), iv, steps);
  NODE_PTR mul = cntr->New_bin_arith(fhe::ckks::OPC_MUL, gen.Ciph_ty(), rotate,
                                     encode, gen.Spos());
  NODE_PTR add = cntr->New_bin_arith(fhe::ckks::OPC_ADD, gen.Ciph_ty(),
                                     cntr->New_ld(acc, gen.Spos()), mul,
                                     gen.Spos());
  body_sl.Append(cntr->New_st(add, acc, gen.Spos()));
  Append_counting_loop(cntr, &sl, iv, kTermCount, body, gen.Spos());

  NODE_PTR rescale =
      cntr->New_cust_node(fhe::ckks::OPC_RESCALE, gen.Ciph_ty(), gen.Spos());
  rescale->Set_child(0, cntr->New_ld(acc, gen.Spos()));
  sl.Append(cntr->New_st(rescale, acc, gen.Spos()));
}

void Build_block_linear_transform_case(CKKS_IR_GEN& gen) {
  static constexpr uint32_t kBlockCount = 3;
  static constexpr uint32_t kGridCount  = 2;
  static constexpr int      kGridShift  = 8;
  static constexpr uint32_t kPlainLen   = 4;
  static constexpr uint32_t kPlainScale = 5;
  static constexpr uint32_t kPlainLevel = 1;

  CONTAINER*      cntr = gen.Main_container();
  STMT_LIST       sl   = cntr->Stmt_list();
  std::vector<int64_t> bank_dims{static_cast<int64_t>(kBlockCount)};
  ADDR_DATUM_PTR  bank = gen.Gen_ciph_array("blk_bank", bank_dims);
  ADDR_DATUM_PTR  bank_iv = gen.Gen_int_var("blk_bank_iv");
  ADDR_DATUM_PTR  out = gen.Gen_ciph_var("blk_out");
  ADDR_DATUM_PTR  grid = gen.Gen_ciph_var("blk_grid");
  ADDR_DATUM_PTR  grid_iv = gen.Gen_int_var("blk_grid_iv");
  CONSTANT_PTR    table =
      Make_float_table(gen.Glob(), gen.Spos(), "blk_table",
                       kBlockCount * kGridCount * kPlainLen);
  std::vector<int> bank_steps{-1, 0, 3};
  std::vector<int> grid_steps{0, kGridShift};

  NODE_PTR bank_body = cntr->New_stmt_block(gen.Spos());
  STMT_LIST bank_body_sl(bank_body);
  NODE_PTR bank_addr =
      gen.Gen_array_ld(bank, 1, cntr->New_ld(bank_iv, gen.Spos()));
  NODE_PTR bank_rotate = Make_rotate_expr(cntr, gen, gen.Input_var(), bank_iv,
                                          bank_steps);
  bank_body_sl.Append(cntr->New_ist(bank_addr, bank_rotate, gen.Spos()));
  Append_counting_loop(cntr, &sl, bank_iv, kBlockCount, bank_body, gen.Spos());

  sl.Append(cntr->New_st(cntr->New_zero(gen.Ciph_ty(), gen.Spos()), out,
                         gen.Spos()));

  NODE_PTR outer_body = cntr->New_stmt_block(gen.Spos());
  STMT_LIST outer_body_sl(outer_body);
  outer_body_sl.Append(
      cntr->New_st(cntr->New_zero(gen.Ciph_ty(), gen.Spos()), grid, gen.Spos()));

  NODE_PTR inner_body = cntr->New_stmt_block(gen.Spos());
  STMT_LIST inner_body_sl(inner_body);
  NODE_PTR bank_load =
      cntr->New_ild(gen.Gen_array_ld(bank, 1, cntr->New_ld(bank_iv, gen.Spos())),
                    gen.Ciph_ty(), gen.Spos());
  NODE_PTR table_index = cntr->New_bin_arith(
      air::core::OPC_ADD,
      cntr->Glob_scope()->Prim_type(PRIMITIVE_TYPE::INT_S32),
      cntr->New_ld(bank_iv, gen.Spos()),
      cntr->New_bin_arith(
          air::core::OPC_MUL,
          cntr->Glob_scope()->Prim_type(PRIMITIVE_TYPE::INT_S32),
          cntr->New_ld(grid_iv, gen.Spos()),
          cntr->New_intconst(PRIMITIVE_TYPE::INT_S32, kBlockCount, gen.Spos()),
          gen.Spos()),
      gen.Spos());
  NODE_PTR encode = Make_encode_slice(cntr, gen, table, table_index, kPlainLen,
                                      kPlainScale, kPlainLevel);
  NODE_PTR mul = cntr->New_bin_arith(fhe::ckks::OPC_MUL, gen.Ciph_ty(), bank_load,
                                     encode, gen.Spos());
  NODE_PTR add_grid = cntr->New_bin_arith(
      fhe::ckks::OPC_ADD, gen.Ciph_ty(), cntr->New_ld(grid, gen.Spos()), mul,
      gen.Spos());
  inner_body_sl.Append(cntr->New_st(add_grid, grid, gen.Spos()));
  Append_counting_loop(cntr, &outer_body_sl, bank_iv, kBlockCount, inner_body,
                       gen.Spos());

  NODE_PTR rotate_grid =
      cntr->New_cust_node(fhe::ckks::OPC_ROTATE, gen.Ciph_ty(), gen.Spos());
  rotate_grid->Set_child(0, cntr->New_ld(grid, gen.Spos()));
  rotate_grid->Set_child(1, cntr->New_ld(grid_iv, gen.Spos()));
  rotate_grid->Set_attr(nn::core::ATTR::RNUM, grid_steps.data(),
                        grid_steps.size());
  NODE_PTR add_out = cntr->New_bin_arith(
      fhe::ckks::OPC_ADD, gen.Ciph_ty(), cntr->New_ld(out, gen.Spos()),
      rotate_grid, gen.Spos());
  outer_body_sl.Append(cntr->New_st(add_out, out, gen.Spos()));
  Append_counting_loop(cntr, &sl, grid_iv, kGridCount, outer_body, gen.Spos());

  NODE_PTR rescale =
      cntr->New_cust_node(fhe::ckks::OPC_RESCALE, gen.Ciph_ty(), gen.Spos());
  rescale->Set_child(0, cntr->New_ld(out, gen.Spos()));
  sl.Append(cntr->New_st(rescale, out, gen.Spos()));
}

bool Extract_linear_transform_before(STMT_PTR stmt,
                                     LinearTransformSignature* sig) {
  if (stmt == air::base::Null_ptr || sig == nullptr ||
      stmt->Opcode() != air::core::OPC_ST ||
      stmt->Node()->Child(0) == air::base::Null_ptr ||
      stmt->Node()->Child(0)->Opcode() != air::core::OPC_ZERO) {
    return false;
  }

  ADDR_DATUM_ID acc_id = stmt->Node()->Addr_datum_id();
  STMT_PTR      loop_stmt = stmt->Next();
  ADDR_DATUM_ID iv_id;
  uint32_t      trip_count = 0;
  if (!Parse_loop_info(loop_stmt, &iv_id, &trip_count)) {
    return false;
  }

  NODE_PTR body = loop_stmt->Node()->Body_blk();
  if (Count_block_stmt(body) != 1) {
    return false;
  }

  STMT_PTR accum_stmt = body->Begin_stmt();
  if (accum_stmt == air::base::Null_ptr ||
      accum_stmt->Opcode() != air::core::OPC_ST ||
      accum_stmt->Node()->Addr_datum_id() != acc_id) {
    return false;
  }

  NODE_PTR expr = accum_stmt->Node()->Child(0);
  if (expr == air::base::Null_ptr || expr->Opcode() != fhe::ckks::OPC_ADD) {
    return false;
  }

  NODE_PTR mul = air::base::Null_ptr;
  if (Match_ld_of(expr->Child(0), acc_id)) {
    mul = expr->Child(1);
  } else if (Match_ld_of(expr->Child(1), acc_id)) {
    mul = expr->Child(0);
  } else {
    return false;
  }
  if (mul == air::base::Null_ptr || mul->Opcode() != fhe::ckks::OPC_MUL) {
    return false;
  }

  NODE_PTR rotate = mul->Child(0);
  NODE_PTR encode = mul->Child(1);
  if (rotate == air::base::Null_ptr || encode == air::base::Null_ptr ||
      rotate->Opcode() != fhe::ckks::OPC_ROTATE ||
      encode->Opcode() != fhe::ckks::OPC_ENCODE) {
    return false;
  }

  uint32_t   step_count = 0;
  const int* steps = rotate->Attr<int>(nn::core::ATTR::RNUM, &step_count);
  if (steps == nullptr || step_count != trip_count ||
      rotate->Child(0) == air::base::Null_ptr ||
      rotate->Child(0)->Opcode() != air::core::OPC_LD) {
    return false;
  }
  sig->source_id = rotate->Child(0)->Addr_datum_id().Value();
  sig->steps.assign(steps, steps + step_count);

  NODE_PTR slice = encode->Child(0);
  if (slice == air::base::Null_ptr || slice->Opcode() != nn::vector::OPC_SLICE ||
      slice->Child(0) == air::base::Null_ptr ||
      slice->Child(0)->Opcode() != air::core::OPC_LDC ||
      !Match_ld_of(slice->Child(1), iv_id)) {
    return false;
  }
  if (!Match_const_u32(encode->Child(1), &sig->plain_len) ||
      !Match_const_u32(encode->Child(2), &sig->plain_scale) ||
      !Match_const_u32(encode->Child(3), &sig->plain_level)) {
    return false;
  }
  sig->table_id = slice->Child(0)->Const()->Id().Value();

  STMT_PTR rescale_stmt = loop_stmt->Next();
  sig->post_rescale = rescale_stmt != air::base::Null_ptr &&
                      rescale_stmt->Opcode() == air::core::OPC_ST &&
                      rescale_stmt->Node()->Addr_datum_id() == acc_id &&
                      rescale_stmt->Node()->Child(0) != air::base::Null_ptr &&
                      rescale_stmt->Node()->Child(0)->Opcode() ==
                          fhe::ckks::OPC_RESCALE;
  return true;
}

bool Extract_linear_transform_after(STMT_PTR stmt,
                                    LinearTransformSignature* sig) {
  if (stmt == air::base::Null_ptr || sig == nullptr ||
      stmt->Opcode() != air::core::OPC_ST) {
    return false;
  }

  NODE_PTR expr = stmt->Node()->Child(0);
  if (expr == air::base::Null_ptr ||
      expr->Opcode() != fhe::ckks::OPC_LINEAR_TRANSFORM ||
      expr->Child(0) == air::base::Null_ptr ||
      expr->Child(0)->Opcode() != air::core::OPC_LD ||
      expr->Child(1) == air::base::Null_ptr ||
      expr->Child(1)->Opcode() != air::core::OPC_LDC) {
    return false;
  }

  sig->source_id = expr->Child(0)->Addr_datum_id().Value();
  sig->table_id  = expr->Child(1)->Const()->Id().Value();
  if (!Match_const_u32(expr->Child(1), &sig->plain_len)) {
    // no-op, child(1) is ldc, attrs hold the metadata
  }

  uint32_t   step_count = 0;
  const int* steps = expr->Attr<int>(nn::core::ATTR::RNUM, &step_count);
  const uint32_t* post_rescale = expr->Attr<uint32_t>(kPostRescaleAttr);
  const uint32_t* plain_len    = expr->Attr<uint32_t>(kPlainLenAttr);
  const uint32_t* plain_scale  = expr->Attr<uint32_t>(kPlainScaleAttr);
  const uint32_t* plain_level  = expr->Attr<uint32_t>(kPlainLevelAttr);
  if (steps == nullptr || plain_len == nullptr || plain_scale == nullptr ||
      plain_level == nullptr) {
    return false;
  }

  sig->steps.assign(steps, steps + step_count);
  sig->plain_len    = *plain_len;
  sig->plain_scale  = *plain_scale;
  sig->plain_level  = *plain_level;
  sig->post_rescale = post_rescale != nullptr && *post_rescale != 0;
  return true;
}

bool Extract_block_linear_transform_before(STMT_PTR stmt,
                                           BlockLinearTransformSignature* sig) {
  if (stmt == air::base::Null_ptr || sig == nullptr ||
      stmt->Opcode() != air::core::OPC_DO_LOOP) {
    return false;
  }

  ADDR_DATUM_ID bank_iv_id;
  uint32_t      block_count = 0;
  if (!Parse_loop_info(stmt, &bank_iv_id, &block_count)) {
    return false;
  }

  NODE_PTR bank_body = stmt->Node()->Body_blk();
  if (Count_block_stmt(bank_body) != 1) {
    return false;
  }

  STMT_PTR bank_store = bank_body->Begin_stmt();
  if (bank_store == air::base::Null_ptr ||
      bank_store->Opcode() != air::core::OPC_IST) {
    return false;
  }

  NODE_PTR bank_addr = bank_store->Node()->Child(0);
  NODE_PTR bank_rot  = bank_store->Node()->Child(1);
  if (bank_addr == air::base::Null_ptr || bank_rot == air::base::Null_ptr ||
      bank_addr->Opcode() != air::core::OPC_ARRAY ||
      bank_addr->Child(0) == air::base::Null_ptr ||
      bank_addr->Child(0)->Opcode() != air::core::OPC_LDA ||
      !Match_ld_of(bank_addr->Child(1), bank_iv_id) ||
      bank_rot->Opcode() != fhe::ckks::OPC_ROTATE ||
      bank_rot->Child(0) == air::base::Null_ptr ||
      bank_rot->Child(0)->Opcode() != air::core::OPC_LD) {
    return false;
  }

  sig->source_id = bank_rot->Child(0)->Addr_datum_id().Value();
  uint32_t   bank_step_count = 0;
  const int* bank_steps =
      bank_rot->Attr<int>(nn::core::ATTR::RNUM, &bank_step_count);
  if (bank_steps == nullptr || bank_step_count != block_count) {
    return false;
  }
  sig->bank_steps.assign(bank_steps, bank_steps + bank_step_count);

  STMT_PTR init_stmt = stmt->Next();
  if (init_stmt == air::base::Null_ptr ||
      init_stmt->Opcode() != air::core::OPC_ST ||
      init_stmt->Node()->Child(0) == air::base::Null_ptr ||
      init_stmt->Node()->Child(0)->Opcode() != air::core::OPC_ZERO) {
    return false;
  }
  sig->out_id = init_stmt->Node()->Addr_datum_id().Value();

  STMT_PTR      outer_loop = init_stmt->Next();
  ADDR_DATUM_ID grid_iv_id;
  if (!Parse_loop_info(outer_loop, &grid_iv_id, &sig->grid_count)) {
    return false;
  }

  NODE_PTR outer_body = outer_loop->Node()->Body_blk();
  if (Count_block_stmt(outer_body) != 3) {
    return false;
  }

  STMT_PTR grid_zero_stmt  = outer_body->Begin_stmt();
  STMT_PTR inner_loop_stmt = grid_zero_stmt->Next();
  STMT_PTR outer_acc_stmt  = inner_loop_stmt->Next();
  if (grid_zero_stmt == air::base::Null_ptr ||
      inner_loop_stmt == air::base::Null_ptr ||
      outer_acc_stmt == air::base::Null_ptr ||
      grid_zero_stmt->Opcode() != air::core::OPC_ST ||
      grid_zero_stmt->Node()->Child(0) == air::base::Null_ptr ||
      grid_zero_stmt->Node()->Child(0)->Opcode() != air::core::OPC_ZERO ||
      inner_loop_stmt->Opcode() != air::core::OPC_DO_LOOP ||
      outer_acc_stmt->Opcode() != air::core::OPC_ST) {
    return false;
  }

  ADDR_DATUM_ID grid_id = grid_zero_stmt->Node()->Addr_datum_id();
  if (outer_acc_stmt->Node()->Addr_datum_id().Value() != sig->out_id) {
    return false;
  }

  ADDR_DATUM_ID inner_iv_id;
  uint32_t      inner_trip_count = 0;
  if (!Parse_loop_info(inner_loop_stmt, &inner_iv_id, &inner_trip_count) ||
      inner_trip_count != block_count) {
    return false;
  }

  NODE_PTR inner_body = inner_loop_stmt->Node()->Body_blk();
  if (Count_block_stmt(inner_body) != 1) {
    return false;
  }
  STMT_PTR accum_stmt = inner_body->Begin_stmt();
  if (accum_stmt == air::base::Null_ptr ||
      accum_stmt->Opcode() != air::core::OPC_ST ||
      accum_stmt->Node()->Addr_datum_id() != grid_id) {
    return false;
  }

  NODE_PTR accum_expr = accum_stmt->Node()->Child(0);
  if (accum_expr == air::base::Null_ptr ||
      accum_expr->Opcode() != fhe::ckks::OPC_ADD) {
    return false;
  }

  NODE_PTR mul = air::base::Null_ptr;
  if (Match_ld_of(accum_expr->Child(0), grid_id)) {
    mul = accum_expr->Child(1);
  } else if (Match_ld_of(accum_expr->Child(1), grid_id)) {
    mul = accum_expr->Child(0);
  } else {
    return false;
  }
  if (mul == air::base::Null_ptr || mul->Opcode() != fhe::ckks::OPC_MUL) {
    return false;
  }

  NODE_PTR bank_load = mul->Child(0);
  NODE_PTR encode    = mul->Child(1);
  if (bank_load == air::base::Null_ptr || encode == air::base::Null_ptr ||
      bank_load->Opcode() != air::core::OPC_ILD ||
      bank_load->Child(0) == air::base::Null_ptr ||
      bank_load->Child(0)->Opcode() != air::core::OPC_ARRAY ||
      bank_load->Child(0)->Child(0) == air::base::Null_ptr ||
      bank_load->Child(0)->Child(0)->Opcode() != air::core::OPC_LDA ||
      !Match_ld_of(bank_load->Child(0)->Child(1), inner_iv_id) ||
      encode->Opcode() != fhe::ckks::OPC_ENCODE) {
    return false;
  }

  NODE_PTR slice = encode->Child(0);
  if (slice == air::base::Null_ptr || slice->Opcode() != nn::vector::OPC_SLICE ||
      slice->Child(0) == air::base::Null_ptr ||
      slice->Child(0)->Opcode() != air::core::OPC_LDC ||
      slice->Child(1) == air::base::Null_ptr ||
      slice->Child(1)->Opcode() != air::core::OPC_ADD) {
    return false;
  }

  NODE_PTR idx_add = slice->Child(1);
  NODE_PTR idx_mul = air::base::Null_ptr;
  if (Match_ld_of(idx_add->Child(0), inner_iv_id)) {
    idx_mul = idx_add->Child(1);
  } else if (Match_ld_of(idx_add->Child(1), inner_iv_id)) {
    idx_mul = idx_add->Child(0);
  } else {
    return false;
  }
  if (idx_mul == air::base::Null_ptr || idx_mul->Opcode() != air::core::OPC_MUL ||
      !Match_ld_of(idx_mul->Child(0), grid_iv_id) ||
      idx_mul->Child(1) == air::base::Null_ptr ||
      idx_mul->Child(1)->Opcode() != air::core::OPC_INTCONST ||
      static_cast<uint32_t>(idx_mul->Child(1)->Intconst()) != block_count) {
    return false;
  }

  if (!Match_const_u32(encode->Child(1), &sig->plain_len) ||
      !Match_const_u32(encode->Child(2), &sig->plain_scale) ||
      !Match_const_u32(encode->Child(3), &sig->plain_level)) {
    return false;
  }
  sig->table_id = slice->Child(0)->Const()->Id().Value();

  NODE_PTR outer_expr = outer_acc_stmt->Node()->Child(0);
  if (outer_expr == air::base::Null_ptr ||
      outer_expr->Opcode() != fhe::ckks::OPC_ADD) {
    return false;
  }
  NODE_PTR rotate_grid = air::base::Null_ptr;
  if (Match_ld_of(outer_expr->Child(0), init_stmt->Node()->Addr_datum_id())) {
    rotate_grid = outer_expr->Child(1);
  } else if (Match_ld_of(outer_expr->Child(1),
                         init_stmt->Node()->Addr_datum_id())) {
    rotate_grid = outer_expr->Child(0);
  } else {
    return false;
  }
  if (rotate_grid == air::base::Null_ptr ||
      rotate_grid->Opcode() != fhe::ckks::OPC_ROTATE ||
      !Match_ld_of(rotate_grid->Child(0), grid_id)) {
    return false;
  }

  uint32_t   grid_step_count = 0;
  const int* grid_steps =
      rotate_grid->Attr<int>(nn::core::ATTR::RNUM, &grid_step_count);
  if (grid_steps == nullptr || grid_step_count != sig->grid_count ||
      grid_steps[0] != 0) {
    return false;
  }
  sig->grid_shift = (grid_step_count > 1) ? grid_steps[1] : 0;
  for (uint32_t idx = 1; idx < grid_step_count; ++idx) {
    if (grid_steps[idx] != static_cast<int>(idx) * sig->grid_shift) {
      return false;
    }
  }

  STMT_PTR rescale_stmt = outer_loop->Next();
  sig->post_rescale = rescale_stmt != air::base::Null_ptr &&
                      rescale_stmt->Opcode() == air::core::OPC_ST &&
                      rescale_stmt->Node()->Addr_datum_id().Value() ==
                          sig->out_id &&
                      rescale_stmt->Node()->Child(0) != air::base::Null_ptr &&
                      rescale_stmt->Node()->Child(0)->Opcode() ==
                          fhe::ckks::OPC_RESCALE;
  return true;
}

bool Extract_block_linear_transform_after(STMT_PTR stmt,
                                          BlockLinearTransformSignature* sig) {
  if (stmt == air::base::Null_ptr || sig == nullptr ||
      stmt->Opcode() != fhe::ckks::OPC_BLOCK_LINEAR_TRANSFORM) {
    return false;
  }

  NODE_PTR node = stmt->Node();
  if (node == air::base::Null_ptr || node->Child(0) == air::base::Null_ptr ||
      node->Child(1) == air::base::Null_ptr ||
      node->Child(2) == air::base::Null_ptr ||
      node->Child(0)->Opcode() != air::core::OPC_LDA ||
      node->Child(1)->Opcode() != air::core::OPC_LD ||
      node->Child(2)->Opcode() != air::core::OPC_LDC) {
    return false;
  }

  sig->out_id    = node->Child(0)->Addr_datum_id().Value();
  sig->source_id = node->Child(1)->Addr_datum_id().Value();
  sig->table_id  = node->Child(2)->Const()->Id().Value();

  uint32_t   bank_step_count = 0;
  const int* bank_steps =
      node->Attr<int>(nn::core::ATTR::RNUM, &bank_step_count);
  const uint32_t* grid_count    = node->Attr<uint32_t>(kGridCountAttr);
  const int*      grid_shift    = node->Attr<int>(kGridShiftAttr);
  const uint32_t* post_rescale  = node->Attr<uint32_t>(kPostRescaleAttr);
  const uint32_t* plain_len     = node->Attr<uint32_t>(kPlainLenAttr);
  const uint32_t* plain_scale   = node->Attr<uint32_t>(kPlainScaleAttr);
  const uint32_t* plain_level   = node->Attr<uint32_t>(kPlainLevelAttr);
  if (bank_steps == nullptr || grid_count == nullptr || grid_shift == nullptr ||
      plain_len == nullptr || plain_scale == nullptr || plain_level == nullptr) {
    return false;
  }

  sig->bank_steps.assign(bank_steps, bank_steps + bank_step_count);
  sig->grid_count    = *grid_count;
  sig->grid_shift    = *grid_shift;
  sig->plain_len     = *plain_len;
  sig->plain_scale   = *plain_scale;
  sig->plain_level   = *plain_level;
  sig->post_rescale  = post_rescale != nullptr && *post_rescale != 0;
  return true;
}

std::string Run_mul_plain_rescale_case(bool enable_fusion,
                                       const char* provider) {
  R_CODE       ret   = R_CODE::NORMAL;
  TEST_COMPILER harness;
  ret = Init_compiler(&harness, enable_fusion, provider);
  EXPECT_EQ(ret, R_CODE::NORMAL);
  if (ret != R_CODE::NORMAL) {
    return "";
  }

  CKKS_IR_GEN gen(harness.cmplr.Lower_ctx());
  CONTAINER*  cntr = gen.Main_container();
  ADDR_DATUM_PTR tmp = gen.Gen_ciph_var("tmp");
  ADDR_DATUM_PTR out = gen.Gen_ciph_var("out");
  ADDR_DATUM_PTR pt  = gen.Gen_plain_var("pt");

  gen.Gen_mul(cntr, tmp, gen.Input_var(), pt);
  gen.Gen_rescale(cntr, out, tmp);

  harness.cmplr.Update_glob_scope(gen.Glob());
  auto& fusion_pass =
      harness.cmplr.Get_pass<CKKS_FUSION_PASS,
                             fhe::driver::PASS_ID::CKKS_FUSION>();
  ret = fusion_pass.Pre_run();
  EXPECT_EQ(ret, R_CODE::NORMAL);
  if (ret != R_CODE::NORMAL) {
    return "";
  }
  ret = fusion_pass.Run();
  EXPECT_EQ(ret, R_CODE::NORMAL);
  if (ret != R_CODE::NORMAL) {
    return "";
  }

  std::string ir = cntr->Stmt_list().To_str();
  return ir;
}

std::string Run_nested_mul_plain_rescale_case(bool enable_fusion,
                                              const char* provider) {
  R_CODE       ret   = R_CODE::NORMAL;
  TEST_COMPILER harness;
  ret = Init_compiler(&harness, enable_fusion, provider);
  EXPECT_EQ(ret, R_CODE::NORMAL);
  if (ret != R_CODE::NORMAL) {
    return "";
  }

  CKKS_IR_GEN gen(harness.cmplr.Lower_ctx());
  CONTAINER*  cntr = gen.Main_container();
  ADDR_DATUM_PTR out = gen.Gen_ciph_var("out");
  ADDR_DATUM_PTR pt  = gen.Gen_plain_var("pt");

  NODE_PTR mul_node = cntr->New_bin_arith(
      fhe::ckks::OPC_MUL, gen.Ciph_ty(), cntr->New_ld(gen.Input_var(), gen.Spos()),
      cntr->New_ld(pt, gen.Spos()), gen.Spos());
  NODE_PTR rescale_node =
      cntr->New_cust_node(fhe::ckks::OPC_RESCALE, gen.Ciph_ty(), gen.Spos());
  rescale_node->Set_child(0, mul_node);
  cntr->Stmt_list().Append(cntr->New_st(rescale_node, out, gen.Spos()));

  harness.cmplr.Update_glob_scope(gen.Glob());
  auto& fusion_pass =
      harness.cmplr.Get_pass<CKKS_FUSION_PASS,
                             fhe::driver::PASS_ID::CKKS_FUSION>();
  ret = fusion_pass.Pre_run();
  EXPECT_EQ(ret, R_CODE::NORMAL);
  if (ret != R_CODE::NORMAL) {
    return "";
  }
  ret = fusion_pass.Run();
  EXPECT_EQ(ret, R_CODE::NORMAL);
  if (ret != R_CODE::NORMAL) {
    return "";
  }

  std::string ir = cntr->Stmt_list().To_str();
  return ir;
}

TEST(CKKS_FUSION, mul_plain_rescale_enabled_for_phantom) {
  std::string ir = Run_mul_plain_rescale_case(true, "phantom");
  EXPECT_NE(ir.find("CKKS.mul_plain_rescale"), std::string::npos);
  EXPECT_EQ(ir.find("CKKS.rescale"), std::string::npos);
}

TEST(CKKS_FUSION, nested_mul_plain_rescale_enabled_for_phantom) {
  std::string ir = Run_nested_mul_plain_rescale_case(true, "phantom");
  EXPECT_NE(ir.find("CKKS.mul_plain_rescale"), std::string::npos);
  EXPECT_EQ(ir.find("CKKS.rescale"), std::string::npos);
}

TEST(CKKS_FUSION, mul_plain_rescale_disabled_without_flag) {
  std::string ir = Run_mul_plain_rescale_case(false, "phantom");
  EXPECT_EQ(ir.find("CKKS.mul_plain_rescale"), std::string::npos);
  EXPECT_NE(ir.find("CKKS.rescale"), std::string::npos);
}

TEST(CKKS_FUSION, mul_plain_rescale_disabled_for_non_phantom) {
  std::string ir = Run_mul_plain_rescale_case(true, "seal");
  EXPECT_EQ(ir.find("CKKS.mul_plain_rescale"), std::string::npos);
  EXPECT_NE(ir.find("CKKS.rescale"), std::string::npos);
}

TEST(CKKS_FUSION, linear_transform_semantics_preserved) {
  R_CODE       ret   = R_CODE::NORMAL;
  TEST_COMPILER harness;
  ret = Init_compiler(&harness, true, "phantom");
  ASSERT_EQ(ret, R_CODE::NORMAL);

  CKKS_IR_GEN gen(harness.cmplr.Lower_ctx());
  Build_linear_transform_case(gen);
  harness.cmplr.Update_glob_scope(gen.Glob());

  LinearTransformSignature before;
  ASSERT_TRUE(
      Extract_linear_transform_before(gen.Main_container()->Stmt_list().Begin_stmt(),
                                      &before));

  auto& fusion_pass =
      harness.cmplr.Get_pass<CKKS_FUSION_PASS,
                             fhe::driver::PASS_ID::CKKS_FUSION>();
  ASSERT_EQ(fusion_pass.Pre_run(), R_CODE::NORMAL);
  ASSERT_EQ(fusion_pass.Run(), R_CODE::NORMAL);

  LinearTransformSignature after;
  ASSERT_TRUE(
      Extract_linear_transform_after(gen.Main_container()->Stmt_list().Begin_stmt(),
                                     &after));
  EXPECT_EQ(before.To_string(), after.To_string());

  std::string ir = gen.Main_container()->Stmt_list().To_str();
  EXPECT_NE(ir.find("CKKS.linear_transform"), std::string::npos);
  EXPECT_EQ(ir.find("CKKS.rescale"), std::string::npos);
}

TEST(CKKS_FUSION, block_linear_transform_semantics_preserved) {
  R_CODE       ret   = R_CODE::NORMAL;
  TEST_COMPILER harness;
  ret = Init_compiler(&harness, true, "phantom");
  ASSERT_EQ(ret, R_CODE::NORMAL);

  CKKS_IR_GEN gen(harness.cmplr.Lower_ctx());
  Build_block_linear_transform_case(gen);
  harness.cmplr.Update_glob_scope(gen.Glob());

  BlockLinearTransformSignature before;
  ASSERT_TRUE(Extract_block_linear_transform_before(
      gen.Main_container()->Stmt_list().Begin_stmt(), &before));

  auto& fusion_pass =
      harness.cmplr.Get_pass<CKKS_FUSION_PASS,
                             fhe::driver::PASS_ID::CKKS_FUSION>();
  ASSERT_EQ(fusion_pass.Pre_run(), R_CODE::NORMAL);
  ASSERT_EQ(fusion_pass.Run(), R_CODE::NORMAL);

  BlockLinearTransformSignature after;
  ASSERT_TRUE(Extract_block_linear_transform_after(
      gen.Main_container()->Stmt_list().Begin_stmt(), &after));
  EXPECT_EQ(before.To_string(), after.To_string());

  std::string ir = gen.Main_container()->Stmt_list().To_str();
  EXPECT_NE(ir.find("CKKS.block_linear_transform"), std::string::npos);
  EXPECT_EQ(ir.find("CKKS.blocking_rotate"), std::string::npos);
  EXPECT_EQ(ir.find("CKKS.rescale"), std::string::npos);
}

}  // namespace
