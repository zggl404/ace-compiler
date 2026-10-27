//-*-c++-*-
//=============================================================================
//
// Copyright (c) Ant Group Co., Ltd
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//=============================================================================

#include <algorithm>
#include <cmath>
#include <complex>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <limits>
#include <memory>
#include <type_traits>
#include <unordered_set>
#include <utility>
#include <vector>

#include "common/common.h"
#include "common/error.h"
#include "common/io_api.h"
#include "common/rt_api.h"
#include "common/rt_env.h"
#include "common/rtlib_timing.h"
#include "core/EvkRequest.h"
#ifdef RTLIB_CHEDDAR_STANDARD_ONLY
#include "core/ParameterLiteral.h"
#include "extension/BootParameterLiteral.h"
#else
#include "core/ParameterBuilder.h"
#include "extension/BootstrapParameterBuilder.h"
#endif
#include "extension/BootContext.h"
#include "extension/BootParameter.h"
#include "rt_cheddar/cheddar_api.h"
#include "rt_cheddar/rt_cheddar.h"

using Word = fhe::rt::cheddar::Word;

namespace {

using CipherInner = fhe::rt::cheddar::CipherInner;
using PlainInner = fhe::rt::cheddar::PlainInner;
using Ciphertext = CIPHERTEXT;
using Plaintext = PLAINTEXT;
using ContextPtr = ::cheddar::ContextPtr<Word>;
using Context = ::cheddar::Context<Word>;
using Param = ::cheddar::Parameter<Word>;
using UI = ::cheddar::UserInterface<Word>;
using Constant = ::cheddar::Constant<Word>;
using Complex = ::cheddar::Complex;
using Evk = ::cheddar::EvaluationKey<Word>;
using EvkMap = ::cheddar::EvkMap<Word>;
using BootContext = ::cheddar::BootContext<Word>;
using BootContextPtr = std::shared_ptr<BootContext>;
using BootParameter = ::cheddar::BootParameter;
#ifndef RTLIB_CHEDDAR_STANDARD_ONLY
using EvalModMode = ::cheddar::EvalModMode;
#endif
using EvkRequest = ::cheddar::EvkRequest;

#ifndef RTLIB_CHEDDAR_STANDARD_ONLY
const char* Evalmod_mode_name(EvalModMode mode) {
  switch (mode) {
    case EvalModMode::kLegacy:
      return "legacy";
    case EvalModMode::kLattigoArcSine:
      return "arcsine";
    case EvalModMode::kRbootArcSine:
      return "rboot_arcsine";
  }
  return "legacy";
}

EvalModMode Evalmod_mode_from_desc(CHEDDAR_EVALMOD_MODE mode) {
  switch (mode) {
    case CHEDDAR_EVALMOD_LEGACY:
      return EvalModMode::kLegacy;
    case CHEDDAR_EVALMOD_ARCSINE:
      return EvalModMode::kLattigoArcSine;
    case CHEDDAR_EVALMOD_RBOOT_ARCSINE:
      return EvalModMode::kRbootArcSine;
  }
  return EvalModMode::kLegacy;
}

#endif

struct GpuFusionRuntimeStats {
  uint64_t mul_plain_add_fused = 0;
  uint64_t mul_plain_add_fallback = 0;
  uint64_t rotate_add_fused = 0;
  uint64_t rotate_add_fallback = 0;
  uint64_t rotate_mul_plain_add_fused = 0;
  uint64_t rotate_mul_plain_add_fallback = 0;
  uint64_t rotate_many_fused = 0;
  uint64_t rotate_many_fallback = 0;

  bool Has_activity() const {
    return mul_plain_add_fused != 0 || mul_plain_add_fallback != 0 ||
           rotate_add_fused != 0 || rotate_add_fallback != 0 ||
           rotate_mul_plain_add_fused != 0 ||
           rotate_mul_plain_add_fallback != 0 || rotate_many_fused != 0 ||
           rotate_many_fallback != 0;
  }
};

class CHEDDAR_CONTEXT {
public:
  static CHEDDAR_CONTEXT* Instance_ptr() {
    IS_TRUE(Instance != nullptr, "instance not initialized");
    return Instance;
  }

  static void Init_context() {
    IS_TRUE(Instance == nullptr, "instance already initialized");
    Instance = new CHEDDAR_CONTEXT();
  }

  static void Fini_context() {
    IS_TRUE(Instance != nullptr, "instance not initialized");
    delete Instance;
    Instance = nullptr;
  }

  void Prepare_input(TENSOR* input, const char* name) {
    size_t len = TENSOR_SIZE(input);
    PlainInner plain;
    Encode_real_values(plain, input->_vals, len, 1, input_logical_level_);

    Ciphertext* ct = new Ciphertext();
    Encrypt_plain(ct, plain);
    delete static_cast<Ciphertext*>(Io_replace_input(name, 0, ct));
  }

  void Set_output_data(const char* name, size_t idx, Ciphertext* ct) {
    Ciphertext* out = new Ciphertext(*ct);
    delete static_cast<Ciphertext*>(Io_replace_output(name, idx, out));
  }

  Ciphertext Get_input_data(const char* name, size_t idx) {
    Ciphertext* data = static_cast<Ciphertext*>(Io_get_input(name, idx));
    FMT_ASSERT(data != nullptr, "not find input %s[%zu]", name, idx);
    return *data;
  }

  double* Handle_output(const char* name, size_t idx) {
    Ciphertext* data = static_cast<Ciphertext*>(Io_get_output(name, idx));
    FMT_ASSERT(data != nullptr, "not find output %s[%zu]", name, idx);
    std::vector<double> vec;
    Decrypt(data, vec);
    return Copy_message(vec);
  }

  void Encode_float(Plaintext* pt, float* input, size_t len, SCALE_T sc_degree,
                    LEVEL_T level) const {
    Encode_real_values(pt->inner, input, len, sc_degree, level);
  }

  void Encode_double(Plaintext* pt, double* input, size_t len,
                     SCALE_T sc_degree, LEVEL_T level) const {
    Encode_real_values(pt->inner, input, len, sc_degree, level);
  }

  void Encode_float_mask(Plaintext* pt, float input, size_t len,
                         SCALE_T sc_degree, LEVEL_T level) const {
    Encode_mask(pt->inner, static_cast<double>(input), len, sc_degree, level);
  }

  void Encode_double_mask(Plaintext* pt, double input, size_t len,
                          SCALE_T sc_degree, LEVEL_T level) const {
    Encode_mask(pt->inner, input, len, sc_degree, level);
  }

  void Encrypt_double(Ciphertext* res, double* input, size_t len,
                      SCALE_T sc_degree, LEVEL_T level) const {
    PlainInner plain;
    Encode_real_values(plain, input, len, sc_degree, level);
    Encrypt_plain(res, plain);
  }

#ifndef RTLIB_CHEDDAR_STANDARD_ONLY
  static void Apply_clear_relu(std::vector<double>& vec, size_t len) {
    size_t active = std::min(len, vec.size());
    for (size_t idx = 0; idx < active; ++idx) {
      vec[idx] = std::max(vec[idx], 0.0);
    }
  }

  static bool Enable_bwr_clear_debug() {
    const char* flag = std::getenv("ACE_DEBUG_BWR_CLEAR");
    return flag != nullptr && flag[0] != '\0' && std::strcmp(flag, "0") != 0;
  }

  static void Dump_bwr_clear_debug(const char* stage, size_t call_index,
                                   const std::vector<double>& vec,
                                   size_t len) {
    size_t dump_len = std::min<size_t>(8, std::min(len, vec.size()));
    std::cout << "[DEBUG][BWR_CLEAR][" << call_index << "] " << stage << ": [";
    for (size_t idx = 0; idx < dump_len; ++idx) {
      if (idx != 0) {
        std::cout << ", ";
      }
      std::cout << vec[idx];
    }
    std::cout << "]" << std::endl;
  }

  void App_relu(Ciphertext* res, const Ciphertext* op, size_t len,
                LEVEL_T consumed_levels) {
    LEVEL_T input_level = Level_hint(op);
    FMT_ASSERT(
        consumed_levels < input_level,
        "CHEDDAR App_relu requires input level %llu > consumed_levels %llu",
        static_cast<unsigned long long>(input_level),
        static_cast<unsigned long long>(consumed_levels));

    std::vector<double> vec;
    Decrypt(op, vec);
    size_t active = std::min(len, vec.size());
    Apply_clear_relu(vec, active);

    Ciphertext relu_ct;
    Encrypt_double(&relu_ct, vec.data(), active, 1, input_level);
    if (consumed_levels == 0) {
      Copy(&relu_ct, res);
      return;
    }
    Level_down(res, &relu_ct, static_cast<int>(input_level - consumed_levels));
  }

#endif

  void Add(Ciphertext* res, const Ciphertext* op1, const Ciphertext* op2) {
    if (Is_zero(op1) && Is_zero(op2)) {
      Mark_zero_like(res, op1);
      return;
    }
    if (Is_zero(op1)) {
      Copy(op2, res);
      return;
    }
    if (Is_zero(op2)) {
      Copy(op1, res);
      return;
    }

    Ciphertext lhs(*op1);
    Ciphertext rhs(*op2);
    Align_cipher_levels(&lhs, &rhs);
    Check_binary_compatibility("Add_ciph", lhs, rhs);
    context_->Add(res->inner, lhs.inner, rhs.inner);
    res->is_zero = false;
  }

  void Sub(Ciphertext* res, const Ciphertext* op1, const Ciphertext* op2) {
    if (Is_zero(op1) && Is_zero(op2)) {
      Mark_zero_like(res, op1);
      return;
    }
    if (Is_zero(op2)) {
      Copy(op1, res);
      return;
    }
    if (Is_zero(op1)) {
      Ciphertext rhs(*op2);
      context_->Neg(res->inner, rhs.inner);
      res->is_zero = false;
      return;
    }

    Ciphertext lhs(*op1);
    Ciphertext rhs(*op2);
    Align_cipher_levels(&lhs, &rhs);
    Check_binary_compatibility("Sub_ciph", lhs, rhs);
    context_->Sub(res->inner, lhs.inner, rhs.inner);
    res->is_zero = false;
  }

  void Add(Ciphertext* res, const Ciphertext* op1, const Plaintext* op2) {
    if (Is_zero(op1)) {
      Ciphertext zero_ct;
      Ensure_materialized_zero(&zero_ct, Logical_level(*op2),
                               op2->inner.GetScale(), Slots_hint(op2));
      context_->Add(res->inner, zero_ct.inner, op2->inner);
      res->is_zero = false;
      return;
    }

    Ciphertext lhs(*op1);
    Check_binary_compatibility("Add_plain", lhs, *op2);
    context_->Add(res->inner, lhs.inner, op2->inner);
    res->is_zero = false;
  }

  void Sub(Ciphertext* res, const Ciphertext* op1, const Plaintext* op2) {
    if (Is_zero(op1)) {
      Ciphertext zero_ct;
      Ensure_materialized_zero(&zero_ct, Logical_level(*op2),
                               op2->inner.GetScale(), Slots_hint(op2));
      context_->Sub(res->inner, zero_ct.inner, op2->inner);
      res->is_zero = false;
      return;
    }

    Ciphertext lhs(*op1);
    Check_binary_compatibility("Sub_plain", lhs, *op2);
    context_->Sub(res->inner, lhs.inner, op2->inner);
    res->is_zero = false;
  }

  void Add(Ciphertext* res, const Ciphertext* op1, double op2) {
    Ciphertext lhs;
    if (Is_zero(op1)) {
      Ensure_materialized_zero(&lhs, Level_hint(op1), Scale_hint(op1),
                               Slots_hint(op1));
    } else {
      lhs = *op1;
    }
    Add_scalar_inplace(&lhs, op2);
    *res = std::move(lhs);
  }

