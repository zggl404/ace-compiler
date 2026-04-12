//-*-c++-*-
//=============================================================================
//
// Copyright (c) Ant Group Co., Ltd
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//=============================================================================

#ifndef FHE_CKKS_IR2C_HANDLER_H
#define FHE_CKKS_IR2C_HANDLER_H

#include <cstdint>
#include <string>

#include "air/base/container_decl.h"
#include "air/base/st_decl.h"
#include "air/base/st_type.h"
#include "fhe/ckks/ckks_opcode.h"
#include "fhe/ckks/invalid_handler.h"
#include "fhe/ckks/ir2c_ctx.h"
#include "nn/core/attr.h"
#include "nn/vector/vector_opcode.h"

namespace fhe {
namespace ckks {

class IR2C_HANDLER : public INVALID_HANDLER {
public:
  template <typename RETV, typename VISITOR>
  void Handle_add(VISITOR* visitor, air::base::NODE_PTR node) {
    IR2C_CTX&           ctx    = visitor->Context();
    air::base::NODE_PTR parent = ctx.Parent(1);

    AIR_ASSERT(parent != air::base::Null_ptr && parent->Is_st());
    if (ctx.Is_plain_type(node->Child(1)->Rtype_id())) {
      ctx << "Add_plain(&";
    } else if (ctx.Is_cipher_type(node->Child(1)->Rtype_id())) {
      ctx << "Add_ciph(&";
    } else {
      AIR_ASSERT(node->Child(1)->Rtype()->Is_prim());
      ctx << "Add_scalar(&";
    }
    ctx.Emit_st_var(parent);
    ctx << ", ";
    visitor->template Visit<RETV>(node->Child(0));
    ctx << ", ";
    visitor->template Visit<RETV>(node->Child(1));
    ctx << ")";
  }

  template <typename RETV, typename VISITOR>
  void Handle_sub(VISITOR* visitor, air::base::NODE_PTR node) {
    IR2C_CTX&           ctx    = visitor->Context();
    air::base::NODE_PTR parent = ctx.Parent(1);

    AIR_ASSERT(parent != air::base::Null_ptr && parent->Is_st());
    if (ctx.Is_plain_type(node->Child(1)->Rtype_id())) {
      ctx << "Sub_plain(&";
    } else if (ctx.Is_cipher_type(node->Child(1)->Rtype_id()) ||
               ctx.Is_cipher3_type(node->Child(1)->Rtype_id())) {
      ctx << "Sub_ciph(&";
    } else if (node->Child(1)->Rtype()->Is_prim()) {
      ctx << "Sub_scalar(&";
    } else {
      // For other types (e.g., cipher3), treat as cipher sub
      ctx << "Sub_ciph(&";
    }
    ctx.Emit_st_var(parent);
    ctx << ", ";
    visitor->template Visit<RETV>(node->Child(0));
    ctx << ", ";
    visitor->template Visit<RETV>(node->Child(1));
    ctx << ")";
  }

  template <typename RETV, typename VISITOR>
  void Handle_mul(VISITOR* visitor, air::base::NODE_PTR node) {
    IR2C_CTX&           ctx    = visitor->Context();
    air::base::NODE_PTR parent = ctx.Parent(1);

    AIR_ASSERT(parent != air::base::Null_ptr && parent->Is_st());
    if (ctx.Is_plain_type(node->Child(1)->Rtype_id())) {
      ctx << "Mul_plain(&";
    } else if (ctx.Is_cipher3_type(node->Child(1)->Rtype_id())) {
      ctx << "Mul_ciph(&";
    } else if (ctx.Is_cipher_type(node->Child(1)->Rtype_id())) {
      ctx << "Mul_ciph(&";
    } else {
      AIR_ASSERT(node->Child(1)->Rtype()->Is_prim());
      ctx << "Mul_scalar(&";
    }

    ctx.Emit_st_var(parent);
    ctx << ", ";
    visitor->template Visit<RETV>(node->Child(0));
    ctx << ", ";
    visitor->template Visit<RETV>(node->Child(1));
    ctx << ")";
  }

