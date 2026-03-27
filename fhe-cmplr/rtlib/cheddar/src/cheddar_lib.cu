//-*-c++-*-
//=============================================================================
//
// Copyright (c) Ant Group Co., Ltd
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//=============================================================================

#include <algorithm>
#include <array>
#include <cmath>
#include <complex>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <functional>
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
#include "common/rtlib_timing.h"
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
    Encode_real_values(pt->Inner(), input, len, sc_degree, level);
  }

  void Encode_double(Plaintext* pt, double* input, size_t len,
                     SCALE_T sc_degree, LEVEL_T level) const {
    Encode_real_values(pt->Inner(), input, len, sc_degree, level);
  }

  void Encode_float_mask(Plaintext* pt, float input, size_t len,
                         SCALE_T sc_degree, LEVEL_T level) const {
    Encode_mask(pt->Inner(), static_cast<double>(input), len, sc_degree, level);
  }

  void Encode_double_mask(Plaintext* pt, double input, size_t len,
                          SCALE_T sc_degree, LEVEL_T level) const {
    Encode_mask(pt->Inner(), input, len, sc_degree, level);
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
    context_->Add(res->Inner(), lhs.Inner(), rhs.Inner());
    res->Clear_zero();
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
      context_->Neg(res->Inner(), rhs.Inner());
      res->Clear_zero();
      return;
    }

    Ciphertext lhs(*op1);
    Ciphertext rhs(*op2);
    Align_cipher_levels(&lhs, &rhs);
    context_->Sub(res->Inner(), lhs.Inner(), rhs.Inner());
    res->Clear_zero();
  }

  void Add(Ciphertext* res, const Ciphertext* op1, const Plaintext* op2) {
    if (Is_zero(op1)) {
      Ciphertext zero_ct;
      Ensure_materialized_zero(&zero_ct, Logical_level(*op2),
                               op2->Inner().GetScale(), Slots_hint(op2));
      context_->Add(res->Inner(), zero_ct.Inner(), op2->Inner());
      res->Clear_zero();
      return;
    }

    Ciphertext lhs(*op1);
    context_->Add(res->Inner(), lhs.Inner(), op2->Inner());
    res->Clear_zero();
  }

  void Sub(Ciphertext* res, const Ciphertext* op1, const Plaintext* op2) {
    if (Is_zero(op1)) {
      Ciphertext zero_ct;
      Ensure_materialized_zero(&zero_ct, Logical_level(*op2),
                               op2->Inner().GetScale(), Slots_hint(op2));
      context_->Sub(res->Inner(), zero_ct.Inner(), op2->Inner());
      res->Clear_zero();
      return;
    }

    Ciphertext lhs(*op1);
    context_->Sub(res->Inner(), lhs.Inner(), op2->Inner());
    res->Clear_zero();
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
    context_->Mult(res->Inner(), lhs.Inner(), rhs.Inner());
    res->Clear_zero();
  }

  void Mul(Ciphertext* res, const Ciphertext* op1, const Plaintext* op2) {
    if (Is_zero(op1)) {
      Mark_zero_like(res, op1);
      return;
    }

    Ciphertext lhs(*op1);
    context_->Mult(res->Inner(), lhs.Inner(), op2->Inner());
    res->Clear_zero();
  }

  void Mul(Ciphertext* res, const Ciphertext* op1, double op2) {
    if (Is_zero(op1) || op2 == 0.0) {
      Mark_zero_like(res, op1);
      return;
    }

    Constant scalar;
    Encode_scalar_constant(scalar, op2, op1->Inner().GetScale(),
                           Logical_level(*op1));
    Ciphertext lhs(*op1);
    context_->Mult(res->Inner(), lhs.Inner(), scalar);
    res->Clear_zero();
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
    const auto& evk_map = ui_->GetEvkMap();
    auto key_it = evk_map.find(normalized_step);
    if (key_it == evk_map.end() ||
        !op1->Inner().GetNP().IsSubsetOf(key_it->second.GetNP())) {
      ui_->PrepareRotationKey(normalized_step, Level_hint(op1));
    }
    const auto& key = ui_->GetRotationKey(normalized_step);
    context_->HRot(res->Inner(), op1->Inner(), key, normalized_step);
    res->Clear_zero();
  }

  void Conjugate(Ciphertext* res, const Ciphertext* op1) {
    if (Is_zero(op1)) {
      Mark_zero_like(res, op1);
      return;
    }
    context_->HConj(res->Inner(), op1->Inner(), ui_->GetConjugationKey());
    res->Clear_zero();
  }

  void Rescale(Ciphertext* res, const Ciphertext* op1) {
    if (Is_zero(op1)) {
      *res = *op1;
      if (res->Zero_level() > 1) {
        res->Mark_zero(res->Zero_level() - 1, res->Zero_scale(),
                       res->Zero_slots());
      }
      return;
    }

    Ciphertext src(*op1);
    SCALE_T in_degree = Scale_degree_from_value(src.Inner().GetScale());
    context_->Rescale(res->Inner(), src.Inner());
    // Cheddar keeps the mathematically exact post-rescale scale, while the ACE
    // runtime models scales as integer powers of the backend base scale.
    // Snap the metadata back to the nearest ACE scale degree so later
    // plaintext additions reuse the same discrete scale convention.
    if (in_degree > 0) {
      res->Inner().SetScale(
          Scale_from_degree(in_degree - 1, Logical_level(*res)));
    }
    res->Clear_zero();
  }

  void Mod_switch(Ciphertext* res, const Ciphertext* op1) {
    if (Is_zero(op1)) {
      *res = *op1;
      if (res->Zero_level() > 1) {
        res->Mark_zero(res->Zero_level() - 1, res->Zero_scale(),
                       res->Zero_slots());
      }
      return;
    }

    int logical_level = Logical_level(*op1);
    FMT_ASSERT(logical_level > 1, "Not enough primes for mod switch");

    CipherInner temp;
    context_->Rescale(temp, op1->Inner());

    Constant restore;
    context_->encoder_.EncodeConstant(
        restore, Map_logical_level(logical_level - 1), 1.0,
        param_->GetRescalePrimeProd(Map_logical_level(logical_level)));
    context_->Mult(res->Inner(), temp, restore);
    res->Inner().SetScale(op1->Inner().GetScale());
    res->Clear_zero();
  }

  void Relin(Ciphertext* res, const Ciphertext* op1) {
    if (Is_zero(op1)) {
      Mark_zero_like(res, op1);
      return;
    }
    if (!op1->Inner().HasRx()) {
      Copy(op1, res);
      return;
    }

    context_->Relinearize(res->Inner(), op1->Inner(),
                          ui_->GetMultiplicationKey());
    res->Clear_zero();
  }

  void Bootstrap(Ciphertext* res, const Ciphertext* op1, int level, int slot) {
    (void)res;
    (void)op1;
    (void)level;
    (void)slot;
    FMT_ASSERT(false,
               "CHEDDAR bootstrap is not supported in the ACE runtime yet");
  }

  void Copy(const Ciphertext* op, Ciphertext* res) {
    if (Is_zero(op)) {
      Mark_zero_like(res, op);
      return;
    }
    *res = *op;
    res->Clear_zero();
  }

  void Zero(Ciphertext* res) {
    res->release();
    res->Mark_zero(input_logical_level_,
                   Scale_from_degree(1, input_logical_level_), full_slots_);
  }

  void Free_ciph(Ciphertext* ct) { ct->release(); }

  void Free_plain(Plaintext* pt) { pt->release(); }

  SCALE_T Scale_degree(const Ciphertext* ct) const {
    return Scale_degree_from_value(Scale_hint(ct));
  }

  LEVEL_T Level_value(const Ciphertext* ct) const {
    return static_cast<LEVEL_T>(Level_hint(ct));
  }

  void Decrypt(const Ciphertext* ct, std::vector<double>& vec) const {
    if (Is_zero(ct)) {
      vec.assign(full_slots_, 0.0);
      return;
    }

    PlainInner plain;
    ui_->Decrypt(plain, ct->Inner());
    Decode_plain(plain, vec);
  }

  void Decode(const Plaintext* pt, std::vector<double>& vec) const {
    Decode_plain(pt->Inner(), vec);
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

    const auto& profile =
        Select_profile(prog_param->_scaling_mod_size, max_logical_level_);
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

    context_ = Context::Create(*param_);
    ui_ = std::make_unique<UI>(context_);

    std::unordered_set<int> prepared_rots;
    for (size_t i = 0; i < prog_param->_num_rot_idx; ++i) {
      int rot = prog_param->_rot_idxs[i];
      // Negative rotations depend on the active ciphertext slot count, so
      // prepare them lazily in Rotate() after normalizing against num_slots.
      if (rot > 0 && prepared_rots.insert(rot).second) {
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
        "cheddar_profile_scale = %d, cheddar_levels = %d\n",
        prog_param->_provider, prog_param->_poly_degree, prog_param->_sec_level,
        prog_param->_mul_depth, prog_param->_input_level,
        prog_param->_first_mod_size, prog_param->_scaling_mod_size,
        prog_param->_num_q_parts, prog_param->_num_rot_idx, profile_scale_bits_,
        max_logical_level_);
  }

  const CheddarProfileSpec& Select_profile(size_t requested_scale_bits,
                                           int required_levels) const {
    const CheddarProfileSpec* best = nullptr;
    int best_score = std::numeric_limits<int>::max();
    for (const auto& profile_ref : kCheddarProfiles) {
      const auto& profile = profile_ref.get();
      // ACE logical level `L` should map to Cheddar level `L`, so the profile
      // needs entries for levels [0, required_levels].
      if (static_cast<int>(profile.level_config.size()) <= required_levels) {
        continue;
      }
      int score = std::abs(profile.log_default_scale -
                           static_cast<int>(requested_scale_bits));
      if (best == nullptr || score < best_score ||
          (score == best_score &&
           profile.log_default_scale > best->log_default_scale)) {
        best = &profile;
        best_score = score;
      }
    }
    FMT_ASSERT(best != nullptr,
               "No CHEDDAR profile can satisfy %d logical levels",
               required_levels);
    return *best;
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
    return param_->NPToLevel(ct.Inner().GetNP());
  }

  int Logical_level(const Plaintext& pt) const {
    return param_->NPToLevel(pt.Inner().GetNP());
  }

  int Level_hint(const Ciphertext* ct) const {
    if (Is_zero(ct)) {
      return ct->Zero_level() > 0 ? ct->Zero_level() : input_logical_level_;
    }
    return Logical_level(*ct);
  }

  double Scale_hint(const Ciphertext* ct) const {
    if (Is_zero(ct)) {
      return ct->Zero_scale() > 0.0 ? ct->Zero_scale()
                                    : Scale_from_degree(1, Level_hint(ct));
    }
    return ct->Inner().GetScale();
  }

  int Slots_hint(const Ciphertext* ct) const {
    if (Is_zero(ct)) {
      return ct->Zero_slots() > 0 ? ct->Zero_slots() : full_slots_;
    }
    return ct->Inner().GetNumSlots() > 0 ? ct->Inner().GetNumSlots()
                                         : full_slots_;
  }

  int Slots_hint(const Plaintext* pt) const {
    return pt->Inner().GetNumSlots() > 0 ? pt->Inner().GetNumSlots()
                                         : full_slots_;
  }

  bool Is_zero(const Ciphertext* ct) const {
    return ct->Is_zero() || ct->size() == 0;
  }

  double Determine_scale(LEVEL_T level) const {
    int cheddar_level = Map_logical_level(level);
    if (cheddar_level <= param_->default_encryption_level_) {
      return param_->GetScale(cheddar_level);
    }
    return param_->GetRescalePrimeProd(cheddar_level);
  }

  double Scale_from_degree(SCALE_T scale_degree, LEVEL_T level) const {
    if (scale_degree == 0) {
      return 1.0;
    }
    return std::pow(Determine_scale(level), static_cast<double>(scale_degree));
  }

  SCALE_T Scale_degree_from_value(double scale) const {
    if (scale <= 0.0 || scale == 1.0) {
      return 0;
    }
    return static_cast<SCALE_T>(
        std::llround(std::log(scale) / std::log(base_scale_)));
  }

  template <typename T>
  void Encode_real_values(PlainInner& pt, const T* input, size_t len,
                          SCALE_T sc_degree, LEVEL_T level) const {
    std::vector<Complex> values = Build_plain_values(input, len);
    context_->encoder_.Encode(pt, Map_logical_level(level),
                              Scale_from_degree(sc_degree, level), values);
  }

  void Encode_mask(PlainInner& pt, double value, size_t len, SCALE_T sc_degree,
                   LEVEL_T level) const {
    std::vector<Complex> values = Build_mask_values(value, len);
    context_->encoder_.Encode(pt, Map_logical_level(level),
                              Scale_from_degree(sc_degree, level), values);
  }

  template <typename T>
  std::vector<Complex> Build_plain_values(const T* input, size_t len) const {
    std::vector<Complex> values(len, Complex(0.0, 0.0));
    for (size_t i = 0; i < len; ++i) {
      values[i] = Complex(static_cast<double>(input[i]), 0.0);
    }
    return values;
  }

  std::vector<Complex> Build_mask_values(double value, size_t len) const {
    return std::vector<Complex>(len, Complex(value, 0.0));
  }

  static int Normalize_rotation_step(int step, int num_slots) {
    FMT_ASSERT(num_slots > 0, "invalid slot count for rotation: %d", num_slots);
    int normalized = step % num_slots;
    if (normalized < 0) {
      normalized += num_slots;
    }
    return normalized;
  }

  void Encode_scalar_constant(Constant& scalar, double value, double scale,
                              int logical_level) const {
    context_->encoder_.EncodeConstant(scalar, logical_level, scale, value);
  }

  void Encrypt_plain(Ciphertext* dst, const PlainInner& plain) const {
    ui_->Encrypt(dst->Inner(), plain);
    dst->Clear_zero();
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
    ui_->Encrypt(ct->Inner(), plain);
    ct->Clear_zero();
  }

  void Mark_zero_like(Ciphertext* dst, const Ciphertext* src) const {
    dst->release();
    dst->Mark_zero(Level_hint(src), Scale_hint(src), Slots_hint(src));
  }

  void Add_scalar_inplace(Ciphertext* ct, double scalar) const {
    Constant encoded;
    Encode_scalar_constant(encoded, scalar, ct->Inner().GetScale(),
                           Logical_level(*ct));
    context_->Add(ct->Inner(), ct->Inner(), encoded);
    ct->Clear_zero();
  }

  void Sub_scalar_inplace(Ciphertext* ct, double scalar) const {
    Constant encoded;
    Encode_scalar_constant(encoded, scalar, ct->Inner().GetScale(),
                           Logical_level(*ct));
    context_->Sub(ct->Inner(), ct->Inner(), encoded);
    ct->Clear_zero();
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
  std::unique_ptr<UI> ui_;
  double base_scale_ = 0.0;
  int profile_scale_bits_ = 0;
  int max_logical_level_ = 0;
  int input_logical_level_ = 0;
  int full_slots_ = 0;
};

}  // namespace

void Prepare_context() {
  Init_rtlib_timing();
  Io_init();
  CHEDDAR_CONTEXT::Init_context();
}

void Finalize_context() {
  CHEDDAR_CONTEXT::Fini_context();
  Io_fini();
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