  void Sub(Ciphertext* res, const Ciphertext* op1, double op2) {
    Ciphertext lhs;
    if (Is_zero(op1)) {
      Ensure_materialized_zero(&lhs, Level_hint(op1), Scale_hint(op1),
                               Slots_hint(op1));
    } else {
      lhs = *op1;
    }
    Sub_scalar_inplace(&lhs, op2);
    *res = std::move(lhs);
  }

  void Mul(Ciphertext* res, const Ciphertext* op1, const Ciphertext* op2) {
    if (Is_zero(op1) || Is_zero(op2)) {
      Mark_zero_like(res, Is_zero(op1) ? op1 : op2);
      return;
    }

    Ciphertext lhs(*op1);
    Ciphertext rhs(*op2);
    Align_cipher_levels(&lhs, &rhs);
    context_->Mult(res->inner, lhs.inner, rhs.inner);
    res->is_zero = false;
  }

  void Mul(Ciphertext* res, const Ciphertext* op1, const Plaintext* op2) {
    if (Is_zero(op1)) {
      Mark_zero_like(res, op1);
      return;
    }

    Ciphertext lhs(*op1);
    context_->Mult(res->inner, lhs.inner, op2->inner);
    res->is_zero = false;
  }

  void Mul(Ciphertext* res, const Ciphertext* op1, double op2) {
    if (Is_zero(op1) || op2 == 0.0) {
      Mark_zero_like(res, op1);
      return;
    }

    Constant scalar;
    Encode_scalar_constant(scalar, op2, op1->inner.GetScale(),
                           Logical_level(*op1));
    Ciphertext lhs(*op1);
    context_->Mult(res->inner, lhs.inner, scalar);
    res->is_zero = false;
  }

  void Rotate(Ciphertext* res, const Ciphertext* op1, int step) {
    if (Is_zero(op1)) {
      Mark_zero_like(res, op1);
      return;
    }
    int num_slots = Slots_hint(op1);
    int normalized_step = Normalize_rotation_step(step, num_slots);
    if (normalized_step == 0) {
      Copy(op1, res);
      return;
    }
    if (!pow2_rotation_keys_) {
      Ensure_rotation_key(normalized_step, op1);
      const auto& key = ui_->GetRotationKey(normalized_step);
      context_->HRot(res->inner, op1->inner, key, normalized_step);
      res->is_zero = false;
      return;
    }

    const Evk* exact_key = nullptr;
    if (Try_get_exact_rotation_key(op1, normalized_step, &exact_key)) {
      context_->HRot(res->inner, op1->inner, *exact_key, normalized_step);
      res->is_zero = false;
      return;
    }

    Ciphertext current(*op1);
    int remaining = normalized_step;
    if (remaining > num_slots / 2) {
      remaining -= num_slots;
    }
    while (remaining != 0) {
      int magnitude = std::abs(remaining);
      int lower_power = 1;
      while (lower_power <= magnitude / 2) {
        lower_power <<= 1;
      }
      int upper_power = lower_power << 1;
      int power = lower_power;
      if (upper_power < num_slots &&
          upper_power - magnitude < magnitude - lower_power) {
        power = upper_power;
      }
      int signed_rot = remaining > 0 ? power : -power;
      int rot = Normalize_rotation_step(signed_rot, num_slots);
      Ensure_rotation_key(rot, &current);
      Ciphertext tmp;
      const auto& key = ui_->GetRotationKey(rot);
      context_->HRot(tmp.inner, current.inner, key, rot);
      tmp.is_zero = false;
      current = std::move(tmp);
      remaining -= signed_rot;
    }

    *res = std::move(current);
    res->is_zero = false;
  }

  void Conjugate(Ciphertext* res, const Ciphertext* op1) {
    if (Is_zero(op1)) {
      Mark_zero_like(res, op1);
      return;
    }
    context_->HConj(res->inner, op1->inner, ui_->GetConjugationKey());
    res->is_zero = false;
  }

  void Rescale(Ciphertext* res, const Ciphertext* op1) {
    if (Is_zero(op1)) {
      *res = *op1;
      if (res->zero_level > 1) {
        res->is_zero = true;
        res->zero_level -= 1;
      }
      return;
    }

    Ciphertext src(*op1);
    SCALE_T in_degree =
        Scale_degree_from_value(src.inner.GetScale(), Logical_level(src));
    if (src.inner.HasRx()) {
      context_->RelinearizeRescale(res->inner, src.inner,
                                   ui_->GetMultiplicationKey());
    } else {
      context_->Rescale(res->inner, src.inner);
    }
    // Snap back to ACE's discrete scale convention after Cheddar's exact
    // rescale so compiler-emitted plaintext scales still line up.
    if (in_degree > 0) {
      res->inner.SetScale(
          Scale_from_degree(in_degree - 1, Logical_level(*res)));
    }
    res->is_zero = false;
  }

  void Mod_switch(Ciphertext* res, const Ciphertext* op1) {
    if (Is_zero(op1)) {
      LEVEL_T old_level = Level_hint(op1);
      SCALE_T degree = Scale_degree_from_value(Scale_hint(op1), old_level);
      *res = *op1;
      if (old_level > 1) {
        LEVEL_T new_level = old_level - 1;
        res->is_zero = true;
        res->zero_level = new_level;
        res->zero_scale = Scale_from_degree(degree, new_level);
      }
      return;
    }

    int logical_level = Logical_level(*op1);
    FMT_ASSERT(logical_level > 1, "Not enough primes for mod switch");
    double old_scale = op1->inner.GetScale();
    SCALE_T in_degree = Scale_degree_from_value(old_scale, logical_level);
    double target_scale = Scale_from_degree(in_degree, logical_level - 1);
    double dropped_scale =
        param_->GetRescalePrimeProd(Map_logical_level(logical_level));
    double bridge_scale = (old_scale == 0.0)
                              ? 0.0
                              : (target_scale * dropped_scale / old_scale);
    FMT_ASSERT(bridge_scale > 0.0,
               "Invalid CHEDDAR mod switch bridge scale %.17g "
               "(target=%.17g, dropped=%.17g, old=%.17g, level=%d)",
               bridge_scale, target_scale, dropped_scale, old_scale,
               logical_level);

    Constant bridge;
    context_->encoder_.EncodeConstant(bridge, Map_logical_level(logical_level),
                                      bridge_scale, 1.0);

    CipherInner temp;
    context_->Mult(temp, op1->inner, bridge);
    context_->Rescale(res->inner, temp);
    res->inner.SetScale(target_scale);
    res->is_zero = false;
  }

  void Level_down(Ciphertext* res, const Ciphertext* op1, int target_level) {
    if (Is_zero(op1)) {
      LEVEL_T old_level = Level_hint(op1);
      FMT_ASSERT(target_level >= 1 && target_level <= old_level,
                 "invalid target level %d for zero ciphertext at level %d",
                 target_level, old_level);
      SCALE_T degree = Scale_degree_from_value(Scale_hint(op1), old_level);
      *res = Ciphertext();
      res->is_zero = true;
      res->zero_level = target_level;
      res->zero_scale = Scale_from_degree(degree, target_level);
      res->zero_slots = Slots_hint(op1);
      return;
    }

    int logical_level = Logical_level(*op1);
    FMT_ASSERT(target_level >= 1 && target_level <= logical_level,
               "invalid target level %d for ciphertext at level %d",
               target_level, logical_level);
    Ciphertext current(*op1);
    while (Logical_level(current) > target_level) {
      Ciphertext dropped;
      Mod_switch(&dropped, &current);
      current = std::move(dropped);
    }
    *res = std::move(current);
    res->is_zero = false;
  }

  void Relin(Ciphertext* res, const Ciphertext* op1) {
    if (Is_zero(op1)) {
      Mark_zero_like(res, op1);
      return;
    }
    if (!op1->inner.HasRx()) {
      Copy(op1, res);
      return;
    }

    context_->Relinearize(res->inner, op1->inner,
                          ui_->GetMultiplicationKey());
    res->is_zero = false;
  }

  void Bootstrap(Ciphertext* res, const Ciphertext* op1, int level, int slot) {
    Run_bootstrap(res, op1, level, slot, false);
  }

#ifndef RTLIB_CHEDDAR_STANDARD_ONLY
  void Bootstrap_with_relu(Ciphertext* res, const Ciphertext* op1, int level,
                         int slot, double relu_value_range) {
    int requested_slots = slot;
    if (requested_slots <= 0 || requested_slots >= full_slots_) {
      requested_slots = full_slots_;
    }
    bool sparse_slots = requested_slots < full_slots_;
    if (sparse_slots && ((requested_slots & (requested_slots - 1)) != 0)) {
      requested_slots = full_slots_;
      sparse_slots = false;
    }
    bool needs_range_scale = relu_value_range > 1.0;
    bool needs_input_mask = sparse_slots || needs_range_scale;
    bool needs_output_mask = (requested_slots < full_slots_) ||
                             needs_range_scale;

    Ciphertext normalized;
    const Ciphertext* boot_input = op1;
    int boot_level = level;
    if (needs_output_mask) {
      boot_level += 1;
    }

    if (!sparse_slots && needs_range_scale) {
      Ciphertext scaled;
      Mul(&scaled, op1, 1.0 / relu_value_range);
      Rescale(&normalized, &scaled);
      boot_input = &normalized;
    } else if (needs_input_mask) {
      double pre_mask_value =
          needs_range_scale ? (1.0 / relu_value_range) : 1.0;
      Plaintext pre_mask;
      Encode_double_mask(&pre_mask, pre_mask_value,
                         static_cast<size_t>(requested_slots),
                         1, Level_hint(op1));
      Ciphertext masked_input;
      Mul(&masked_input, op1, &pre_mask);
      Rescale(&normalized, &masked_input);
      boot_input = &normalized;
    }

    Ciphertext cyclic_input;
    if (sparse_slots) {
      cyclic_input = *boot_input;
      Ciphertext rotated_input = *boot_input;
      for (int offset = requested_slots; offset < full_slots_;
           offset += requested_slots) {
        Ciphertext next_rotated;
        Rotate(&next_rotated, &rotated_input, requested_slots);
        rotated_input = std::move(next_rotated);

        Ciphertext accumulated;
        Add(&accumulated, &cyclic_input, &rotated_input);
        cyclic_input = std::move(accumulated);
      }
      boot_input = &cyclic_input;
    }

    Run_bootstrap(res, boot_input, boot_level,
                  sparse_slots ? requested_slots : 0, true);

    if (needs_output_mask) {
      double range_restore = needs_range_scale ? relu_value_range : 1.0;
      double mask_value = range_restore;
      Plaintext slot_mask;
      Encode_double_mask(&slot_mask, mask_value,
                         static_cast<size_t>(requested_slots),
                         1, Level_hint(res));
      Ciphertext masked;
      Mul(&masked, res, &slot_mask);
      Rescale(&masked, &masked);
      *res = std::move(masked);
    }
  }

  void Rotate_add_reduce(Ciphertext* res, const Ciphertext* op,
                         uint32_t step_count, uint32_t rotate_self,
                         const int* steps) {
    if (Is_zero(op)) {
      Mark_zero_like(res, op);
      return;
    }

    Ciphertext accum(*op);
    for (uint32_t idx = 0; idx < step_count; ++idx) {
      const Ciphertext* rot_input = rotate_self != 0 ? &accum : op;
      int normalized_step =
          Normalize_rotation_step(steps[idx], Slots_hint(rot_input));

      Ciphertext next;
      if (normalized_step == 0) {
        Add(&next, &accum, rot_input);
      } else {
        const Evk* rot_key = nullptr;
        if (Try_get_exact_rotation_key(rot_input, normalized_step, &rot_key)) {
          context_->HRotAdd(next.inner, rot_input->inner, accum.inner, *rot_key,
                            normalized_step);
          next.is_zero = false;
        } else {
          Ciphertext rotated;
          Rotate(&rotated, rot_input, steps[idx]);
          Add(&next, &accum, &rotated);
        }
      }
      accum = std::move(next);
    }

    *res = std::move(accum);
    res->is_zero = false;
  }