  template <typename RETV, typename VISITOR>
  void Handle_mul_plain_rescale(VISITOR* visitor, air::base::NODE_PTR node) {
    IR2C_CTX&           ctx    = visitor->Context();
    air::base::NODE_PTR parent = ctx.Parent(1);

    AIR_ASSERT(parent != air::base::Null_ptr && parent->Is_st());
    AIR_ASSERT_MSG(ctx.Provider() == core::PROVIDER::PHANTOM ||
                       ctx.Provider() == core::PROVIDER::CHEDDAR,
                   "Mul_plain_rescale is only supported for PHANTOM and CHEDDAR providers");
    ctx << "Mul_plain_rescale(&";
    ctx.Emit_st_var(parent);
    ctx << ", ";
    visitor->template Visit<RETV>(node->Child(0));
    ctx << ", ";
    visitor->template Visit<RETV>(node->Child(1));
    ctx << ")";
  }

  template <typename RETV, typename VISITOR>
  void Handle_rotate_add_reduce(VISITOR* visitor, air::base::NODE_PTR node) {
    IR2C_CTX&           ctx    = visitor->Context();
    air::base::NODE_PTR parent = ctx.Parent(1);

    AIR_ASSERT(parent != air::base::Null_ptr && parent->Is_st());
    AIR_ASSERT_MSG(ctx.Provider() == core::PROVIDER::PHANTOM ||
                       ctx.Provider() == core::PROVIDER::CHEDDAR,
                   "Rotate_add_reduce is only supported for PHANTOM and CHEDDAR providers");

    uint32_t   step_count       = 0;
    const int* steps            = node->Attr<int>(nn::core::ATTR::RNUM,
                                       &step_count);
    const uint32_t* rotate_self = node->Attr<uint32_t>("rotate_self");
    AIR_ASSERT_MSG(steps != nullptr && step_count > 0,
                   "Rotate_add_reduce requires non-empty rotation steps");

    ctx << "Rotate_add_reduce(&";
    ctx.Emit_st_var(parent);
    ctx << ", ";
    visitor->template Visit<RETV>(node->Child(0));
    ctx << ", " << step_count << ", " << (rotate_self != nullptr && *rotate_self);
    for (uint32_t idx = 0; idx < step_count; ++idx) {
      ctx << ", " << steps[idx];
    }
    ctx << ")";
  }

  template <typename RETV, typename VISITOR>
  void Handle_linear_transform(VISITOR* visitor, air::base::NODE_PTR node) {
    IR2C_CTX&           ctx    = visitor->Context();
    air::base::NODE_PTR parent = ctx.Parent(1);

    AIR_ASSERT(parent != air::base::Null_ptr && parent->Is_st());
    AIR_ASSERT_MSG(ctx.Provider() == core::PROVIDER::PHANTOM ||
                       ctx.Provider() == core::PROVIDER::CHEDDAR,
                   "Linear_transform is only supported for PHANTOM and CHEDDAR providers");

    uint32_t   step_count = 0;
    const int* steps =
        node->Attr<int>(nn::core::ATTR::RNUM, &step_count);
    const uint32_t* post_rescale = node->Attr<uint32_t>("post_rescale");
    AIR_ASSERT_MSG(steps != nullptr && step_count > 0,
                   "Linear_transform requires non-empty rotation steps");
    if (node->Num_arg() == 1 && node->Child(1) != air::base::Null_ptr &&
        node->Child(1)->Opcode() == air::core::OPC_LDC) {
      const uint32_t* plain_len = node->Attr<uint32_t>("plain_len");
      const uint32_t* plain_scale = node->Attr<uint32_t>("plain_scale");
      const uint32_t* plain_level = node->Attr<uint32_t>("plain_level");
      AIR_ASSERT_MSG(plain_len != nullptr && plain_scale != nullptr &&
                         plain_level != nullptr,
                     "Linear_transform descriptor form requires plain attrs");

      ctx << "Rotate_mul_sum(&";
      ctx.Emit_st_var(parent);
      ctx << ", ";
      visitor->template Visit<RETV>(node->Child(0));
      ctx << ", " << step_count << ", "
          << (post_rescale != nullptr && *post_rescale);
      if (ctx.Emit_data_file()) {
        uint64_t base_idx = ctx.Append_plain_table_rows(
            node->Child(1)->Const(), step_count, *plain_len, *plain_scale,
            *plain_level);
        ctx << ", static_cast<uint64_t>(" << base_idx << ")";
      } else {
        ctx << ", ";
        ctx.template Emit_const_buffer_address<RETV, VISITOR>(visitor,
                                                              node->Child(1));
      }
      ctx << ", " << *plain_len << ", " << *plain_scale << ", "
          << *plain_level;
      for (uint32_t idx = 0; idx < step_count; ++idx) {
        ctx << ", " << steps[idx];
      }
      ctx << ")";
      return;
    }

    AIR_ASSERT_MSG(node->Num_arg() == step_count,
                   "Linear_transform expects one plaintext child per step");

    ctx << "Rotate_mul_sum(&";
    ctx.Emit_st_var(parent);
    ctx << ", ";
    visitor->template Visit<RETV>(node->Child(0));
    ctx << ", " << step_count << ", "
        << (post_rescale != nullptr && *post_rescale);
    for (uint32_t idx = 0; idx < step_count; ++idx) {
      ctx << ", " << steps[idx] << ", ";
      visitor->template Visit<RETV>(node->Child(1 + idx));
    }
    ctx << ")";
  }

