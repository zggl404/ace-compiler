//-*-c++-*- 
//=============================================================================
//
// Copyright (c) Ant Group Co., Ltd
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//=============================================================================

#include <algorithm>
#include <cmath>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <unordered_set>
#include <vector>

#include "common/common.h"
#include "common/error.h"
#include "common/io_api.h"
#include "common/rt_api.h"
#include "common/rtlib_timing.h"
#include "rt_heongpu/heongpu_api.h"
#include "rt_heongpu/rt_heongpu.h"

namespace {

constexpr heongpu::Scheme kScheme = heongpu::Scheme::CKKS;

using Ciphertext = heongpu::Ciphertext<kScheme>;
using Plaintext = heongpu::Plaintext<kScheme>;
using Secretkey = heongpu::Secretkey<kScheme>;
using Publickey = heongpu::Publickey<kScheme>;
using Relinkey = heongpu::Relinkey<kScheme>;
using Galoiskey = heongpu::Galoiskey<kScheme>;
using HEContext = heongpu::HEContext<kScheme>;
using HEEncoder = heongpu::HEEncoder<kScheme>;
using HEEncryptor = heongpu::HEEncryptor<kScheme>;
using HEDecryptor = heongpu::HEDecryptor<kScheme>;
using HEKeyGenerator = heongpu::HEKeyGenerator<kScheme>;
using HEArithmeticOperator = heongpu::HEArithmeticOperator<kScheme>;

constexpr int kBootCtoSPiece = 3;
constexpr int kBootStoCPiece = 3;
constexpr int kBootTaylorMin = 6;
constexpr int kBootTaylorMax = 11;
constexpr int kBootEvalModDepth = 8;
constexpr int kBootKeyPrimeCount = 3;

class HEONGPU_CONTEXT {
public:
  static HEONGPU_CONTEXT* Context() {
    IS_TRUE(Instance != nullptr, "instance not initialized");
    return Instance;
  }

  static void Init_context() {
    IS_TRUE(Instance == nullptr, "instance already initialized");
    Instance = new HEONGPU_CONTEXT();
  }

  static void Fini_context() {
    IS_TRUE(Instance != nullptr, "instance not initialized");
    delete Instance;
    Instance = nullptr;
  }

  void Prepare_input(TENSOR* input, const char* name) {
    size_t              len = TENSOR_SIZE(input);
    std::vector<double> vec(input->_vals, input->_vals + len);
    Plaintext           pt(_ctx);
    _encoder->encode(pt, vec, _default_scale);
    Ciphertext* ct = new Ciphertext(_ctx);
    _encryptor->encrypt(*ct, pt);
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
                    LEVEL_T level) {
    Encode_vector(pt, input, len, sc_degree, level);
  }

  void Encode_double(Plaintext* pt, double* input, size_t len, SCALE_T sc_degree,
                     LEVEL_T level) {
    Encode_vector(pt, input, len, sc_degree, level);
  }

  void Encode_float_mask(Plaintext* pt, float input, size_t len,
                         SCALE_T sc_degree, LEVEL_T level) {
    Encode_mask(pt, static_cast<double>(input), len, sc_degree, level);
  }

  void Encode_double_mask(Plaintext* pt, double input, size_t len,
                          SCALE_T sc_degree, LEVEL_T level) {
    Encode_mask(pt, input, len, sc_degree, level);
  }