  void Rotate_mul_sum(Ciphertext* res, const Ciphertext* op,
                      uint32_t term_count, uint32_t post_rescale,
                      PLAIN const* plains, const int* steps) {
    if (term_count == 0) {
      Zero(res);
      if (post_rescale != 0) {
        Rescale(res, res);
      }
      return;
    }
    if (Is_zero(op)) {
      Mark_zero_like(res, op);
      if (post_rescale != 0) {
        Rescale(res, res);
      }
      return;
    }

    std::vector<int> normalized_steps(term_count, 0);
    bool             can_use_many =
        !op->inner.HasRx() && op->inner.GetNP().num_aux_ == 0;

    for (uint32_t idx = 0; idx < term_count; ++idx) {
      const Plaintext* plain = plains[idx];
      normalized_steps[idx] =
          Normalize_rotation_step(steps[idx], std::max(Slots_hint(op),
                                                       Slots_hint(plain)));
      if (normalized_steps[idx] != 0) {
        const Evk* rot_key = nullptr;
        if (!Try_get_exact_rotation_key(op, normalized_steps[idx], &rot_key)) {
          can_use_many = false;
        }
      }
    }

    Ciphertext accum;
    const Plaintext* first_plain = plains[0];
    const int        first_step = normalized_steps[0];
    if (first_step == 0) {
      context_->Mult(accum.inner, op->inner, first_plain->inner);
      accum.is_zero = false;
    } else {
      const Evk* rot_key = nullptr;
      if (Try_get_exact_rotation_key(op, first_step, &rot_key)) {
        Ciphertext rotated;
        context_->HRot(rotated.inner, op->inner, *rot_key, first_step);
        rotated.is_zero = false;
        context_->Mult(accum.inner, rotated.inner, first_plain->inner);
        accum.is_zero = false;
      } else {
        Ciphertext rotated;
        Rotate(&rotated, op, steps[0]);
        context_->Mult(accum.inner, rotated.inner, first_plain->inner);
        accum.is_zero = false;
      }
    }

    if (can_use_many && term_count > 1) {
      std::vector<PlainInner> plain_inners(term_count - 1);
      std::vector<int>        rest_steps;
      rest_steps.reserve(term_count - 1);
      for (uint32_t idx = 1; idx < term_count; ++idx) {
        fhe::rt::cheddar::Copy_plain_inner(plain_inners[idx - 1],
                                           plains[idx]->inner);
        rest_steps.push_back(normalized_steps[idx]);
      }
      context_->HRotPMadManyUnsafe(accum.inner, op->inner, plain_inners,
                                   ui_->GetEvkMap(), rest_steps);
      accum.is_zero = false;
    } else {
      for (uint32_t idx = 1; idx < term_count; ++idx) {
        const Plaintext* plain = plains[idx];
        Ciphertext       next;
        const int        normalized_step = normalized_steps[idx];
        if (normalized_step == 0) {
          context_->MultPlainAdd(next.inner, op->inner, plain->inner,
                                 accum.inner);
          next.is_zero = false;
        } else {
          const Evk* rot_key = nullptr;
          if (Try_get_exact_rotation_key(op, normalized_step, &rot_key)) {
            context_->HRotMultPlainAdd(next.inner, op->inner, plain->inner,
                                       accum.inner, *rot_key,
                                       normalized_step);
            next.is_zero = false;
          } else {
            Ciphertext rotated;
            Rotate(&rotated, op, steps[idx]);
            context_->MultPlainAdd(next.inner, rotated.inner, plain->inner,
                                   accum.inner);
            next.is_zero = false;
          }
        }
        accum = std::move(next);
      }
    }

    if (post_rescale != 0) {
      Rescale(res, &accum);
    } else {
      *res = std::move(accum);
      res->is_zero = false;
    }
  }

  template <typename LoadPlainFn>
  void Block_rotate_mul_sum_loaded(Ciphertext* res, const Ciphertext* op,
                                   uint32_t block_count, uint32_t grid_count,
                                   int grid_shift, uint32_t post_rescale,
                                   const int* bank_steps,
                                   LoadPlainFn load_plain) {
    constexpr uint32_t kMaxDirectPAccumTerms = 8;

    if (block_count == 0 || grid_count == 0) {
      Zero(res);
      if (post_rescale != 0) {
        Rescale(res, res);
      }
      return;
    }
    if (Is_zero(op)) {
      Mark_zero_like(res, op);
      if (post_rescale != 0) {
        Rescale(res, res);
      }
      return;
    }

    std::vector<Ciphertext> bank(block_count);
    for (uint32_t block = 0; block < block_count; ++block) {
      int normalized_step =
          Normalize_rotation_step(bank_steps[block], Slots_hint(op));
      if (normalized_step == 0) {
        Copy(op, &bank[block]);
        continue;
      }

      const Evk* rot_key = nullptr;
      if (Try_get_exact_rotation_key(op, normalized_step, &rot_key)) {
        context_->HRot(bank[block].inner, op->inner, *rot_key,
                       normalized_step);
        bank[block].is_zero = false;
      } else {
        Rotate(&bank[block], op, bank_steps[block]);
      }
    }

    std::vector<std::vector<::cheddar::DvConstView<Word>>> bank_views;
    bank_views.reserve(block_count);
    for (uint32_t block = 0; block < block_count; ++block) {
      bank_views.push_back(bank[block].inner.ConstViewVector(0, true));
    }

    std::vector<Plaintext>         grid_plains(block_count);
    std::vector<::cheddar::DvConstView<Word>> pt_views;
    pt_views.reserve(block_count);

    Ciphertext accum;
    bool       accum_init = false;
    for (uint32_t grid = 0; grid < grid_count; ++grid) {
      pt_views.clear();
      int    grid_slots = Slots_hint(op);
      double grid_scale = 0.0;
      for (uint32_t block = 0; block < block_count; ++block) {
        load_plain(grid, block, &grid_plains[block]);
        pt_views.push_back(grid_plains[block].inner.ConstView());
        grid_slots = std::max(grid_slots, Slots_hint(&grid_plains[block]));
        if (block == 0) {
          grid_scale =
              bank[block].inner.GetScale() * grid_plains[block].inner.GetScale();
        }
      }

      Ciphertext grid_acc;
      bool       grid_acc_init = false;
      for (uint32_t block_base = 0; block_base < block_count;
           block_base += kMaxDirectPAccumTerms) {
        uint32_t chunk_terms =
            std::min<uint32_t>(kMaxDirectPAccumTerms, block_count - block_base);
        std::vector<std::vector<::cheddar::DvConstView<Word>>> chunk_bank_views(
            bank_views.begin() + block_base,
            bank_views.begin() + block_base + chunk_terms);
        std::vector<::cheddar::DvConstView<Word>> chunk_pt_views(
            pt_views.begin() + block_base,
            pt_views.begin() + block_base + chunk_terms);

        if (!grid_acc_init) {
          grid_acc.inner.RemoveRx();
          grid_acc.inner.ModifyNP(bank[0].inner.GetNP());
          grid_acc.inner.SetScale(grid_scale);
          grid_acc.inner.SetNumSlots(grid_slots);
          auto grid_acc_view = grid_acc.inner.ViewVector(0, true);
          context_->elem_handler_.PAccum(grid_acc_view, bank[0].inner.GetNP(),
                                         chunk_bank_views, chunk_pt_views);
          grid_acc.is_zero = false;
          grid_acc_init = true;
          continue;
        }

        Ciphertext next_grid_acc;
        next_grid_acc.inner.RemoveRx();
        next_grid_acc.inner.ModifyNP(bank[0].inner.GetNP());
        next_grid_acc.inner.SetScale(grid_scale);
        next_grid_acc.inner.SetNumSlots(grid_slots);
        chunk_bank_views.push_back(grid_acc.inner.ConstViewVector(0, true));
        auto next_grid_acc_view = next_grid_acc.inner.ViewVector(0, true);
        context_->elem_handler_.PAccum(next_grid_acc_view,
                                       bank[0].inner.GetNP(), chunk_bank_views,
                                       chunk_pt_views);
        next_grid_acc.is_zero = false;
        grid_acc = std::move(next_grid_acc);
      }
      FMT_ASSERT(grid_acc_init,
                 "CHEDDAR block rotate mul sum expected non-empty block "
                 "accumulation");

      int raw_grid_step = static_cast<int>(grid) * grid_shift;
      int normalized_grid_step =
          Normalize_rotation_step(raw_grid_step, Slots_hint(&grid_acc));
      if (!accum_init) {
        if (normalized_grid_step == 0) {
          accum = std::move(grid_acc);
        } else {
          const Evk* rot_key = nullptr;
          if (Try_get_exact_rotation_key(&grid_acc, normalized_grid_step,
                                         &rot_key)) {
            context_->HRot(accum.inner, grid_acc.inner, *rot_key,
                           normalized_grid_step);
            accum.is_zero = false;
          } else {
            Rotate(&accum, &grid_acc, raw_grid_step);
          }
        }
        accum_init = true;
        continue;
      }

      Ciphertext next;
      if (normalized_grid_step == 0) {
        Add(&next, &accum, &grid_acc);
      } else {
        const Evk* rot_key = nullptr;
        if (Try_get_exact_rotation_key(&grid_acc, normalized_grid_step,
                                       &rot_key)) {
          context_->HRotAdd(next.inner, grid_acc.inner, accum.inner, *rot_key,
                            normalized_grid_step);
          next.is_zero = false;
        } else {
          Ciphertext rotated;
          Rotate(&rotated, &grid_acc, raw_grid_step);
          Add(&next, &accum, &rotated);
        }
      }
      accum = std::move(next);
    }

    FMT_ASSERT(accum_init,
               "CHEDDAR block rotate mul sum expected non-empty accumulation");

    if (post_rescale != 0) {
      Rescale(res, &accum);
    } else {
      *res = std::move(accum);
      res->is_zero = false;
    }
  }

  void Rotate_many_fallback(Ciphertext* res, const Ciphertext* op,
                            uint32_t step_count, const int* steps) {
    for (uint32_t idx = 0; idx < step_count; ++idx) {
      if (Is_zero(op)) {
        Mark_zero_like(res + idx, op);
        continue;
      }

      int normalized_step =
          Normalize_rotation_step(steps[idx], Slots_hint(op));
      if (normalized_step == 0) {
        Copy(op, res + idx);
        continue;
      }

      const Evk* rot_key = nullptr;
      if (Try_get_exact_rotation_key(op, normalized_step, &rot_key)) {
        context_->HRot((res + idx)->inner, op->inner, *rot_key,
                       normalized_step);
        (res + idx)->is_zero = false;
      } else {
        Rotate(res + idx, op, steps[idx]);
      }
    }
  }

  void Blocking_rotate(Ciphertext* res, const Ciphertext* op,
                       uint32_t step_count, const int* steps) {
    Rotate_many_fallback(res, op, step_count, steps);
  }