  template <typename RETV, typename VISITOR>
  void Handle_blocking_rotate(VISITOR* visitor, air::base::NODE_PTR node) {
    IR2C_CTX& ctx = visitor->Context();

    AIR_ASSERT_MSG(ctx.Provider() == core::PROVIDER::PHANTOM ||
                       ctx.Provider() == core::PROVIDER::CHEDDAR,
                   "Blocking_rotate is only supported for PHANTOM and CHEDDAR providers");

    uint32_t   step_count = 0;
    const int* steps =
        node->Attr<int>(nn::core::ATTR::RNUM, &step_count);
    AIR_ASSERT_MSG(node->Num_child() == 2,
                   "Blocking_rotate expects array base and source children");
    AIR_ASSERT_MSG(steps != nullptr && step_count > 0,
                   "Blocking_rotate requires non-empty rotation steps");

    ctx << "Blocking_rotate(";
    visitor->template Visit<RETV>(node->Child(0));
    ctx << ", ";
    visitor->template Visit<RETV>(node->Child(1));
    ctx << ", " << step_count;
    for (uint32_t idx = 0; idx < step_count; ++idx) {
      ctx << ", " << steps[idx];
    }
    ctx << ")";
  }

  template <typename RETV, typename VISITOR>
  void Handle_block_linear_transform(VISITOR* visitor,
                                     air::base::NODE_PTR node) {
    IR2C_CTX& ctx = visitor->Context();

    AIR_ASSERT_MSG(ctx.Provider() == core::PROVIDER::PHANTOM ||
                       ctx.Provider() == core::PROVIDER::CHEDDAR,
                   "Block_linear_transform is only supported for PHANTOM and CHEDDAR providers");

    uint32_t   block_count = 0;
    const int* bank_steps =
        node->Attr<int>(nn::core::ATTR::RNUM, &block_count);
    const uint32_t* grid_count = node->Attr<uint32_t>("grid_count");
    const int* grid_shift = node->Attr<int>("grid_shift");
    const uint32_t* post_rescale = node->Attr<uint32_t>("post_rescale");
    const uint32_t* plain_len = node->Attr<uint32_t>("plain_len");
    const uint32_t* plain_scale = node->Attr<uint32_t>("plain_scale");
    const uint32_t* plain_level = node->Attr<uint32_t>("plain_level");

    AIR_ASSERT_MSG(node->Num_child() == 3,
                   "Block_linear_transform expects output, source, and plain-table children");
    AIR_ASSERT_MSG(bank_steps != nullptr && block_count > 0,
                   "Block_linear_transform requires non-empty bank steps");
    AIR_ASSERT_MSG(grid_count != nullptr && *grid_count > 0 &&
                       grid_shift != nullptr && plain_len != nullptr &&
                       plain_scale != nullptr && plain_level != nullptr,
                   "Block_linear_transform descriptor attrs are incomplete");

    ctx << "Block_rotate_mul_sum(&";
    visitor->template Visit<RETV>(node->Child(0));
    ctx << ", ";
    visitor->template Visit<RETV>(node->Child(1));
    ctx << ", " << block_count << ", " << *grid_count << ", " << *grid_shift
        << ", " << (post_rescale != nullptr && *post_rescale);
    if (ctx.Emit_data_file()) {
      uint64_t base_idx = ctx.Append_plain_table_rows(
          node->Child(2)->Const(), block_count * (*grid_count), *plain_len,
          *plain_scale, *plain_level);
      ctx << ", static_cast<uint64_t>(" << base_idx << ")";
    } else {
      ctx << ", ";
      ctx.template Emit_const_buffer_address<RETV, VISITOR>(visitor,
                                                            node->Child(2));
    }
    ctx << ", " << *plain_len << ", " << *plain_scale << ", " << *plain_level;
    for (uint32_t idx = 0; idx < block_count; ++idx) {
      ctx << ", " << bank_steps[idx];
    }
    ctx << ")";
  }