  void Add(const Ciphertext* op1, const Ciphertext* op2, Ciphertext* res) {
    if (Is_zero(op1) && Is_zero(op2)) {
      Build_zero_ciphertext(res);
      Mark_zero(res);
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
    Align_cipher_depth(lhs, rhs);
    _arith->add(lhs, rhs, *res);
    Clear_zero(res);
  }

  void Sub(const Ciphertext* op1, const Ciphertext* op2, Ciphertext* res) {
    if (Is_zero(op1) && Is_zero(op2)) {
      Build_zero_ciphertext(res);
      Mark_zero(res);
      return;
    }
    if (Is_zero(op2)) {
      Copy(op1, res);
      return;
    }
    if (Is_zero(op1)) {
      Ciphertext tmp(*op2);
      _arith->negate(tmp, *res);
      Clear_zero(res);
      return;
    }

    Ciphertext lhs(*op1);
    Ciphertext rhs(*op2);
    Align_cipher_depth(lhs, rhs);
    _arith->sub(lhs, rhs, *res);
    Clear_zero(res);
  }

  void Add(const Ciphertext* op1, const Plaintext* op2, Ciphertext* res) {
    Plaintext pt(*op2);
    if (Is_zero(op1)) {
      Build_zero_ciphertext(res);
      Align_cipher_level(*res, Current_level(pt));
      _arith->add_plain(*res, pt, *res);
      Clear_zero(res);
      return;
    }

    Ciphertext ct(*op1);
    Align_plain_to_cipher(pt, ct);
    _arith->add_plain(ct, pt, *res);
    Clear_zero(res);
  }

  void Sub(const Ciphertext* op1, const Plaintext* op2, Ciphertext* res) {
    Plaintext pt(*op2);
    if (Is_zero(op1)) {
      Build_zero_ciphertext(res);
      Align_cipher_level(*res, Current_level(pt));
      _arith->sub_plain(*res, pt, *res);
      Clear_zero(res);
      return;
    }

    Ciphertext ct(*op1);
    Align_plain_to_cipher(pt, ct);
    _arith->sub_plain(ct, pt, *res);
    Clear_zero(res);
  }

  void Add(const Ciphertext* op1, double op2, Ciphertext* res) {
    if (Is_zero(op1)) {
      Build_zero_ciphertext(res);
      _arith->add_plain(*res, op2, *res);
      Clear_zero(res);
      return;
    }
    Ciphertext ct(*op1);
    _arith->add_plain(ct, op2, *res);
    Clear_zero(res);
  }

  void Sub(const Ciphertext* op1, double op2, Ciphertext* res) {
    if (Is_zero(op1)) {
      Build_zero_ciphertext(res);
      _arith->sub_plain(*res, op2, *res);
      Clear_zero(res);
      return;
    }
    Ciphertext ct(*op1);
    _arith->sub_plain(ct, op2, *res);
    Clear_zero(res);
  }

  void Mul(const Ciphertext* op1, const Ciphertext* op2, Ciphertext* res) {
    Ciphertext lhs(*op1);
    Ciphertext rhs(*op2);
    Align_cipher_depth(lhs, rhs);
    _arith->multiply(lhs, rhs, *res);
    Clear_zero(res);
  }

  void Mul(const Ciphertext* op1, const Plaintext* op2, Ciphertext* res) {
    Ciphertext ct(*op1);
    Plaintext  pt(*op2);
    Align_plain_to_cipher(pt, ct);
    _arith->multiply_plain(ct, pt, *res);
    Clear_zero(res);
  }

  void Mul(const Ciphertext* op1, double op2, Ciphertext* res) {
    Ciphertext ct(*op1);
    _arith->multiply_plain(ct, op2, *res, ct.scale());
    Clear_zero(res);
  }

  void Rotate(const Ciphertext* op1, int step, Ciphertext* res) {
    if (Is_zero(op1)) {
      Copy(op1, res);
      return;
    }
    Ciphertext ct(*op1);
    _arith->rotate_rows(ct, *res, *_gk, step);
    Clear_zero(res);
  }

  void Conjugate(const Ciphertext* op1, Ciphertext* res) {
    if (Is_zero(op1)) {
      Copy(op1, res);
      return;
    }
    Ciphertext ct(*op1);
    _arith->conjugate(ct, *res, *_gk);
    Clear_zero(res);
  }

  void Rescale(const Ciphertext* op1, Ciphertext* res) {
    if (res != op1) {
      *res = *op1;
    }
    _arith->rescale_inplace(*res);
    Clear_zero(res);
  }

  void Mod_switch(const Ciphertext* op1, Ciphertext* res) {
    if (res != op1) {
      *res = *op1;
    }
    _arith->mod_drop_inplace(*res);
    Clear_zero(res);
  }

  void Relin(const Ciphertext* op1, Ciphertext* res) {
    if (Is_zero(op1)) {
      Copy(op1, res);
      return;
    }
    if (res != op1) {
      *res = *op1;
    }
    _arith->relinearize_inplace(*res, *_rlk);
    Clear_zero(res);
  }

  void Bootstrap(const Ciphertext* op1, Ciphertext* res, int level, int slot) {
    (void)slot;
    FMT_ASSERT(_boot_requested,
               "HEonGPU bootstrap was invoked without bootstrap setup");

    const bool zero_input = Is_zero(op1);
    Ciphertext ct         = zero_input ? _zero_cipher : *op1;
    LEVEL_T    ct_level   = Current_level(ct);
    while (ct_level > 0) {
      _arith->mod_drop_inplace(ct);
      --ct_level;
    }

    Ciphertext boot = _arith->regular_bootstrapping(ct, *_gk, *_rlk);
    if (level > 0) {
      LEVEL_T target_level = static_cast<LEVEL_T>(level);
      FMT_ASSERT(Current_level(boot) >= target_level,
                 "HEonGPU bootstrap result level %" PRIu64
                 " is lower than requested level %" PRIu64,
                 static_cast<uint64_t>(Current_level(boot)),
                 static_cast<uint64_t>(target_level));
      Align_cipher_level(boot, target_level);
    }

    *res = std::move(boot);
    if (zero_input) {
      Mark_zero(res);
    } else {
      Clear_zero(res);
    }
  }

  void Copy(const Ciphertext* op, Ciphertext* res) {
    *res = *op;
    if (Is_zero(op)) {
      Mark_zero(res);
    } else {
      Clear_zero(res);
    }
  }

  void Zero(Ciphertext* res) {
    Build_zero_ciphertext(res);
    Mark_zero(res);
  }

  void Free_ciph(Ciphertext* ct) {
    Clear_zero(ct);
    *ct = Ciphertext(_ctx);
  }

  void Free_plain(Plaintext* pt) { *pt = Plaintext(_ctx); }

  SCALE_T Scale(Ciphertext* ct) const {
    double scale = ct->scale();
    if (scale <= 0.0) {
      return 0;
    }
    return static_cast<SCALE_T>(
        std::llround(std::log2(scale) / static_cast<double>(_scaling_mod_size)));
  }

  LEVEL_T Level(Ciphertext* ct) const {
    return static_cast<LEVEL_T>(ct->level());
  }

  void Decrypt(Ciphertext* ct, std::vector<double>& vec) {
    Plaintext pt(_ctx);
    _decryptor->decrypt(pt, *ct);
    _encoder->decode(vec, pt);
  }

  void Decode(Plaintext* pt, std::vector<double>& vec) {
    _encoder->decode(vec, *pt);
  }

private:
  template <typename T>
  void Encode_vector(Plaintext* pt, T* input, size_t len, SCALE_T sc_degree,
                     LEVEL_T level) {
    std::vector<double> vec(input, input + len);
    *pt = Plaintext(_ctx);
    _encoder->encode(*pt, vec, Scale_from_degree(sc_degree));
    Align_plain_level(*pt, level);
  }

  void Encode_mask(Plaintext* pt, double input, size_t len, SCALE_T sc_degree,
                   LEVEL_T level) {
    std::vector<double> vec(len, input);
    *pt = Plaintext(_ctx);
    _encoder->encode(*pt, vec, Scale_from_degree(sc_degree));
    Align_plain_level(*pt, level);
  }

  void Align_plain_level(Plaintext& pt, LEVEL_T level) {
    LEVEL_T current = Current_level(pt);
    LEVEL_T target  = std::min(level, Max_level());
    while (current > target) {
      _arith->mod_drop_inplace(pt);
      --current;
    }
  }

  void Align_cipher_level(Ciphertext& ct, LEVEL_T level) {
    LEVEL_T current = Current_level(ct);
    LEVEL_T target  = std::min(level, Max_level());
    while (current > target) {
      _arith->mod_drop_inplace(ct);
      --current;
    }
  }

  void Align_plain_to_cipher(Plaintext& pt, const Ciphertext& ct) {
    LEVEL_T pt_level = Current_level(pt);
    LEVEL_T ct_level = Current_level(ct);
    while (pt_level > ct_level) {
      _arith->mod_drop_inplace(pt);
      --pt_level;
    }
    FMT_ASSERT(pt_level == ct_level, "plaintext level below ciphertext level");
  }

  void Align_cipher_depth(Ciphertext& lhs, Ciphertext& rhs) {
    LEVEL_T lhs_level = Current_level(lhs);
    LEVEL_T rhs_level = Current_level(rhs);
    while (lhs_level > rhs_level) {
      _arith->mod_drop_inplace(lhs);
      --lhs_level;
    }
    while (rhs_level > lhs_level) {
      _arith->mod_drop_inplace(rhs);
      --rhs_level;
    }
  }

  void Build_zero_ciphertext(Ciphertext* ct) { *ct = _zero_cipher; }

  bool Is_zero(const Ciphertext* ct) const {
    return _zero_ciphertexts.find(ct) != _zero_ciphertexts.end();
  }

  void Mark_zero(Ciphertext* ct) { _zero_ciphertexts.insert(ct); }

  void Clear_zero(Ciphertext* ct) { _zero_ciphertexts.erase(ct); }

  LEVEL_T Max_level() const {
    return static_cast<LEVEL_T>(_ctx->get_ciphertext_modulus_count() - 1);
  }

  LEVEL_T Current_level(const Ciphertext& ct) const {
    return static_cast<LEVEL_T>(ct.level());
  }

  LEVEL_T Current_level(const Plaintext& pt) const {
    return static_cast<LEVEL_T>(_ctx->get_ciphertext_modulus_count() -
                                (pt.depth() + 1));
  }

  double Scale_from_degree(SCALE_T sc_degree) const {
    uint64_t degree = (sc_degree == 0) ? 1 : sc_degree;
    return std::pow(2.0, static_cast<double>(_scaling_mod_size * degree));
  }

  static double* Copy_message(const std::vector<double>& vec) {
    double* msg = static_cast<double*>(malloc(sizeof(double) * vec.size()));
    std::memcpy(msg, vec.data(), sizeof(double) * vec.size());
    return msg;
  }

  static heongpu::sec_level_type Sec_level(size_t sec_level) {
    switch (sec_level) {
      case 128:
        return heongpu::sec_level_type::sec128;
      case 192:
        return heongpu::sec_level_type::sec192;
      case 256:
        return heongpu::sec_level_type::sec256;
      default:
        return heongpu::sec_level_type::none;
    }
  }

  static void Append_unique(std::vector<int>& dst, int value) {
    if (std::find(dst.begin(), dst.end(), value) == dst.end()) {
      dst.push_back(value);
    }
  }

  static int Bootstrap_taylor_number(size_t q_prime_count) {
    const int max_taylor = static_cast<int>(q_prime_count) - kBootCtoSPiece -
                           kBootEvalModDepth - 1;
    FMT_ASSERT(
        max_taylor >= kBootTaylorMin,
        "HEonGPU bootstrap requires at least %d Q primes, got %zu",
        kBootCtoSPiece + kBootEvalModDepth + kBootTaylorMin + 1,
        q_prime_count);
    return std::min(kBootTaylorMax, max_taylor);
  }

private:
  HEONGPU_CONTEXT(const HEONGPU_CONTEXT&) = delete;
  HEONGPU_CONTEXT& operator=(const HEONGPU_CONTEXT&) = delete;

  HEONGPU_CONTEXT() {
    CKKS_PARAMS* prog_param = Get_context_params();
    FMT_ASSERT(prog_param->_provider == LIB_HEONGPU, "provider is not HEONGPU");

    _slot_count        = prog_param->_poly_degree / 2;
    _scaling_mod_size  = prog_param->_scaling_mod_size;
    _default_scale     = std::pow(2.0, static_cast<double>(_scaling_mod_size));
    _boot_requested    = Need_bts();

    std::vector<int> q_bits;
    std::vector<int> p_bits;
    q_bits.push_back(static_cast<int>(prog_param->_first_mod_size));
    for (uint32_t i = 0; i < prog_param->_mul_depth; ++i) {
      q_bits.push_back(static_cast<int>(prog_param->_scaling_mod_size));
    }
    q_bits.push_back(static_cast<int>(prog_param->_first_mod_size));
    const int p_prime_count = _boot_requested ? kBootKeyPrimeCount : 1;
    for (int i = 0; i < p_prime_count; ++i) {
      p_bits.push_back(static_cast<int>(prog_param->_first_mod_size));
    }

    _ctx = heongpu::GenHEContext<kScheme>(Sec_level(prog_param->_sec_level));
    _ctx->set_poly_modulus_degree(prog_param->_poly_degree);
    _ctx->set_coeff_modulus_bit_sizes(q_bits, p_bits);
    _ctx->generate();

    if (prog_param->_hamming_weight > 0) {
      _sk = std::make_unique<Secretkey>(
          _ctx, static_cast<int>(prog_param->_hamming_weight));
    } else {
      _sk = std::make_unique<Secretkey>(_ctx);
    }
    _pk = std::make_unique<Publickey>(_ctx);
    _rlk = std::make_unique<Relinkey>(_ctx);

    _keygen = std::make_unique<HEKeyGenerator>(_ctx);
    _keygen->generate_secret_key(*_sk);
    _keygen->generate_public_key(*_pk, *_sk);
    _keygen->generate_relin_key(*_rlk, *_sk);

    _encoder = std::make_unique<HEEncoder>(_ctx);
    _encryptor = std::make_unique<HEEncryptor>(_ctx, *_pk);
    _decryptor = std::make_unique<HEDecryptor>(_ctx, *_sk);
    _arith = std::make_unique<HEArithmeticOperator>(_ctx, *_encoder);

    std::vector<int> shifts;
    for (uint32_t i = 0; i < prog_param->_num_rot_idx; ++i) {
      Append_unique(shifts, prog_param->_rot_idxs[i]);
    }
    if (_boot_requested) {
      const int boot_taylor = Bootstrap_taylor_number(q_bits.size());
      heongpu::BootstrappingConfig boot_config(kBootCtoSPiece, kBootStoCPiece,
                                               boot_taylor, true);
      _arith->generate_bootstrapping_params(
          _default_scale, boot_config,
          heongpu::arithmetic_bootstrapping_type::REGULAR_BOOTSTRAPPING);
      for (int rot : _arith->bootstrapping_key_indexs()) {
        Append_unique(shifts, rot);
      }
      std::printf(
          "heongpu bootstrap: q_primes = %zu, p_primes = %zu, CtoS = %d, "
          "StoC = %d, taylor = %d\n",
          q_bits.size(), p_bits.size(), kBootCtoSPiece, kBootStoCPiece,
          boot_taylor);
    }

    if (shifts.empty()) {
      _gk = std::make_unique<Galoiskey>(_ctx);
    } else {
      _gk = std::make_unique<Galoiskey>(_ctx, shifts);
    }
    _keygen->generate_galois_key(*_gk, *_sk);

    std::vector<double> zeros(_slot_count, 0.0);
    Plaintext zero_pt(_ctx);
    _encoder->encode(zero_pt, zeros, _default_scale);
    _zero_cipher = Ciphertext(_ctx);
    _encryptor->encrypt(_zero_cipher, zero_pt);

    std::printf(
        "ckks_param: _provider = %d, _poly_degree = %u, _sec_level = %zu, "
        "mul_depth = %zu, _first_mod_size = %zu, _scaling_mod_size = %zu, "
        "_num_q_parts = %zu, _num_rot_idx = %zu\n",
        prog_param->_provider, prog_param->_poly_degree, prog_param->_sec_level,
        prog_param->_mul_depth, prog_param->_first_mod_size,
        prog_param->_scaling_mod_size, prog_param->_num_q_parts,
        prog_param->_num_rot_idx);
  }

  ~HEONGPU_CONTEXT() = default;

  static HEONGPU_CONTEXT* Instance;

  HEContext                         _ctx;
  std::unique_ptr<Secretkey>        _sk;
  std::unique_ptr<Publickey>        _pk;
  std::unique_ptr<Relinkey>         _rlk;
  std::unique_ptr<Galoiskey>        _gk;
  std::unique_ptr<HEKeyGenerator>   _keygen;
  std::unique_ptr<HEEncoder>        _encoder;
  std::unique_ptr<HEEncryptor>      _encryptor;
  std::unique_ptr<HEDecryptor>      _decryptor;
  std::unique_ptr<HEArithmeticOperator> _arith;
  Ciphertext                        _zero_cipher;
  std::unordered_set<const Ciphertext*> _zero_ciphertexts;
  size_t                            _slot_count;
  uint64_t                          _scaling_mod_size;
  double                            _default_scale;
  bool                              _boot_requested;
};

HEONGPU_CONTEXT* HEONGPU_CONTEXT::Instance = nullptr;

template <typename F>
void Run_or_die(F&& fn) {
  try {
    fn();
  } catch (const std::exception& err) {
    FMT_ASSERT(false, "HEonGPU runtime error: %s", err.what());
  }
}

}  // namespace

void Prepare_context() {
  Init_rtlib_timing();
  Io_init();
  Run_or_die([]() { HEONGPU_CONTEXT::Init_context(); });
}

void Finalize_context() {
  Run_or_die([]() { HEONGPU_CONTEXT::Fini_context(); });
  Io_fini();
}

void Prepare_input(TENSOR* input, const char* name) {
  Run_or_die([&]() { HEONGPU_CONTEXT::Context()->Prepare_input(input, name); });
}

void Prepare_input_dup(TENSOR* input, const char* name) {
  Run_or_die([&]() { HEONGPU_CONTEXT::Context()->Prepare_input(input, name); });
}

double* Handle_output(const char* name) {
  double* result = nullptr;
  Run_or_die([&]() { result = HEONGPU_CONTEXT::Context()->Handle_output(name, 0); });
  return result;
}

void Heongpu_prepare_input(TENSOR* input, const char* name) {
  Prepare_input(input, name);
}

void Heongpu_set_output_data(const char* name, size_t idx, CIPHER data) {
  Run_or_die([&]() { HEONGPU_CONTEXT::Context()->Set_output_data(name, idx, data); });
}

CIPHERTEXT Heongpu_get_input_data(const char* name, size_t idx) {
  CIPHERTEXT result;
  Run_or_die([&]() { result = HEONGPU_CONTEXT::Context()->Get_input_data(name, idx); });
  return result;
}

void Heongpu_encode_float(PLAIN pt, float* input, size_t len, SCALE_T sc_degree,
                          LEVEL_T level) {
  Run_or_die([&]() {
    HEONGPU_CONTEXT::Context()->Encode_float(pt, input, len, sc_degree, level);
  });
}

void Heongpu_encode_double(PLAIN pt, double* input, size_t len,
                           SCALE_T sc_degree, LEVEL_T level) {
  Run_or_die([&]() {
    HEONGPU_CONTEXT::Context()->Encode_double(pt, input, len, sc_degree, level);
  });
}

void Heongpu_encode_float_cst_lvl(PLAIN pt, float* input, size_t len,
                                  SCALE_T sc_degree, int level) {
  Heongpu_encode_float(pt, input, len, sc_degree, static_cast<LEVEL_T>(level));
}

void Heongpu_encode_double_cst_lvl(PLAIN pt, double* input, size_t len,
                                   SCALE_T sc_degree, int level) {
  Heongpu_encode_double(pt, input, len, sc_degree, static_cast<LEVEL_T>(level));
}

void Heongpu_encode_float_mask(PLAIN pt, float input, size_t len,
                               SCALE_T sc_degree, LEVEL_T level) {
  Run_or_die([&]() {
    HEONGPU_CONTEXT::Context()->Encode_float_mask(pt, input, len, sc_degree, level);
  });
}

void Heongpu_encode_double_mask(PLAIN pt, double input, size_t len,
                                SCALE_T sc_degree, LEVEL_T level) {
  Run_or_die([&]() {
    HEONGPU_CONTEXT::Context()->Encode_double_mask(pt, input, len, sc_degree, level);
  });
}

void Heongpu_encode_float_mask_cst_lvl(PLAIN pt, float input, size_t len,
                                       SCALE_T sc_degree, int level) {
  Heongpu_encode_float_mask(pt, input, len, sc_degree,
                            static_cast<LEVEL_T>(level));
}

void Heongpu_encode_double_mask_cst_lvl(PLAIN pt, double input, size_t len,
                                        SCALE_T sc_degree, int level) {
  Heongpu_encode_double_mask(pt, input, len, sc_degree,
                             static_cast<LEVEL_T>(level));
}

void Heongpu_add_ciph(CIPHER res, CIPHER op1, CIPHER op2) {
  Run_or_die([&]() { HEONGPU_CONTEXT::Context()->Add(op1, op2, res); });
}

void Heongpu_sub_ciph(CIPHER res, CIPHER op1, CIPHER op2) {
  Run_or_die([&]() { HEONGPU_CONTEXT::Context()->Sub(op1, op2, res); });
}

void Heongpu_add_plain(CIPHER res, CIPHER op1, PLAIN op2) {
  Run_or_die([&]() { HEONGPU_CONTEXT::Context()->Add(op1, op2, res); });
}

void Heongpu_sub_plain(CIPHER res, CIPHER op1, PLAIN op2) {
  Run_or_die([&]() { HEONGPU_CONTEXT::Context()->Sub(op1, op2, res); });
}

void Heongpu_add_scalar(CIPHER res, CIPHER op1, double op2) {
  Run_or_die([&]() { HEONGPU_CONTEXT::Context()->Add(op1, op2, res); });
}

void Heongpu_sub_scalar(CIPHER res, CIPHER op1, double op2) {
  Run_or_die([&]() { HEONGPU_CONTEXT::Context()->Sub(op1, op2, res); });
}

void Heongpu_mul_ciph(CIPHER res, CIPHER op1, CIPHER op2) {
  Run_or_die([&]() { HEONGPU_CONTEXT::Context()->Mul(op1, op2, res); });
}

void Heongpu_mul_plain(CIPHER res, CIPHER op1, PLAIN op2) {
  Run_or_die([&]() { HEONGPU_CONTEXT::Context()->Mul(op1, op2, res); });
}

void Heongpu_mul_scalar(CIPHER res, CIPHER op1, double op2) {
  Run_or_die([&]() { HEONGPU_CONTEXT::Context()->Mul(op1, op2, res); });
}

void Heongpu_rotate(CIPHER res, CIPHER op, int step) {
  Run_or_die([&]() { HEONGPU_CONTEXT::Context()->Rotate(op, step, res); });
}

void Heongpu_conjugate(CIPHER res, CIPHER op) {
  Run_or_die([&]() { HEONGPU_CONTEXT::Context()->Conjugate(op, res); });
}

void Heongpu_rescale(CIPHER res, CIPHER op) {
  Run_or_die([&]() { HEONGPU_CONTEXT::Context()->Rescale(op, res); });
}

void Heongpu_mod_switch(CIPHER res, CIPHER op) {
  Run_or_die([&]() { HEONGPU_CONTEXT::Context()->Mod_switch(op, res); });
}

void Heongpu_relin(CIPHER res, CIPHER3 op) {
  Run_or_die([&]() { HEONGPU_CONTEXT::Context()->Relin(op, res); });
}

void Heongpu_bootstrap(CIPHER res, CIPHER op, int level, int slot) {
  Run_or_die([&]() { HEONGPU_CONTEXT::Context()->Bootstrap(op, res, level, slot); });
}

void Heongpu_copy(CIPHER res, CIPHER op) {
  Run_or_die([&]() { HEONGPU_CONTEXT::Context()->Copy(op, res); });
}

void Heongpu_zero(CIPHER res) {
  Run_or_die([&]() { HEONGPU_CONTEXT::Context()->Zero(res); });
}

void Heongpu_free_ciph(CIPHER res) {
  Run_or_die([&]() { HEONGPU_CONTEXT::Context()->Free_ciph(res); });
}

void Heongpu_free_plain(PLAIN res) {
  Run_or_die([&]() { HEONGPU_CONTEXT::Context()->Free_plain(res); });
}

SCALE_T Heongpu_scale(CIPHER res) {
  SCALE_T scale = 0;
  Run_or_die([&]() { scale = HEONGPU_CONTEXT::Context()->Scale(res); });
  return scale;
}

LEVEL_T Heongpu_level(CIPHER res) {
  LEVEL_T level = 0;
  Run_or_die([&]() { level = HEONGPU_CONTEXT::Context()->Level(res); });
  return level;
}

void Dump_ciph(CIPHER ct, size_t start, size_t len) {
  std::vector<double> vec;
  Run_or_die([&]() { HEONGPU_CONTEXT::Context()->Decrypt(ct, vec); });
  size_t end = std::min(start + len, vec.size());
  for (size_t idx = start; idx < end; ++idx) {
    std::cout << vec[idx] << " ";
  }
  std::cout << std::endl;
}

void Dump_plain(PLAIN pt, size_t start, size_t len) {
  std::vector<double> vec;
  Run_or_die([&]() { HEONGPU_CONTEXT::Context()->Decode(pt, vec); });
  size_t end = std::min(start + len, vec.size());
  for (size_t idx = start; idx < end; ++idx) {
    std::cout << vec[idx] << " ";
  }
  std::cout << std::endl;
}

void Dump_cipher_msg(const char* name, CIPHER ct, uint32_t len) {
  std::cout << "name = " << name << std::endl;
  Dump_ciph(ct, 0, len);
}

void Dump_plain_msg(const char* name, PLAIN pt, uint32_t len) {
  std::cout << "name = " << name << std::endl;
  Dump_plain(pt, 0, len);
}

double* Get_msg(CIPHER ct) {
  std::vector<double> vec;
  Run_or_die([&]() { HEONGPU_CONTEXT::Context()->Decrypt(ct, vec); });
  double* msg = static_cast<double*>(malloc(sizeof(double) * vec.size()));
  std::memcpy(msg, vec.data(), sizeof(double) * vec.size());
  return msg;
}

double* Get_msg_from_plain(PLAIN pt) {
  std::vector<double> vec;
  Run_or_die([&]() { HEONGPU_CONTEXT::Context()->Decode(pt, vec); });
  double* msg = static_cast<double*>(malloc(sizeof(double) * vec.size()));
  std::memcpy(msg, vec.data(), sizeof(double) * vec.size());
  return msg;
}

bool Within_value_range(CIPHER ciph, double* msg, uint32_t len) {
  (void)ciph;
  (void)msg;
  (void)len;
  FMT_ASSERT(false, "TODO: not implemented in heongpu");
  return false;
}