  void Rotate_many(Ciphertext* res, const Ciphertext* op, uint32_t step_count,
                   const int* steps) {
    FMT_ASSERT(step_count == 0 || steps != nullptr,
               "RotateMany_ciph requires non-null steps");
    if (step_count == 0) {
      return;
    }

    auto fallback = [&]() {
      Rotate_many_fallback(res, op, step_count, steps);
      gpu_fusion_stats_.rotate_many_fallback += step_count;
    };

    if (Is_zero(op) || op->inner.HasRx() || op->inner.GetNP().num_aux_ != 0) {
      fallback();
      return;
    }

    std::vector<int>          normalized_steps;
    std::vector<CipherInner*> out_inners;
    normalized_steps.reserve(step_count);
    out_inners.reserve(step_count);

    uint64_t zero_rotations    = 0;
    uint64_t nonzero_rotations = 0;
    int      num_slots         = Slots_hint(op);
    for (uint32_t idx = 0; idx < step_count; ++idx) {
      if (res + idx == op) {
        fallback();
        return;
      }

      int normalized_step = Normalize_rotation_step(steps[idx], num_slots);
      normalized_steps.push_back(normalized_step);
      out_inners.push_back(&(res + idx)->inner);

      if (normalized_step == 0) {
        ++zero_rotations;
        continue;
      }

      const Evk* rot_key = nullptr;
      if (!Try_get_exact_rotation_key(op, normalized_step, &rot_key)) {
        fallback();
        return;
      }
      ++nonzero_rotations;
    }

    if (nonzero_rotations == 0) {
      Rotate_many_fallback(res, op, step_count, steps);
      gpu_fusion_stats_.rotate_many_fallback += zero_rotations;
      return;
    }

    context_->HRotMany(out_inners, op->inner, normalized_steps,
                       ui_->GetEvkMap());
    for (uint32_t idx = 0; idx < step_count; ++idx) {
      (res + idx)->is_zero = false;
    }
    gpu_fusion_stats_.rotate_many_fused += nonzero_rotations;
    gpu_fusion_stats_.rotate_many_fallback += zero_rotations;
  }

  void Block_rotate_mul_sum(Ciphertext* res, const Ciphertext* op,
                            uint32_t block_count, uint32_t grid_count,
                            int grid_shift, uint32_t post_rescale,
                            PLAIN const* plains, const int* bank_steps) {
    Block_rotate_mul_sum_loaded(
        res, op, block_count, grid_count, grid_shift, post_rescale, bank_steps,
        [&](uint32_t grid, uint32_t block, Plaintext* plain) {
          *plain = *plains[static_cast<size_t>(grid) * block_count + block];
        });
  }

  void Block_rotate_mul_sum_float(Ciphertext* res, const Ciphertext* op,
                                  uint32_t block_count, uint32_t grid_count,
                                  int grid_shift, uint32_t post_rescale,
                                  const float* plain_data, size_t plain_len,
                                  SCALE_T scale, LEVEL_T level,
                                  const int* bank_steps) {
    Block_rotate_mul_sum_loaded(
        res, op, block_count, grid_count, grid_shift, post_rescale, bank_steps,
        [&](uint32_t grid, uint32_t block, Plaintext* plain) {
          uint64_t row = static_cast<uint64_t>(grid) * block_count + block;
          Encode_float(plain, const_cast<float*>(plain_data + row * plain_len),
                       plain_len, scale, level);
        });
  }

  void Block_rotate_mul_sum_msg(Ciphertext* res, const Ciphertext* op,
                                uint32_t block_count, uint32_t grid_count,
                                int grid_shift, uint32_t post_rescale,
                                uint64_t plain_base, size_t plain_len,
                                SCALE_T scale, LEVEL_T level,
                                const int* bank_steps) {
    Block_rotate_mul_sum_loaded(
        res, op, block_count, grid_count, grid_shift, post_rescale, bank_steps,
        [&](uint32_t grid, uint32_t block, Plaintext* plain) {
          uint64_t row = plain_base +
                         static_cast<uint64_t>(grid) * block_count + block;
          Pt_from_msg(plain, static_cast<uint32_t>(row), plain_len, scale,
                      level);
        });
  }

  bool Can_mul_plain_add_fused(const Ciphertext* acc, const Ciphertext* op,
                               const Plaintext* plain) const {
    return !Is_zero(acc) && !Is_zero(op) &&
           op->inner.GetNP() == plain->inner.GetNP() &&
           plain->inner.GetNP() == acc->inner.GetNP() &&
           Same_scale(op->inner.GetScale() * plain->inner.GetScale(),
                      acc->inner.GetScale());
  }

  bool Can_rotate_add_fused(const Ciphertext* acc,
                            const Ciphertext* op) const {
    return !Is_zero(acc) && !Is_zero(op) &&
           op->inner.GetNP() == acc->inner.GetNP() &&
           Same_scale(op->inner.GetScale(), acc->inner.GetScale());
  }

  void Fallback_mul_plain_add(Ciphertext* acc, const Ciphertext* op,
                              const Plaintext* plain) {
    Ciphertext product;
    Mul(&product, op, plain);
    Add(acc, acc, &product);
  }

  void Mul_plain_add(Ciphertext* acc, const Ciphertext* op,
                     const Plaintext* plain) {
    if (Is_zero(op)) {
      ++gpu_fusion_stats_.mul_plain_add_fallback;
      return;
    }
    if (Is_zero(acc)) {
      Mul(acc, op, plain);
      ++gpu_fusion_stats_.mul_plain_add_fallback;
      return;
    }
    if (!Can_mul_plain_add_fused(acc, op, plain)) {
      Fallback_mul_plain_add(acc, op, plain);
      ++gpu_fusion_stats_.mul_plain_add_fallback;
      return;
    }

    Ciphertext next;
    context_->MultPlainAdd(next.inner, op->inner, plain->inner, acc->inner);
    next.is_zero = false;
    *acc = std::move(next);
    ++gpu_fusion_stats_.mul_plain_add_fused;
  }

  void Rotate_add(Ciphertext* acc, const Ciphertext* op, int step) {
    if (Is_zero(op)) {
      ++gpu_fusion_stats_.rotate_add_fallback;
      return;
    }
    if (Is_zero(acc)) {
      Rotate(acc, op, step);
      ++gpu_fusion_stats_.rotate_add_fallback;
      return;
    }

    int normalized_step = Normalize_rotation_step(step, Slots_hint(op));
    if (normalized_step == 0 || !Can_rotate_add_fused(acc, op)) {
      Ciphertext rotated;
      Rotate(&rotated, op, step);
      Add(acc, acc, &rotated);
      ++gpu_fusion_stats_.rotate_add_fallback;
      return;
    }

    const Evk* rot_key = nullptr;
    if (!Try_get_exact_rotation_key(op, normalized_step, &rot_key)) {
      Ciphertext rotated;
      Rotate(&rotated, op, step);
      Add(acc, acc, &rotated);
      ++gpu_fusion_stats_.rotate_add_fallback;
      return;
    }

    Ciphertext next;
    context_->HRotAdd(next.inner, op->inner, acc->inner, *rot_key,
                      normalized_step);
    next.is_zero = false;
    *acc = std::move(next);
    ++gpu_fusion_stats_.rotate_add_fused;
  }

  void Rotate_mul_plain_add(Ciphertext* acc, const Ciphertext* op, int step,
                            const Plaintext* plain) {
    if (Is_zero(op)) {
      ++gpu_fusion_stats_.rotate_mul_plain_add_fallback;
      return;
    }
    if (Is_zero(acc)) {
      Ciphertext rotated;
      Rotate(&rotated, op, step);
      Mul(acc, &rotated, plain);
      ++gpu_fusion_stats_.rotate_mul_plain_add_fallback;
      return;
    }

    int normalized_step = Normalize_rotation_step(
        step, std::max(Slots_hint(op), Slots_hint(plain)));
    if (!Can_mul_plain_add_fused(acc, op, plain)) {
      Ciphertext rotated;
      Rotate(&rotated, op, step);
      Fallback_mul_plain_add(acc, &rotated, plain);
      ++gpu_fusion_stats_.rotate_mul_plain_add_fallback;
      return;
    }
    if (normalized_step == 0) {
      Ciphertext next;
      context_->MultPlainAdd(next.inner, op->inner, plain->inner, acc->inner);
      next.is_zero = false;
      *acc = std::move(next);
      ++gpu_fusion_stats_.rotate_mul_plain_add_fused;
      return;
    }

    const Evk* rot_key = nullptr;
    if (!Try_get_exact_rotation_key(op, normalized_step, &rot_key)) {
      Ciphertext rotated;
      Rotate(&rotated, op, step);
      Fallback_mul_plain_add(acc, &rotated, plain);
      ++gpu_fusion_stats_.rotate_mul_plain_add_fallback;
      return;
    }

    Ciphertext next;
    context_->HRotMultPlainAdd(next.inner, op->inner, plain->inner, acc->inner,
                               *rot_key, normalized_step);
    next.is_zero = false;
    *acc = std::move(next);
    ++gpu_fusion_stats_.rotate_mul_plain_add_fused;
  }

#endif

  void Copy(const Ciphertext* op, Ciphertext* res) {
    if (Is_zero(op)) {
      Mark_zero_like(res, op);
      return;
    }
    *res = *op;
    res->is_zero = false;
  }

  void Zero(Ciphertext* res) {
    *res = Ciphertext();
    res->is_zero = true;
    res->zero_level = input_logical_level_;
    res->zero_scale = Scale_from_degree(1, input_logical_level_);
    res->zero_slots = full_slots_;
  }

  void Free_ciph(Ciphertext* ct) { *ct = Ciphertext(); }

  void Free_plain(Plaintext* pt) { *pt = Plaintext(); }

  SCALE_T Scale_degree(const Ciphertext* ct) const {
    return Scale_degree_from_value(Scale_hint(ct), Level_hint(ct));
  }

  double Scale_value(const Ciphertext* ct) const { return Scale_hint(ct); }

  LEVEL_T Level_value(const Ciphertext* ct) const {
    return static_cast<LEVEL_T>(Level_hint(ct));
  }

  void Print_gpu_fusion_runtime_stats() const {
    if (!gpu_fusion_stats_.Has_activity()) {
      return;
    }
    std::cout << "[CHEDDAR_GPU_FUSION_RUNTIME] MulPlainAdd fused="
              << gpu_fusion_stats_.mul_plain_add_fused
              << " fallback=" << gpu_fusion_stats_.mul_plain_add_fallback
              << std::endl;
    std::cout << "[CHEDDAR_GPU_FUSION_RUNTIME] RotateAdd fused="
              << gpu_fusion_stats_.rotate_add_fused
              << " fallback=" << gpu_fusion_stats_.rotate_add_fallback
              << std::endl;
    std::cout << "[CHEDDAR_GPU_FUSION_RUNTIME] RotateMulPlainAdd fused="
              << gpu_fusion_stats_.rotate_mul_plain_add_fused
              << " fallback="
              << gpu_fusion_stats_.rotate_mul_plain_add_fallback << std::endl;
    std::cout << "[CHEDDAR_GPU_FUSION_RUNTIME] RotateMany fused="
              << gpu_fusion_stats_.rotate_many_fused
              << " fallback=" << gpu_fusion_stats_.rotate_many_fallback
              << std::endl;
  }

  void Decrypt(const Ciphertext* ct, std::vector<double>& vec) const {
    if (Is_zero(ct)) {
      vec.assign(full_slots_, 0.0);
      return;
    }

    PlainInner plain;
    ui_->Decrypt(plain, ct->inner);
    Decode_plain(plain, vec);
  }

  void Decode(const Plaintext* pt, std::vector<double>& vec) const {
    Decode_plain(pt->inner, vec);
  }

private:
  CHEDDAR_CONTEXT() { Initialize(); }