  template <typename RETV, typename VISITOR>
  void Handle_rotate(VISITOR* visitor, air::base::NODE_PTR node) {
    IR2C_CTX&           ctx    = visitor->Context();
    air::base::NODE_PTR parent = ctx.Parent(1);

    AIR_ASSERT(parent != air::base::Null_ptr && parent->Is_st());
    ctx << "Rotate_ciph(&";
    ctx.Emit_st_var(parent);
    ctx << ", ";
    visitor->template Visit<RETV>(node->Child(0));
    ctx << ", ";
    visitor->template Visit<RETV>(node->Child(1));
    ctx << ")";
  }

  template <typename RETV, typename VISITOR>
  void Handle_relin(VISITOR* visitor, air::base::NODE_PTR node) {
    IR2C_CTX&           ctx    = visitor->Context();
    air::base::NODE_PTR parent = ctx.Parent(1);

    AIR_ASSERT(parent != air::base::Null_ptr && parent->Is_st());
    ctx << "Relin(&";
    ctx.Emit_st_var(parent);
    ctx << ", ";
    visitor->template Visit<RETV>(node->Child(0));
    ctx << ")";
  }

  template <typename RETV, typename VISITOR>
  void Handle_rescale(VISITOR* visitor, air::base::NODE_PTR node) {
    IR2C_CTX&           ctx    = visitor->Context();
    air::base::NODE_PTR parent = ctx.Parent(1);

    AIR_ASSERT(parent != air::base::Null_ptr && parent->Is_st());
    ctx << "Rescale_ciph(&";
    ctx.Emit_st_var(parent);
    ctx << ", ";
    visitor->template Visit<RETV>(node->Child(0));
    ctx << ")";
  }

  template <typename RETV, typename VISITOR>
  void Handle_mod_switch(VISITOR* visitor, air::base::NODE_PTR node) {
    IR2C_CTX&           ctx    = visitor->Context();
    air::base::NODE_PTR parent = ctx.Parent(1);

    AIR_ASSERT(parent != air::base::Null_ptr && parent->Is_st());
    ctx << "Mod_switch(&";
    ctx.Emit_st_var(parent);
    ctx << ", ";
    visitor->template Visit<RETV>(node->Child(0));
    ctx << ")";
  }

  template <typename RETV, typename VISITOR>
  void Handle_raise_mod(VISITOR* visitor, air::base::NODE_PTR node) {
    IR2C_CTX&           ctx    = visitor->Context();
    air::base::NODE_PTR parent = ctx.Parent(1);

    AIR_ASSERT(parent != air::base::Null_ptr && parent->Is_st());
    ctx << "Raise_mod(&";
    ctx.Emit_st_var(parent);
    ctx << ", ";
    visitor->template Visit<RETV>(node->Child(0));
    ctx << ", ";
    visitor->template Visit<RETV>(node->Child(1));
    ctx << ")";
  }

  template <typename RETV, typename VISITOR>
  void Handle_conjugate(VISITOR* visitor, air::base::NODE_PTR node) {
    IR2C_CTX&           ctx    = visitor->Context();
    air::base::NODE_PTR parent = ctx.Parent(1);

    AIR_ASSERT(parent != air::base::Null_ptr && parent->Is_st());
    ctx << "Conjugate(&";
    ctx.Emit_st_var(parent);
    ctx << ", ";
    visitor->template Visit<RETV>(node->Child(0));
    ctx << ")";
  }

