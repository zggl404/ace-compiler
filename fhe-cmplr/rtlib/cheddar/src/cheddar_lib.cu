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
#include "extension/BootContext.h"
#include "extension/BootParameter.h"
#include "rt_cheddar/cheddar_api.h"
#include "rt_cheddar/rt_cheddar.h"

using Word = uint32_t;
#include "cheddar_param_profiles.inc"

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
using BootContext = ::cheddar::BootContext<Word>;
using BootContextPtr = std::shared_ptr<BootContext>;
using BootParameter = ::cheddar::BootParameter;
using EvkRequest = ::cheddar::EvkRequest;

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
    Io_set_input(name, 0, ct);
  }

  void Set_output_data(const char* name, size_t idx, Ciphertext* ct) {
    Io_set_output(name, idx, new Ciphertext(*ct));
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

    Ciphertext current(*op1);
    int remaining = normalized_step;
    while (remaining > 0) {
      int rot = remaining & -remaining;
      Ensure_rotation_key(rot, &current);
      Ciphertext tmp;
      const auto& key = ui_->GetRotationKey(rot);
      context_->HRot(tmp.inner, current.inner, key, rot);
      tmp.is_zero = false;
      current = std::move(tmp);
      remaining -= rot;
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
    FMT_ASSERT(boot_requested_ && boot_context_ != nullptr,
               "CHEDDAR bootstrap was invoked without bootstrap setup");

    int requested_slots = slot > 0 ? slot : Slots_hint(op1);
    if (requested_slots <= 0) {
      requested_slots = full_slots_;
    }
    Ensure_bootstrap_slot(requested_slots);

    bool zero_input = Is_zero(op1);
    Ciphertext input;
    if (zero_input) {
      Ensure_materialized_zero(&input, Level_hint(op1), Scale_hint(op1),
                               requested_slots);
    } else {
      input = *op1;
      input.inner.SetNumSlots(requested_slots);
    }

    while (Logical_level(input) > param_->default_encryption_level_) {
      Ciphertext dropped;
      Mod_switch(&dropped, &input);
      input = std::move(dropped);
    }

    Ciphertext booted;
    boot_context_->Boot(booted.inner, input.inner, ui_->GetEvkMap());
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

    const auto& profile = Select_profile(max_logical_level_);
    profile_scale_bits_ = profile.log_default_scale;
    base_scale_ = std::pow(2.0, static_cast<double>(profile_scale_bits_));

    // Keep the full profile schedule. Some Cheddar parameter sets intentionally
    // trade main primes for terminal primes in early levels, so a short prefix
    // may not end at the component-wise maximum required by Parameter<>.
    std::vector<std::pair<int, int>> level_config(profile.level_config.begin(),
                                                  profile.level_config.end());

    int max_main = level_config.back().first;
    int max_ter = level_config.back().second;
    int num_q = max_main + max_ter;
    size_t requested_dnum =
        prog_param->_num_q_parts == 0 ? static_cast<size_t>(4)
                                      : prog_param->_num_q_parts;
    int num_aux =
        std::max<int>(1, (num_q + static_cast<int>(requested_dnum) - 1) /
                             static_cast<int>(requested_dnum));
    num_aux = std::min<int>(num_aux, profile.aux_primes.size());

    param_ = std::make_unique<Param>(
        16, base_scale_,
        std::min<int>(profile.default_encryption_level,
                      static_cast<int>(level_config.size()) - 1),
        level_config, profile.main_primes,
        std::vector<Word>(profile.aux_primes.begin(),
                          profile.aux_primes.begin() + num_aux),
        profile.ter_primes);

    int dense_hamming_weight = profile.dense_hamming_weight;
    if (prog_param->_hamming_weight > 0) {
      dense_hamming_weight = std::max<int>(profile.sparse_hamming_weight,
                                           prog_param->_hamming_weight);
    }
    param_->SetSparseHammingWeight(profile.sparse_hamming_weight);
    param_->SetDenseHammingWeight(dense_hamming_weight);

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

    boot_requested_ = Need_bts();
    if (boot_requested_) {
      static constexpr int kBootNumCtSLevels = 3;
      static constexpr int kBootNumStCLevels = 3;
      boot_context_ = BootContext::Create(
          *param_,
          BootParameter(param_->max_level_, kBootNumCtSLevels,
                        kBootNumStCLevels));
      boot_context_->PrepareEvalMod();
      context_ = boot_context_;
    } else {
      context_ = Context::Create(*param_);
    }
    ui_ = std::make_unique<UI>(context_);
    pow2_rotation_keys_ = Use_pow2_rotation_keys();

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
        "rot_key_mode = %s\n",
        prog_param->_provider, prog_param->_poly_degree, prog_param->_sec_level,
        prog_param->_mul_depth, prog_param->_input_level,
        prog_param->_first_mod_size, prog_param->_scaling_mod_size,
        prog_param->_num_q_parts, prog_param->_num_rot_idx, profile_scale_bits_,
        max_logical_level_, boot_requested_ ? 1 : 0,
        pow2_rotation_keys_ ? "pow2" : "full");
  }

  const CheddarProfileSpec& Select_profile(int required_levels) const {
    FMT_ASSERT(static_cast<int>(kCheddarProfile.level_config.size()) >
                   required_levels,
               "CHEDDAR profile cannot satisfy %d logical levels",
               required_levels);
    return kCheddarProfile;
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
    context_->encoder_.Encode(pt, Map_logical_level(level),
                              Scale_from_degree(sc_degree, level), values);
  }

  void Encode_mask(PlainInner& pt, double value, size_t len, SCALE_T sc_degree,
                   LEVEL_T level) const {
    std::vector<Complex> values(full_slots_, Complex(0.0, 0.0));
    for (size_t i = 0; i < len && i < values.size(); ++i) {
      values[i] = Complex(value, 0.0);
    }
    context_->encoder_.Encode(pt, Map_logical_level(level),
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

    boot_context_->PrepareEvalSpecialFFT(requested_slots);
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
  CHEDDAR_CONTEXT::Fini_context();
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