  void Run_bootstrap(Ciphertext* res, const Ciphertext* op1, int level,
                     int slot, bool use_slim_boot) {
    FMT_ASSERT(boot_requested_ && boot_context_ != nullptr,
               "CHEDDAR bootstrap was invoked without bootstrap setup");

    int requested_slots = slot;
    if (requested_slots == 0) {
      requested_slots = full_slots_;
    }
    FMT_ASSERT(requested_slots > 0 && requested_slots <= full_slots_,
               "invalid CHEDDAR bootstrap slot count: %d", requested_slots);

#ifdef RTLIB_CHEDDAR_STANDARD_ONLY
    // ACE encodes a full vector with zero padding, rather than Cheddar's
    // periodic sparse encoding. Ordinary full-slot Boot preserves that layout.
    requested_slots = full_slots_;
#endif
    bool zero_input = Is_zero(op1);
    Ciphertext input;
    if (zero_input) {
      Ensure_materialized_zero(&input, Level_hint(op1), Scale_hint(op1),
                               requested_slots);
    } else {
      input = *op1;
      input.inner.SetNumSlots(requested_slots);
    }

    // while (Logical_level(input) > param_->default_encryption_level_) {
    //   Ciphertext dropped;
    //   Mod_switch(&dropped, &input);
    //   input = std::move(dropped);
    // }

    Ciphertext booted;
#ifdef RTLIB_CHEDDAR_STANDARD_ONLY
    FMT_ASSERT(!use_slim_boot, "standard backend requires ordinary Boot");
    boot_context_->Boot(booted.inner, input.inner, ui_->GetEvkMap());
#else
    if (use_slim_boot) {
      boot_context_->SlimBoot(booted.inner, input.inner, ui_->GetEvkMap());
    } else {
      boot_context_->Boot(booted.inner, input.inner, ui_->GetEvkMap());
    }
#endif
    booted.is_zero = false;

    if (level > 0) {
      int target_level = std::min<int>(level, max_logical_level_);
      FMT_ASSERT(Logical_level(booted) >= target_level,
                 "CHEDDAR bootstrap result level %d is lower than requested "
                 "level %d",
                 Logical_level(booted), target_level);
      while (Logical_level(booted) > target_level) {
        Ciphertext dropped;
        Mod_switch(&dropped, &booted);
        booted = std::move(dropped);
      }
    }

    *res = std::move(booted);
    if (zero_input) {
      res->is_zero = true;
      res->zero_level = Logical_level(*res);
      res->zero_scale = res->inner.GetScale();
      res->zero_slots = res->inner.GetNumSlots();
    } else {
      res->is_zero = false;
    }
  }

  void Initialize() {
    const CKKS_PARAMS* prog_param = Get_context_params();
    FMT_ASSERT(prog_param != nullptr, "missing CKKS params");
    FMT_ASSERT(prog_param->_provider == LIB_CHEDDAR,
               "provider is not CHEDDAR");
    FMT_ASSERT(prog_param->_poly_degree == 65536,
               "CHEDDAR backend currently requires poly degree 65536, got %u",
               prog_param->_poly_degree);

    max_logical_level_ = Required_logical_levels(prog_param);
    input_logical_level_ =
        prog_param->_input_level == 0
            ? max_logical_level_
            : std::min<int>(prog_param->_input_level, max_logical_level_);
    full_slots_ = static_cast<int>(prog_param->_poly_degree / 2);
    boot_requested_ = Need_bts();
    const CHEDDAR_BOOTSTRAP_LITERAL_DESC* desc =
        Get_cheddar_bootstrap_literal();
    FMT_ASSERT((desc != nullptr) == boot_requested_,
               "generated Cheddar bootstrap Literal presence must match "
               "Need_bts()");

    profile_scale_bits_ =
        static_cast<int>(prog_param->_scaling_mod_size);
    base_scale_ = std::pow(2.0, static_cast<double>(profile_scale_bits_));
    const char* evalmod_mode_name = "none";
    int num_cts_levels = 0;
    int num_stc_levels = 0;

    if (boot_requested_) {
      FMT_ASSERT(desc->_abi_version == 1,
                 "unsupported Cheddar Literal ABI version %u",
                 desc->_abi_version);
      FMT_ASSERT(desc->_struct_size >= sizeof(*desc),
                 "invalid Cheddar Literal struct size %u",
                 desc->_struct_size);
      FMT_ASSERT(desc->_word_bits == sizeof(Word) * 8,
                 "Cheddar Literal word size %u does not match runtime word "
                 "size %zu",
                 desc->_word_bits, sizeof(Word) * 8);

#ifdef RTLIB_CHEDDAR_STANDARD_ONLY
      FMT_ASSERT(desc->_eval_mod_mode == CHEDDAR_EVALMOD_LEGACY,
                 "standard backend requires legacy EvalMod");
      BootParameter budget(0, desc->_num_cts_levels, desc->_num_stc_levels,
                           desc->_log_message_ratio);
      FMT_ASSERT(desc->_num_evalmod_levels == budget.GetNumEvalModLevels(),
                 "compiler/runtime EvalMod level budget differs");
      int requested_dnum = prog_param->_num_q_parts == 0
                               ? 4 : prog_param->_num_q_parts;
      FMT_ASSERT(requested_dnum > 0, "Cheddar dnum must be positive");
      FMT_ASSERT(desc->_normal_level >= desc->_num_stc_levels,
                 "normal level must reserve the StC budget");
      // Preserve the former 64-bit P budget for both word widths. Cheddar's
      // unified resolver selects physical Q/P pools and the level mapping.
      int logical_q_count = desc->_normal_level + desc->_num_cts_levels +
                            desc->_num_evalmod_levels + 1;
      int reference_aux_count = 1;
      while ((logical_q_count + reference_aux_count - 1) /
                 reference_aux_count > requested_dnum) {
        ++reference_aux_count;
      }
      FMT_ASSERT((logical_q_count + reference_aux_count - 1) /
                         reference_aux_count == requested_dnum,
                 "cannot represent requested dnum with the Boot chain");
      ::cheddar::BootConfig config;
      config.ring_dimension = prog_param->_poly_degree;
      config.multiplicative_depth = desc->_normal_level - desc->_num_stc_levels;
      config.normal_scale_bits = profile_scale_bits_;
      config.first_modulus_bits = prog_param->_first_mod_size;
      config.boot_scale_bits = desc->_log_evalmod_scale;
      config.slot_count = full_slots_;
      config.auxiliary_modulus_bits = 60 * reference_aux_count;
      config.num_cts_levels = desc->_num_cts_levels;
      config.num_stc_levels = desc->_num_stc_levels;
      config.log_message_ratio = desc->_log_message_ratio;
      auto resolved = ::cheddar::ResolveBootConfig<Word>(config);
      resolved.parameters.dense_hamming_weight = prog_param->_hamming_weight;
      resolved.parameters.sparse_hamming_weight = desc->_sparse_hamming_weight;
      param_ = ::cheddar::NewParametersFromLiteral(resolved.parameters);
      FMT_ASSERT(param_->dnum_ == requested_dnum,
                 "Cheddar/ACE dnum differs");
      FMT_ASSERT(param_->max_level_ >= max_logical_level_,
                 "Cheddar Boot chain is shorter than compiler requirements");
      boot_context_ = BootContext::Create(*param_, resolved.boot);
      boot_context_->PrepareEvalMod();
      context_ = boot_context_;
      evalmod_mode_name = "legacy";
      num_cts_levels = config.num_cts_levels;
      num_stc_levels = config.num_stc_levels;
#else
      auto initialize_bootstrap = [&](auto literal) {
        literal.degree = static_cast<int>(prog_param->_poly_degree);
        literal.normal_level = static_cast<int>(desc->_normal_level);
        literal.num_cts_levels = static_cast<int>(desc->_num_cts_levels);
        literal.num_evalmod_levels =
            static_cast<int>(desc->_num_evalmod_levels);
        literal.num_stc_levels = static_cast<int>(desc->_num_stc_levels);
        literal.log_default_scale = profile_scale_bits_;
        literal.log_evalmod_scale =
            static_cast<int>(desc->_log_evalmod_scale);
        literal.log_message_ratio =
            static_cast<int>(desc->_log_message_ratio);
        literal.dnum = prog_param->_num_q_parts == 0
                           ? 4
                           : static_cast<int>(prog_param->_num_q_parts);
        literal.dense_hamming_weight =
            static_cast<int>(prog_param->_hamming_weight);
        literal.sparse_hamming_weight =
            static_cast<int>(desc->_sparse_hamming_weight);
        literal.evalmod_mode = Evalmod_mode_from_desc(desc->_eval_mod_mode);
        literal.key_switch_technique =
            ::cheddar::KeySwitchTechnique::HYBRID;

        auto planned = ::cheddar::NewBootstrapParametersFromLiteral(literal);
        FMT_ASSERT(planned.plan.requested_dnum == literal.dnum,
                   "Cheddar requested dnum %d does not match ACE dnum %d",
                   planned.plan.requested_dnum, literal.dnum);
        FMT_ASSERT(planned.plan.actual_dnum == literal.dnum,
                   "Cheddar actual dnum %d does not match ACE dnum %d",
                   planned.plan.actual_dnum, literal.dnum);
        FMT_ASSERT(planned.plan.max_level >= max_logical_level_,
                   "Cheddar Literal provides max level %d but ACE requires %d",
                   planned.plan.max_level, max_logical_level_);

        std::cout << ::cheddar::BootstrapParameterPlanSummary(planned.plan);
        param_ = std::move(planned.parameter);
        boot_context_ =
            BootContext::Create(*param_, planned.boot_parameter);
        boot_context_->PrepareEvalMod();
        context_ = boot_context_;
        evalmod_mode_name = Evalmod_mode_name(literal.evalmod_mode);
        num_cts_levels = literal.num_cts_levels;
        num_stc_levels = literal.num_stc_levels;
      };
      using BootstrapLiteral = std::conditional_t<
          sizeof(Word) == sizeof(uint32_t),
          ::cheddar::BootstrapParametersLiteral32,
          ::cheddar::BootstrapParametersLiteral64>;
      initialize_bootstrap(BootstrapLiteral{});
#endif
    } else {
#ifdef RTLIB_CHEDDAR_STANDARD_ONLY
      ::cheddar::ParametersLiteral<Word> literal;
      literal.log_degree = 16;
      literal.log_default_scale = profile_scale_bits_;
      literal.default_encryption_level = max_logical_level_;
      literal.log_main_primes.assign(max_logical_level_ + 1, profile_scale_bits_);
      literal.log_main_primes.front() = prog_param->_first_mod_size;
      int dnum = std::max(1, static_cast<int>(prog_param->_num_q_parts));
      literal.log_auxiliary_primes.assign(
          (max_logical_level_ + dnum) / dnum, 60);
      literal.dense_hamming_weight = prog_param->_hamming_weight;
      literal.sparse_hamming_weight =
          std::min(32, static_cast<int>(prog_param->_hamming_weight));
      param_ = ::cheddar::NewParametersFromLiteral(literal);
      context_ = Context::Create(*param_);
#else
      FMT_ASSERT(profile_scale_bits_ >= 18 && profile_scale_bits_ <= 31,
                 "Cheddar ParametersLiteral<uint32_t> requires a non-bootstrap "
                 "scale in [18, 31] bits, got %d",
                 profile_scale_bits_);

      int requested_dnum = prog_param->_num_q_parts == 0
                               ? 4
                               : static_cast<int>(prog_param->_num_q_parts);
      FMT_ASSERT(requested_dnum > 0, "Cheddar dnum must be positive");
      int q_count = max_logical_level_ + 1;
      int aux_count = 0;
      while (aux_count == 0) {
        for (int candidate = 1; candidate <= q_count; ++candidate) {
          if ((q_count + candidate - 1) / candidate == requested_dnum) {
            aux_count = candidate;
            break;
          }
        }
        if (aux_count == 0) {
          ++q_count;
        }
      }

      ::cheddar::ParametersLiteral<Word> literal;
      literal.log_n = 16;
      literal.log_q.assign(q_count, profile_scale_bits_);
      literal.log_q.front() = 31;
      literal.log_p.assign(aux_count, 31);
      literal.log_default_scale = profile_scale_bits_;
      literal.default_encryption_level = max_logical_level_;
      literal.dense_hamming_weight =
          static_cast<int>(prog_param->_hamming_weight);
      literal.sparse_hamming_weight =
          std::min(32, static_cast<int>(prog_param->_hamming_weight));
      literal.key_switch.technique =
          ::cheddar::KeySwitchTechnique::HYBRID;

      param_ = ::cheddar::NewParametersFromLiteral(literal);
      FMT_ASSERT(param_->dnum_ == requested_dnum,
                 "Cheddar planned dnum %d does not match ACE dnum %d",
                 param_->dnum_, requested_dnum);
      std::cout << ::cheddar::ParameterSummary(*param_) << std::endl;
      context_ = Context::Create(*param_);
#endif
    }

    unit_scale_by_level_.assign(param_->max_level_ + 1, 1.0);
    unit_scale_by_level_[0] = param_->GetScale(0);
    for (int level = 1; level <= param_->max_level_; ++level) {
      if (level <= param_->default_encryption_level_) {
        unit_scale_by_level_[level] = param_->GetScale(level);
        continue;
      }
      long double prev = unit_scale_by_level_[level - 1];
      long double dropped = param_->GetRescalePrimeProd(level);
      // Keep the same rescale convention above the default encryption band:
      // a degree-2 ciphertext at level L should rescale to a degree-1
      // ciphertext at level L-1.
      unit_scale_by_level_[level] =
          static_cast<double>(std::sqrt(prev * dropped));
    }

    ui_ = std::make_unique<UI>(context_);
    pow2_rotation_keys_ = Use_pow2_rotation_keys();
    if (boot_requested_) {
      Ensure_bootstrap_slot(full_slots_);//full slot 32768
#ifndef RTLIB_CHEDDAR_STANDARD_ONLY
      Ensure_bootstrap_slot(full_slots_/2);//sparse slot 16384
      Ensure_bootstrap_slot(full_slots_/4);//sparse slot 8192
      Ensure_bootstrap_slot(full_slots_/8);//sparse slot 4096
#endif
    }

    std::unordered_set<int> prepared_rots;
    for (size_t i = 0; i < prog_param->_num_rot_idx; ++i) {
      int rot = prog_param->_rot_idxs[i];
      // Negative rotations depend on the active ciphertext slot count, so
      // prepare them lazily in Rotate() after normalizing against num_slots.
      if (rot <= 0) {
        continue;
      }
      if (pow2_rotation_keys_) {
        Prepare_pow2_rotation_keys(rot, input_logical_level_, &prepared_rots);
      } else if (prepared_rots.insert(rot).second) {
        ui_->PrepareRotationKey(rot, input_logical_level_);
      }
    }

    if (prog_param->_scaling_mod_size !=
        static_cast<size_t>(profile_scale_bits_)) {
      DEV_WARN(
          "cheddar: requested scaling_mod_size=%zu, using profile "
          "log_default_scale=%d\n",
          prog_param->_scaling_mod_size, profile_scale_bits_);
    }

    std::printf(
        "ckks_param: _provider = %d, _poly_degree = %u, _sec_level = %zu, "
        "mul_depth = %zu, _input_level = %zu, _first_mod_size = %zu, "
        "_scaling_mod_size = %zu, _num_q_parts = %zu, _num_rot_idx = %zu, "
        "cheddar_profile_scale = %d, cheddar_levels = %d, boot = %d, "
        "rot_key_mode = %s, evalmod_mode = %s, cts = %d, stc = %d\n",
        prog_param->_provider, prog_param->_poly_degree, prog_param->_sec_level,
        prog_param->_mul_depth, prog_param->_input_level,
        prog_param->_first_mod_size, prog_param->_scaling_mod_size,
        prog_param->_num_q_parts, prog_param->_num_rot_idx, profile_scale_bits_,
        max_logical_level_, boot_requested_ ? 1 : 0,
        pow2_rotation_keys_ ? "pow2" : "full",
        evalmod_mode_name, num_cts_levels, num_stc_levels);
  }