  template <typename RETV, typename VISITOR>
  void Handle_bootstrap(VISITOR* visitor, air::base::NODE_PTR node) {
    IR2C_CTX&           ctx    = visitor->Context();
    air::base::NODE_PTR parent = ctx.Parent(1);

    AIR_ASSERT(parent != air::base::Null_ptr && parent->Is_st());
    const uint32_t* with_relu = node->Attr<uint32_t>(nn::core::ATTR::WITH_RELU);
    if (with_relu != nullptr) {
      AIR_ASSERT_MSG(ctx.Provider() == core::PROVIDER::PHANTOM ||
                         ctx.Provider() == core::PROVIDER::CHEDDAR,
                     "Bootstrap_with_relu is only supported for PHANTOM and CHEDDAR providers");
    }
    // TODO Handle bts with target level.
    ctx << (with_relu != nullptr ? "Bootstrap_with_relu(&" : "Bootstrap(&");
    ctx.Emit_st_var(parent);
    ctx << ", ";
    visitor->template Visit<RETV>(node->Child(0));
    const uint32_t* mul_lev =
        node->Attr<uint32_t>(fhe::core::FHE_ATTR_KIND::LEVEL);
    ctx << ", " << (mul_lev == nullptr ? 0 : *mul_lev);

    const uint32_t* slot = node->Attr<uint32_t>(nn::core::ATTR::SLOT);
    ctx << ", " << (slot == nullptr ? 0 : *slot);
    if (with_relu != nullptr) {
      const double* relu_value_range =
          node->Attr<double>(nn::core::ATTR::RELU_VALUE_RANGE);
      ctx << ", " << (relu_value_range == nullptr ? 1.0 : *relu_value_range);
    }
    ctx << ")";
    if (!ctx._need_bts) {
      ctx._need_bts = true;
    }
  }

  template <typename RETV, typename VISITOR>
  void Handle_free(VISITOR* visitor, air::base::NODE_PTR node) {
    IR2C_CTX& ctx      = visitor->Context();
    uint64_t  elem_cnt = 0;
    if (node->Child(0)->Opcode() == air::core::OPC_LD &&
        node->Child(0)->Addr_datum()->Type()->Is_array()) {
      elem_cnt =
          node->Child(0)->Addr_datum()->Type()->Cast_to_arr()->Elem_count();
    }
    if (ctx.Is_cipher_type(node->Child(0)->Rtype_id()) ||
        ctx.Is_cipher3_type(node->Child(0)->Rtype_id())) {
      ctx << "Free_ciph(";
    } else if (ctx.Is_plain_type(node->Child(0)->Rtype_id())) {
      ctx << "Free_plain(";
    } else {
      ctx << "Free_ciph_array(";
    }
    visitor->template Visit<RETV>(node->Child(0));
    if (elem_cnt > 0) {
      ctx << ", " << elem_cnt;
    }
    ctx << ")";
  }

  template <typename RETV, typename VISITOR>
  void Handle_encode(VISITOR* visitor, air::base::NODE_PTR node) {
    IR2C_CTX&           ctx    = visitor->Context();
    air::base::NODE_PTR parent = ctx.Parent(1);

    AIR_ASSERT(parent != air::base::Null_ptr && parent->Is_st());
    if (ctx.Provider() == core::PROVIDER::ANT ||
        ctx.Provider() == core::PROVIDER::PHANTOM ||
        ctx.Provider() == core::PROVIDER::CHEDDAR) {
      ctx.template Emit_encode<RETV, VISITOR>(visitor, parent, node);
    } else {
      ctx.template Emit_runtime_encode<RETV, VISITOR>(visitor, parent, node);
      for (int i = 1; i < node->Num_child(); ++i) {
        ctx << ", ";
        visitor->template Visit<RETV>(node->Child(i));
      }
      ctx << ")";
    }
  }

  template <typename RETV, typename VISITOR>
  void Handle_level(VISITOR* visitor, air::base::NODE_PTR node) {
    IR2C_CTX&           ctx    = visitor->Context();
    air::base::NODE_PTR parent = ctx.Parent(1);

    if (parent->Is_st()) {
      ctx.Emit_st_var(parent);
      ctx << " = Level(";
    } else {
      ctx << "Level(";
    }
    visitor->template Visit<RETV>(node->Child(0));
    ctx << ")";
  }

  template <typename RETV, typename VISITOR>
  void Handle_scale(VISITOR* visitor, air::base::NODE_PTR node) {
    IR2C_CTX&           ctx    = visitor->Context();
    air::base::NODE_PTR parent = ctx.Parent(1);

    if (parent->Is_st()) {
      ctx.Emit_st_var(parent);
      ctx << " = Sc_degree(";
    } else {
      ctx << "Sc_degree(";
    }
    visitor->template Visit<RETV>(node->Child(0));
    ctx << ")";
  }
};
}  // namespace ckks
}  // namespace fhe

#endif