  static int Required_logical_levels(const CKKS_PARAMS* prog_param) {
    int requested = prog_param->_input_level == 0
                        ? static_cast<int>(prog_param->_mul_depth + 1)
                        : static_cast<int>(prog_param->_input_level);
    requested = std::max(requested, static_cast<int>(prog_param->_mul_depth));
    return std::max(1, requested);
  }

  int Map_logical_level(LEVEL_T level) const {
    if (level == 0) {
      return input_logical_level_;
    }
    FMT_ASSERT(level >= 1 && level <= static_cast<LEVEL_T>(max_logical_level_),
               "invalid logical level %llu (max=%d)",
               static_cast<unsigned long long>(level), max_logical_level_);
    return static_cast<int>(level);
  }

  int Logical_level(const Ciphertext& ct) const {
    return param_->NPToLevel(ct.inner.GetNP());
  }

  int Logical_level(const Plaintext& pt) const {
    return param_->NPToLevel(pt.inner.GetNP());
  }

  int Level_hint(const Ciphertext* ct) const {
    if (Is_zero(ct)) {
      return ct->zero_level > 0 ? ct->zero_level : input_logical_level_;
    }
    return Logical_level(*ct);
  }

  double Scale_hint(const Ciphertext* ct) const {
    if (Is_zero(ct)) {
      return ct->zero_scale > 0.0 ? ct->zero_scale
                                    : Scale_from_degree(1, Level_hint(ct));
    }
    return ct->inner.GetScale();
  }

  int Slots_hint(const Ciphertext* ct) const {
    if (Is_zero(ct)) {
      return ct->zero_slots > 0 ? ct->zero_slots : full_slots_;
    }
    return ct->inner.GetNumSlots() > 0 ? ct->inner.GetNumSlots()
                                         : full_slots_;
  }

  int Slots_hint(const Plaintext* pt) const {
    return pt->inner.GetNumSlots() > 0 ? pt->inner.GetNumSlots()
                                       : full_slots_;
  }

  bool Is_zero(const Ciphertext* ct) const {
    return ct->is_zero || fhe::rt::cheddar::Cipher_size(*ct) == 0;
  }

  double Determine_scale(LEVEL_T level) const {
    int cheddar_level = Map_logical_level(level);
    FMT_ASSERT(cheddar_level >= 0 &&
                   cheddar_level < static_cast<int>(unit_scale_by_level_.size()),
               "invalid CHEDDAR scale level %d", cheddar_level);
    return unit_scale_by_level_[cheddar_level];
  }

  double Scale_from_degree(SCALE_T scale_degree, LEVEL_T level) const {
    if (scale_degree == 0) {
      return 1.0;
    }
    return std::pow(Determine_scale(level), static_cast<double>(scale_degree));
  }

  SCALE_T Scale_degree_from_value(double scale, LEVEL_T level) const {
    if (scale <= 0.0 || scale == 1.0) {
      return 0;
    }
    double unit_scale = Determine_scale(level);
    if (unit_scale <= 1.0 || unit_scale == scale) {
      return unit_scale == scale ? 1 : 0;
    }
    return static_cast<SCALE_T>(
        std::llround(std::log(scale) / std::log(unit_scale)));
  }

  template <typename T>
  void Encode_real_values(PlainInner& pt, const T* input, size_t len,
                          SCALE_T sc_degree, LEVEL_T level) const {
    std::vector<Complex> values(full_slots_, Complex(0.0, 0.0));
    for (size_t i = 0; i < len && i < values.size(); ++i) {
      values[i] = Complex(static_cast<double>(input[i]), 0.0);
    }
#ifdef RTLIB_CHEDDAR_STANDARD_ONLY
    context_->encoder_.Encode(pt, Map_logical_level(level),
#else
    context_->encoder_.EncodeGPU(pt, Map_logical_level(level),
#endif
                              Scale_from_degree(sc_degree, level), values);
  }

  void Encode_mask(PlainInner& pt, double value, size_t len, SCALE_T sc_degree,
                   LEVEL_T level) const {
    std::vector<Complex> values(full_slots_, Complex(0.0, 0.0));
    for (size_t i = 0; i < len && i < values.size(); ++i) {
      values[i] = Complex(value, 0.0);
    }
#ifdef RTLIB_CHEDDAR_STANDARD_ONLY
    context_->encoder_.Encode(pt, Map_logical_level(level),
#else
    context_->encoder_.EncodeGPU(pt, Map_logical_level(level),
#endif
                              Scale_from_degree(sc_degree, level), values);
  }

  static int Normalize_rotation_step(int step, int num_slots) {
    FMT_ASSERT(num_slots > 0, "invalid slot count for rotation: %d", num_slots);
    int normalized = step % num_slots;
    if (normalized < 0) {
      normalized += num_slots;
    }
    return normalized;
  }

  static bool Is_power_of_two(int value) {
    return value > 0 && (value & (value - 1)) == 0;
  }

  static bool Is_signed_power_of_two(int value, int num_slots) {
    return Is_power_of_two(value) ||
           (value < num_slots && Is_power_of_two(num_slots - value));
  }

  static bool Use_pow2_rotation_keys() {
    const char* mode = std::getenv(ENV_CHEDDAR_ROT_KEY_MODE);
    if (mode == nullptr || mode[0] == '\0' || std::strcmp(mode, "full") == 0 ||
        std::strcmp(mode, "0") == 0) {
      return false;
    }
    if (std::strcmp(mode, "pow2") == 0 ||
        std::strcmp(mode, "pow2_only") == 0 ||
        std::strcmp(mode, "1") == 0) {
      return true;
    }
    FMT_ASSERT(false, "unsupported CHEDDAR rotation key mode: %s", mode);
    return false;
  }

  void Encode_scalar_constant(Constant& scalar, double value, double scale,
                              int logical_level) const {
    context_->encoder_.EncodeConstant(scalar, logical_level, scale, value);
  }

  void Encrypt_plain(Ciphertext* dst, const PlainInner& plain) const {
    ui_->Encrypt(dst->inner, plain);
    dst->is_zero = false;
  }

  void Ensure_materialized_zero(Ciphertext* ct, int logical_level, double scale,
                                int num_slots) const {
    if (!Is_zero(ct)) {
      return;
    }
    int actual_slots = num_slots > 0 ? num_slots : full_slots_;
    std::vector<Complex> zeros(actual_slots, Complex(0.0, 0.0));
    PlainInner plain;
    context_->encoder_.Encode(plain, logical_level, scale, zeros);
    ui_->Encrypt(ct->inner, plain);
    ct->is_zero = false;
  }

  void Mark_zero_like(Ciphertext* dst, const Ciphertext* src) const {
    *dst = Ciphertext();
    dst->is_zero = true;
    dst->zero_level = Level_hint(src);
    dst->zero_scale = Scale_hint(src);
    dst->zero_slots = Slots_hint(src);
  }

  void Add_scalar_inplace(Ciphertext* ct, double scalar) const {
    Constant encoded;
    Encode_scalar_constant(encoded, scalar, ct->inner.GetScale(),
                           Logical_level(*ct));
    context_->Add(ct->inner, ct->inner, encoded);
    ct->is_zero = false;
  }

  void Sub_scalar_inplace(Ciphertext* ct, double scalar) const {
    Constant encoded;
    Encode_scalar_constant(encoded, scalar, ct->inner.GetScale(),
                           Logical_level(*ct));
    context_->Sub(ct->inner, ct->inner, encoded);
    ct->is_zero = false;
  }

  void Align_cipher_levels(Ciphertext* lhs, Ciphertext* rhs) {
    while (!Is_zero(lhs) && !Is_zero(rhs) &&
           Level_hint(lhs) > Level_hint(rhs)) {
      Ciphertext tmp;
      Mod_switch(&tmp, lhs);
      *lhs = std::move(tmp);
    }
    while (!Is_zero(lhs) && !Is_zero(rhs) &&
           Level_hint(rhs) > Level_hint(lhs)) {
      Ciphertext tmp;
      Mod_switch(&tmp, rhs);
      *rhs = std::move(tmp);
    }
  }

  bool Same_scale(double lhs_scale, double rhs_scale) const {
    if (lhs_scale == rhs_scale) {
      return true;
    }
    double diff = std::fabs(lhs_scale - rhs_scale);
    double ref = std::max(std::fabs(lhs_scale), std::fabs(rhs_scale));
    if (ref == 0.0) {
      return diff == 0.0;
    }
    return diff <= ref * 1e-12;
  }

  void Check_binary_compatibility(const char* op, const Ciphertext& lhs,
                                  const Ciphertext& rhs) const {
    int lhs_level = Logical_level(lhs);
    int rhs_level = Logical_level(rhs);
    double lhs_scale = lhs.inner.GetScale();
    double rhs_scale = rhs.inner.GetScale();
    FMT_ASSERT(lhs_level == rhs_level,
               "%s level mismatch: lhs(level=%d, scale=%.17g, degree=%llu) "
               "rhs(level=%d, scale=%.17g, degree=%llu)",
               op, lhs_level, lhs_scale,
               (unsigned long long)Scale_degree_from_value(lhs_scale,
                                                           lhs_level),
               rhs_level, rhs_scale,
               (unsigned long long)Scale_degree_from_value(rhs_scale,
                                                           rhs_level));
    FMT_ASSERT(Same_scale(lhs_scale, rhs_scale),
               "%s scale mismatch: lhs(level=%d, scale=%.17g, degree=%llu) "
               "rhs(level=%d, scale=%.17g, degree=%llu)",
               op, lhs_level, lhs_scale,
               (unsigned long long)Scale_degree_from_value(lhs_scale,
                                                           lhs_level),
               rhs_level, rhs_scale,
               (unsigned long long)Scale_degree_from_value(rhs_scale,
                                                           rhs_level));
  }

  void Check_binary_compatibility(const char* op, const Ciphertext& lhs,
                                  const Plaintext& rhs) const {
    int lhs_level = Logical_level(lhs);
    int rhs_level = Logical_level(rhs);
    double lhs_scale = lhs.inner.GetScale();
    double rhs_scale = rhs.inner.GetScale();
    FMT_ASSERT(lhs_level == rhs_level,
               "%s level mismatch: ct(level=%d, scale=%.17g, degree=%llu) "
               "pt(level=%d, scale=%.17g, degree=%llu)",
               op, lhs_level, lhs_scale,
               (unsigned long long)Scale_degree_from_value(lhs_scale,
                                                           lhs_level),
               rhs_level, rhs_scale,
               (unsigned long long)Scale_degree_from_value(rhs_scale,
                                                           rhs_level));
    FMT_ASSERT(Same_scale(lhs_scale, rhs_scale),
               "%s scale mismatch: ct(level=%d, scale=%.17g, degree=%llu) "
               "pt(level=%d, scale=%.17g, degree=%llu)",
               op, lhs_level, lhs_scale,
               (unsigned long long)Scale_degree_from_value(lhs_scale,
                                                           lhs_level),
               rhs_level, rhs_scale,
               (unsigned long long)Scale_degree_from_value(rhs_scale,
                                                           rhs_level));
  }

  void Ensure_bootstrap_slot(int requested_slots) {
    FMT_ASSERT(requested_slots > 0 && requested_slots <= full_slots_,
               "invalid CHEDDAR bootstrap slot count: %d", requested_slots);
    FMT_ASSERT((requested_slots & (requested_slots - 1)) == 0,
               "CHEDDAR bootstrap slot count must be power-of-two, got %d",
               requested_slots);

    if (boot_prepared_slots_.count(requested_slots) != 0) {
      return;
    }

#ifdef RTLIB_CHEDDAR_STANDARD_ONLY
    boot_context_->PrepareEvalSpecialFFT(requested_slots);
#else
    const auto boot_variant =
        boot_context_->boot_param_.UseRbootArcSine()
            ? ::cheddar::BootVariant::kImaginaryRemoving
            : ::cheddar::BootVariant::kNormal;
    boot_context_->PrepareEvalSpecialFFT(requested_slots, boot_variant);
#endif
    EvkRequest req;
    boot_context_->AddRequiredRotations(req, requested_slots);
    ui_->PrepareRotationKey(req);
    boot_prepared_slots_.insert(requested_slots);
  }

  void Ensure_rotation_key(int rot, const Ciphertext* ct) {
    const auto& evk_map = ui_->GetEvkMap();
    auto key_it = evk_map.find(rot);
    if (key_it == evk_map.end() ||
        !ct->inner.GetNP().IsSubsetOf(key_it->second.GetNP())) {
      ui_->PrepareRotationKey(rot, Level_hint(ct));
    }
  }

  bool Try_get_exact_rotation_key(const Ciphertext* ct, int rot,
                                  const Evk** rot_key) {
    if (rot == 0 || Is_zero(ct)) {
      return false;
    }

    const EvkMap& evk_map = ui_->GetEvkMap();
    auto          key_it  = evk_map.find(rot);
    if (key_it != evk_map.end() &&
        ct->inner.GetNP().IsSubsetOf(key_it->second.GetNP())) {
      *rot_key = &key_it->second;
      return true;
    }

    if (pow2_rotation_keys_ &&
        !Is_signed_power_of_two(rot, Slots_hint(ct))) {
      return false;
    }

    ui_->PrepareRotationKey(rot, Level_hint(ct));
    const EvkMap& refreshed_map = ui_->GetEvkMap();
    key_it = refreshed_map.find(rot);
    if (key_it == refreshed_map.end() ||
        !ct->inner.GetNP().IsSubsetOf(key_it->second.GetNP())) {
      return false;
    }
    *rot_key = &key_it->second;
    return true;
  }

  void Prepare_pow2_rotation_keys(
      int step, int level,
      std::unordered_set<int>* prepared_rots = nullptr) {
    FMT_ASSERT(step > 0, "invalid rotation step for pow2 preparation: %d",
               step);
    int remaining = step;
    while (remaining > 0) {
      int rot = remaining & -remaining;
      if (prepared_rots == nullptr || prepared_rots->insert(rot).second) {
        ui_->PrepareRotationKey(rot, level);
      }
      remaining -= rot;
    }
  }

  void Init_mul_accumulator(Ciphertext* accum, const Ciphertext* op,
                            const Plaintext* plain, int num_slots) const {
    Ensure_materialized_zero(accum, Level_hint(op),
                             Scale_hint(op) * plain->inner.GetScale(),
                             num_slots);
    accum->is_zero = false;
  }

  void Decode_plain(const PlainInner& plain, std::vector<double>& vec) const {
    std::vector<Complex> decoded;
    context_->encoder_.Decode(decoded, plain);
    vec.assign(full_slots_, 0.0);
    size_t limit = std::min(decoded.size(), vec.size());
    for (size_t i = 0; i < limit; ++i) {
      vec[i] = decoded[i].real();
    }
  }

  static double* Copy_message(const std::vector<double>& vec) {
    double* msg = static_cast<double*>(std::malloc(sizeof(double) * vec.size()));
    FMT_ASSERT(msg != nullptr || vec.empty(),
               "failed to allocate output message");
    if (!vec.empty()) {
      std::memcpy(msg, vec.data(), sizeof(double) * vec.size());
    }
    return msg;
  }

  static inline CHEDDAR_CONTEXT* Instance = nullptr;

  std::unique_ptr<Param> param_;
  ContextPtr context_;
  BootContextPtr boot_context_;
  std::unique_ptr<UI> ui_;
  bool boot_requested_ = false;
  bool pow2_rotation_keys_ = false;
  std::unordered_set<int> boot_prepared_slots_;
  double base_scale_ = 0.0;
  int profile_scale_bits_ = 0;
  int max_logical_level_ = 0;
  int input_logical_level_ = 0;
  int full_slots_ = 0;
  std::vector<double> unit_scale_by_level_;
  GpuFusionRuntimeStats gpu_fusion_stats_;
};

}  // namespace

void Prepare_context() {
  Init_rtlib_timing();
  Io_init();
  CHEDDAR_CONTEXT::Init_context();
  RT_DATA_INFO* data_info = Get_rt_data_info();
  if (data_info != nullptr) {
    bool ok = Pt_mgr_init(data_info->_file_name);
    FMT_ASSERT(ok, "failed to initialize cheddar pt manager: %s",
               data_info->_file_name);
  }
}

void Finalize_context() {
  if (Get_rt_data_info() != nullptr) {
    Pt_mgr_fini();
  }
  CHEDDAR_CONTEXT::Instance_ptr()->Print_gpu_fusion_runtime_stats();
  CHEDDAR_CONTEXT::Fini_context();
  RTLIB_TM_REPORT();
  Io_fini();
}

void Pre_run_main_graph() {
  if (std::getenv(ENV_PT_PRE_ENCODE_COUNT) == nullptr) {
    return;
  }
  RT_DATA_INFO* data_info = Get_rt_data_info();
  if (data_info == nullptr) {
    return;
  }
  FMT_ASSERT(data_info->_entry_type == DE_MSG_F32,
             "CHEDDAR pre-encode currently supports DE_MSG_F32 only");
  bool ok = Pt_pre_encode();
  FMT_ASSERT(ok, "CHEDDAR pre-encode failed");
}

void Prepare_input(TENSOR* input, const char* name) {
  CHEDDAR_CONTEXT::Instance_ptr()->Prepare_input(input, name);
}

void Prepare_input_dup(TENSOR* input, const char* name) {
  CHEDDAR_CONTEXT::Instance_ptr()->Prepare_input(input, name);
}

double* Handle_output(const char* name) {
  return CHEDDAR_CONTEXT::Instance_ptr()->Handle_output(name, 0);
}

void Cheddar_prepare_input(TENSOR* input, const char* name) {
  CHEDDAR_CONTEXT::Instance_ptr()->Prepare_input(input, name);
}

void Cheddar_set_output_data(const char* name, size_t idx, CIPHER data) {
  CHEDDAR_CONTEXT::Instance_ptr()->Set_output_data(name, idx, data);
}

CIPHERTEXT Cheddar_get_input_data(const char* name, size_t idx) {
  return CHEDDAR_CONTEXT::Instance_ptr()->Get_input_data(name, idx);
}

double* Cheddar_handle_output(const char* name) {
  return CHEDDAR_CONTEXT::Instance_ptr()->Handle_output(name, 0);
}

void Cheddar_encode_float(PLAIN pt, float* input, size_t len,
                          SCALE_T sc_degree, LEVEL_T level) {
  CHEDDAR_CONTEXT::Instance_ptr()->Encode_float(pt, input, len, sc_degree,
                                                level);
}

void Cheddar_encode_double(PLAIN pt, double* input, size_t len,
                           SCALE_T sc_degree, LEVEL_T level) {
  CHEDDAR_CONTEXT::Instance_ptr()->Encode_double(pt, input, len, sc_degree,
                                                 level);
}

void Cheddar_encode_float_cst_lvl(PLAIN pt, float* input, size_t len,
                                  SCALE_T sc_degree, int level) {
  CHEDDAR_CONTEXT::Instance_ptr()->Encode_float(
      pt, input, len, sc_degree, static_cast<LEVEL_T>(level));
}

void Cheddar_encode_double_cst_lvl(PLAIN pt, double* input, size_t len,
                                   SCALE_T sc_degree, int level) {
  CHEDDAR_CONTEXT::Instance_ptr()->Encode_double(
      pt, input, len, sc_degree, static_cast<LEVEL_T>(level));
}

void Cheddar_encode_float_mask(PLAIN pt, float input, size_t len,
                               SCALE_T sc_degree, LEVEL_T level) {
  CHEDDAR_CONTEXT::Instance_ptr()->Encode_float_mask(pt, input, len, sc_degree,
                                                     level);
}

void Cheddar_encode_double_mask(PLAIN pt, double input, size_t len,
                                SCALE_T sc_degree, LEVEL_T level) {
  CHEDDAR_CONTEXT::Instance_ptr()->Encode_double_mask(pt, input, len,
                                                      sc_degree, level);
}

void Cheddar_encode_float_mask_cst_lvl(PLAIN pt, float input, size_t len,
                                       SCALE_T sc_degree, int level) {
  CHEDDAR_CONTEXT::Instance_ptr()->Encode_float_mask(
      pt, input, len, sc_degree, static_cast<LEVEL_T>(level));
}

void Cheddar_encode_double_mask_cst_lvl(PLAIN pt, double input, size_t len,
                                        SCALE_T sc_degree, int level) {
  CHEDDAR_CONTEXT::Instance_ptr()->Encode_double_mask(
      pt, input, len, sc_degree, static_cast<LEVEL_T>(level));
}

void Cheddar_encrypt_double(CIPHER res, double* input, size_t len,
                            SCALE_T sc_degree, LEVEL_T level) {
  CHEDDAR_CONTEXT::Instance_ptr()->Encrypt_double(res, input, len, sc_degree,
                                                  level);
}

#ifndef RTLIB_CHEDDAR_STANDARD_ONLY
void Cheddar_app_relu(CIPHER res, CIPHER op, size_t len,
                      LEVEL_T consumed_levels) {
  CHEDDAR_CONTEXT::Instance_ptr()->App_relu(res, op, len, consumed_levels);
}

void Cheddar_bootstrap_with_relu(CIPHER res, CIPHER op, int level, int slot,
                                 double relu_value_range) {
  CHEDDAR_CONTEXT::Instance_ptr()->Bootstrap_with_relu(
      res, op, level, slot, relu_value_range);
}

#endif

void Cheddar_add_ciph(CIPHER res, CIPHER op1, CIPHER op2) {
  CHEDDAR_CONTEXT::Instance_ptr()->Add(res, op1, op2);
}

void Cheddar_sub_ciph(CIPHER res, CIPHER op1, CIPHER op2) {
  CHEDDAR_CONTEXT::Instance_ptr()->Sub(res, op1, op2);
}

void Cheddar_add_plain(CIPHER res, CIPHER op1, PLAIN op2) {
  CHEDDAR_CONTEXT::Instance_ptr()->Add(res, op1, op2);
}

void Cheddar_sub_plain(CIPHER res, CIPHER op1, PLAIN op2) {
  CHEDDAR_CONTEXT::Instance_ptr()->Sub(res, op1, op2);
}

void Cheddar_add_scalar(CIPHER res, CIPHER op1, double op2) {
  CHEDDAR_CONTEXT::Instance_ptr()->Add(res, op1, op2);
}

void Cheddar_sub_scalar(CIPHER res, CIPHER op1, double op2) {
  CHEDDAR_CONTEXT::Instance_ptr()->Sub(res, op1, op2);
}

void Cheddar_mul_ciph(CIPHER res, CIPHER op1, CIPHER op2) {
  CHEDDAR_CONTEXT::Instance_ptr()->Mul(res, op1, op2);
}

void Cheddar_mul_plain(CIPHER res, CIPHER op1, PLAIN op2) {
  CHEDDAR_CONTEXT::Instance_ptr()->Mul(res, op1, op2);
}

void Cheddar_mul_scalar(CIPHER res, CIPHER op1, double op2) {
  CHEDDAR_CONTEXT::Instance_ptr()->Mul(res, op1, op2);
}

void Cheddar_rotate(CIPHER res, CIPHER op, int step) {
  CHEDDAR_CONTEXT::Instance_ptr()->Rotate(res, op, step);
}

#ifndef RTLIB_CHEDDAR_STANDARD_ONLY
void Cheddar_mul_plain_add(CIPHER acc, CIPHER op, PLAIN plain) {
  CHEDDAR_CONTEXT::Instance_ptr()->Mul_plain_add(acc, op, plain);
}

void Cheddar_rotate_add(CIPHER acc, CIPHER op, int step) {
  CHEDDAR_CONTEXT::Instance_ptr()->Rotate_add(acc, op, step);
}

void Cheddar_rotate_mul_plain_add(CIPHER acc, CIPHER op, int step,
                                  PLAIN plain) {
  CHEDDAR_CONTEXT::Instance_ptr()->Rotate_mul_plain_add(acc, op, step, plain);
}

#endif

void Cheddar_conjugate(CIPHER res, CIPHER op) {
  CHEDDAR_CONTEXT::Instance_ptr()->Conjugate(res, op);
}

void Cheddar_rescale(CIPHER res, CIPHER op) {
  CHEDDAR_CONTEXT::Instance_ptr()->Rescale(res, op);
}

void Cheddar_mod_switch(CIPHER res, CIPHER op) {
  CHEDDAR_CONTEXT::Instance_ptr()->Mod_switch(res, op);
}

void Cheddar_level_down(CIPHER res, CIPHER op, int level) {
  CHEDDAR_CONTEXT::Instance_ptr()->Level_down(res, op, level);
}

void Cheddar_relin(CIPHER res, CIPHER3 op) {
  CHEDDAR_CONTEXT::Instance_ptr()->Relin(res, op);
}

void Cheddar_bootstrap(CIPHER res, CIPHER op, int level, int slot) {
  CHEDDAR_CONTEXT::Instance_ptr()->Bootstrap(res, op, level, slot);
}

#ifndef RTLIB_CHEDDAR_STANDARD_ONLY
void Cheddar_rotate_add_reduce(CIPHER res, CIPHER op, uint32_t step_count,
                               uint32_t rotate_self, const int* steps) {
  CHEDDAR_CONTEXT::Instance_ptr()->Rotate_add_reduce(res, op, step_count,
                                                     rotate_self, steps);
}

void Cheddar_rotate_mul_sum(CIPHER res, CIPHER op, uint32_t term_count,
                            uint32_t post_rescale, PLAIN const* plains,
                            const int* steps) {
  CHEDDAR_CONTEXT::Instance_ptr()->Rotate_mul_sum(res, op, term_count,
                                                  post_rescale, plains, steps);
}

void Cheddar_rotate_many(CIPHER res, CIPHER op, uint32_t step_count,
                         const int* steps) {
  CHEDDAR_CONTEXT::Instance_ptr()->Rotate_many(res, op, step_count, steps);
}

void Cheddar_blocking_rotate(CIPHER res, CIPHER op, uint32_t step_count,
                             const int* steps) {
  CHEDDAR_CONTEXT::Instance_ptr()->Blocking_rotate(res, op, step_count, steps);
}

void Cheddar_block_rotate_mul_sum_float(CIPHER res, CIPHER op,
                                        uint32_t block_count,
                                        uint32_t grid_count, int grid_shift,
                                        uint32_t post_rescale,
                                        const float* plain_data,
                                        size_t plain_len, SCALE_T scale,
                                        LEVEL_T level,
                                        const int* bank_steps) {
  CHEDDAR_CONTEXT::Instance_ptr()->Block_rotate_mul_sum_float(
      res, op, block_count, grid_count, grid_shift, post_rescale, plain_data,
      plain_len, scale, level, bank_steps);
}

void Cheddar_block_rotate_mul_sum_msg(CIPHER res, CIPHER op,
                                      uint32_t block_count,
                                      uint32_t grid_count, int grid_shift,
                                      uint32_t post_rescale,
                                      uint64_t plain_base, size_t plain_len,
                                      SCALE_T scale, LEVEL_T level,
                                      const int* bank_steps) {
  CHEDDAR_CONTEXT::Instance_ptr()->Block_rotate_mul_sum_msg(
      res, op, block_count, grid_count, grid_shift, post_rescale, plain_base,
      plain_len, scale, level, bank_steps);
}

void Cheddar_block_rotate_mul_sum(CIPHER res, CIPHER op, uint32_t block_count,
                                  uint32_t grid_count, int grid_shift,
                                  uint32_t post_rescale, PLAIN const* plains,
                                  const int* bank_steps) {
  CHEDDAR_CONTEXT::Instance_ptr()->Block_rotate_mul_sum(
      res, op, block_count, grid_count, grid_shift, post_rescale, plains,
      bank_steps);
}

#endif

void Cheddar_copy(CIPHER res, CIPHER op) {
  CHEDDAR_CONTEXT::Instance_ptr()->Copy(op, res);
}

void Cheddar_zero(CIPHER res) { CHEDDAR_CONTEXT::Instance_ptr()->Zero(res); }

void Cheddar_free_ciph(CIPHER res) {
  CHEDDAR_CONTEXT::Instance_ptr()->Free_ciph(res);
}

void Cheddar_free_plain(PLAIN res) {
  CHEDDAR_CONTEXT::Instance_ptr()->Free_plain(res);
}

SCALE_T Cheddar_scale(CIPHER res) {
  return CHEDDAR_CONTEXT::Instance_ptr()->Scale_degree(res);
}

LEVEL_T Cheddar_level(CIPHER res) {
  return CHEDDAR_CONTEXT::Instance_ptr()->Level_value(res);
}

double Cheddar_scale_value(CIPHER res) {
  return CHEDDAR_CONTEXT::Instance_ptr()->Scale_value(res);
}

int Cheddar_slots_value(CIPHER res) {
  if (res == nullptr) {
    return 0;
  }
  if (res->is_zero || fhe::rt::cheddar::Cipher_size(*res) == 0) {
    return res->zero_slots;
  }
  return res->inner.GetNumSlots();
}

void Dump_ciph(CIPHER ct, size_t start, size_t len) {
  double* msg = Get_msg(ct);
  std::cout << "[";
  for (size_t i = start; i < start + len && i < Get_ciph_slots(ct); ++i) {
    if (i != start) {
      std::cout << ", ";
    }
    std::cout << msg[i];
  }
  std::cout << "]\n";
  std::free(msg);
}

void Dump_plain(PLAIN pt, size_t start, size_t len) {
  double* msg = Get_msg_from_plain(pt);
  std::cout << "[";
  for (size_t i = start; i < start + len && i < Get_plain_slots(pt); ++i) {
    if (i != start) {
      std::cout << ", ";
    }
    std::cout << msg[i];
  }
  std::cout << "]\n";
  std::free(msg);
}

void Dump_cipher_msg(const char* name, CIPHER ct, uint32_t len) {
  std::cout << "[" << name << "]: ";
  Dump_ciph(ct, 0, len);
}

void Dump_plain_msg(const char* name, PLAIN pt, uint32_t len) {
  std::cout << "[" << name << "]: ";
  Dump_plain(pt, 0, len);
}

double* Get_msg(CIPHER ct) {
  std::vector<double> vec;
  CHEDDAR_CONTEXT::Instance_ptr()->Decrypt(ct, vec);
  double* msg = static_cast<double*>(std::malloc(sizeof(double) * vec.size()));
  FMT_ASSERT(msg != nullptr || vec.empty(),
             "failed to allocate ciphertext message");
  if (!vec.empty()) {
    std::memcpy(msg, vec.data(), sizeof(double) * vec.size());
  }
  return msg;
}

double* Get_msg_from_plain(PLAIN pt) {
  std::vector<double> vec;
  CHEDDAR_CONTEXT::Instance_ptr()->Decode(pt, vec);
  double* msg = static_cast<double*>(std::malloc(sizeof(double) * vec.size()));
  FMT_ASSERT(msg != nullptr || vec.empty(),
             "failed to allocate plaintext message");
  if (!vec.empty()) {
    std::memcpy(msg, vec.data(), sizeof(double) * vec.size());
  }
  return msg;
}

bool Within_value_range(CIPHER ciph, double* msg, uint32_t len) {
  (void)ciph;
  (void)msg;
  (void)len;
  FMT_ASSERT(false, "TODO: not implemented in cheddar");
  return false;
}
