//-*-c++-*-
//=============================================================================
//
// Copyright (c) Ant Group Co., Ltd
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//=============================================================================

#ifndef RTLIB_RT_CHEDDAR_RT_CHEDDAR_H
#define RTLIB_RT_CHEDDAR_RT_CHEDDAR_H

#include <cstddef>
#include <cstdint>
#include <utility>
#include <vector>

#include "UserInterface.h"
#include "common/pt_mgr.h"
#include "common/rt_api.h"
#include "common/rtlib_timing.h"
#include "core/DeviceVector.h"
#include "cheddar_api.h"

namespace fhe {
namespace rt {
namespace cheddar {

using Word = uint32_t;
using CipherInner = ::cheddar::Ciphertext<Word>;
using PlainInner = ::cheddar::Plaintext<Word>;

inline void Copy_cipher_inner(CipherInner& dst, const CipherInner& src) {
  dst.RemoveRx();
  dst.ModifyNP(src.GetNP());
  if (src.HasRx()) {
    dst.PrepareRx();
  }
  dst.SetNumSlots(src.GetNumSlots());
  dst.SetScale(src.GetScale());
  ::cheddar::CopyDeviceToDevice(dst.bx_, src.bx_);
  ::cheddar::CopyDeviceToDevice(dst.ax_, src.ax_);
  if (src.HasRx()) {
    ::cheddar::CopyDeviceToDevice(dst.rx_, src.rx_);
  }
}

inline void Copy_plain_inner(PlainInner& dst, const PlainInner& src) {
  dst.ModifyNP(src.GetNP());
  dst.SetNumSlots(src.GetNumSlots());
  dst.SetScale(src.GetScale());
  ::cheddar::CopyDeviceToDevice(dst.mx_, src.mx_);
}

struct CheddarCiphertext {
  CipherInner inner;
  bool        is_zero    = false;
  int         zero_level = 0;
  double      zero_scale = 1.0;
  int         zero_slots = 0;

  CheddarCiphertext() = default;

  CheddarCiphertext(const CheddarCiphertext& other) { *this = other; }

  CheddarCiphertext& operator=(const CheddarCiphertext& other) {
    if (this == &other) {
      return *this;
    }
    is_zero = other.is_zero;
    zero_level = other.zero_level;
    zero_scale = other.zero_scale;
    zero_slots = other.zero_slots;
    Copy_cipher_inner(inner, other.inner);
    return *this;
  }

  CheddarCiphertext(CheddarCiphertext&&) noexcept = default;
  CheddarCiphertext& operator=(CheddarCiphertext&&) noexcept = default;
};

inline size_t Cipher_size(const CheddarCiphertext& ct) {
  return ct.inner.bx_.size() + ct.inner.ax_.size() + ct.inner.rx_.size();
}

struct CheddarPlaintext {
  PlainInner inner;

  CheddarPlaintext() = default;

  CheddarPlaintext(const CheddarPlaintext& other) { *this = other; }

  CheddarPlaintext& operator=(const CheddarPlaintext& other) {
    if (this == &other) {
      return *this;
    }
    Copy_plain_inner(inner, other.inner);
    return *this;
  }

  CheddarPlaintext(CheddarPlaintext&&) noexcept = default;
  CheddarPlaintext& operator=(CheddarPlaintext&&) noexcept = default;
};

}  // namespace cheddar
}  // namespace rt
}  // namespace fhe

inline uint32_t Degree() { return Get_context_params()->_poly_degree; }

inline CIPHERTEXT Get_input_data(const char* name, size_t idx) {
  RTLIB_TM_START(RTM_IO_INPUT, rtm);
  CIPHERTEXT data = Cheddar_get_input_data(name, idx);
  RTLIB_TM_END(RTM_IO_INPUT, rtm);
  return data;
}

inline void Set_output_data(const char* name, size_t idx, CIPHER data) {
  RTLIB_TM_START(RTM_IO_OUTPUT, rtm);
  Cheddar_set_output_data(name, idx, data);
  RTLIB_TM_END(RTM_IO_OUTPUT, rtm);
}

template <typename FN>
inline void Trace_cheddar_rt(uint32_t event, FN fn) {
  RTLIB_TM_START(event, rtm);
  fn();
  RTLIB_TM_END(event, rtm);
}

inline void Encode_float(PLAIN plain, float* input, size_t len,
                         SCALE_T sc_degree, LEVEL_T level) {
  Trace_cheddar_rt(
      RTM_PT_ENCODE_DATA,
      [&]() { Cheddar_encode_float(plain, input, len, sc_degree, level); });
}

inline void Encode_double(PLAIN plain, double* input, size_t len,
                          SCALE_T sc_degree, LEVEL_T level) {
  Trace_cheddar_rt(
      RTM_PT_ENCODE_DATA,
      [&]() { Cheddar_encode_double(plain, input, len, sc_degree, level); });
}

inline void Encode_float_cst_lvl(PLAIN plain, float* input, size_t len,
                                 SCALE_T sc_degree, int level) {
  Trace_cheddar_rt(RTM_PT_ENCODE_DATA, [&]() {
    Cheddar_encode_float_cst_lvl(plain, input, len, sc_degree, level);
  });
}

inline void Encode_double_cst_lvl(PLAIN plain, double* input, size_t len,
                                  SCALE_T sc_degree, int level) {
  Trace_cheddar_rt(RTM_PT_ENCODE_DATA, [&]() {
    Cheddar_encode_double_cst_lvl(plain, input, len, sc_degree, level);
  });
}

inline void Encode_float_mask(PLAIN plain, float input, size_t len,
                              SCALE_T sc_degree, LEVEL_T level) {
  Trace_cheddar_rt(RTM_PT_ENCODE_MASK, [&]() {
    Cheddar_encode_float_mask(plain, input, len, sc_degree, level);
  });
}

inline void Encode_double_mask(PLAIN plain, double input, size_t len,
                               SCALE_T sc_degree, LEVEL_T level) {
  Trace_cheddar_rt(RTM_PT_ENCODE_MASK, [&]() {
    Cheddar_encode_double_mask(plain, input, len, sc_degree, level);
  });
}

inline void Encode_float_mask_cst_lvl(PLAIN plain, float input, size_t len,
                                      SCALE_T sc_degree, int level) {
  Trace_cheddar_rt(RTM_PT_ENCODE_MASK, [&]() {
    Cheddar_encode_float_mask_cst_lvl(plain, input, len, sc_degree, level);
  });
}

inline void Encode_double_mask_cst_lvl(PLAIN plain, double input, size_t len,
                                       SCALE_T sc_degree, int level) {
  Trace_cheddar_rt(RTM_PT_ENCODE_MASK, [&]() {
    Cheddar_encode_double_mask_cst_lvl(plain, input, len, sc_degree, level);
  });
}

template <typename FN>
inline CIPHER Trace_cheddar_fhe(uint32_t event, CIPHER res, FN fn) {
  RTLIB_TM_START(event, rtm);
  fn();
  RTLIB_TM_END(event, rtm);
  return res;
}

inline CIPHER Add_ciph(CIPHER res, CIPHER op1, CIPHER op2) {
  return Trace_cheddar_fhe(static_cast<uint32_t>(fhe::core::RTM_FHE_ADDCC),
                           res, [&]() { Cheddar_add_ciph(res, op1, op2); });
}

inline CIPHER Sub_ciph(CIPHER res, CIPHER op1, CIPHER op2) {
  return Trace_cheddar_fhe(static_cast<uint32_t>(fhe::core::RTM_FHE_ADDCC),
                           res, [&]() { Cheddar_sub_ciph(res, op1, op2); });
}

inline CIPHER Add_plain(CIPHER res, CIPHER op1, PLAIN op2) {
  return Trace_cheddar_fhe(static_cast<uint32_t>(fhe::core::RTM_FHE_ADDCP),
                           res, [&]() { Cheddar_add_plain(res, op1, op2); });
}

inline CIPHER Sub_plain(CIPHER res, CIPHER op1, PLAIN op2) {
  return Trace_cheddar_fhe(static_cast<uint32_t>(fhe::core::RTM_FHE_ADDCP),
                           res, [&]() { Cheddar_sub_plain(res, op1, op2); });
}

inline CIPHER Add_scalar(CIPHER res, CIPHER op1, double op2) {
  return Trace_cheddar_fhe(static_cast<uint32_t>(fhe::core::RTM_FHE_ADDCP),
                           res, [&]() { Cheddar_add_scalar(res, op1, op2); });
}

inline CIPHER Sub_scalar(CIPHER res, CIPHER op1, double op2) {
  return Trace_cheddar_fhe(static_cast<uint32_t>(fhe::core::RTM_FHE_ADDCP),
                           res, [&]() { Cheddar_sub_scalar(res, op1, op2); });
}

inline CIPHER Mul_ciph(CIPHER res, CIPHER op1, CIPHER op2) {
  return Trace_cheddar_fhe(static_cast<uint32_t>(fhe::core::RTM_FHE_MULCC),
                           res, [&]() { Cheddar_mul_ciph(res, op1, op2); });
}

inline CIPHER Mul_plain(CIPHER res, CIPHER op1, PLAIN op2) {
  return Trace_cheddar_fhe(static_cast<uint32_t>(fhe::core::RTM_FHE_MULCP),
                           res, [&]() { Cheddar_mul_plain(res, op1, op2); });
}

inline CIPHER Mul_scalar(CIPHER res, CIPHER op1, double op2) {
  return Trace_cheddar_fhe(static_cast<uint32_t>(fhe::core::RTM_FHE_MULCP),
                           res, [&]() { Cheddar_mul_scalar(res, op1, op2); });
}

inline CIPHER Rotate_ciph(CIPHER res, CIPHER op, int step) {
  return Trace_cheddar_fhe(static_cast<uint32_t>(fhe::core::RTM_FHE_ROTATE),
                           res, [&]() { Cheddar_rotate(res, op, step); });
}

inline CIPHER Conjugate(CIPHER res, CIPHER op) {
  return Trace_cheddar_fhe(static_cast<uint32_t>(fhe::core::RTM_FHE_ROTATE),
                           res, [&]() { Cheddar_conjugate(res, op); });
}

inline CIPHER Rescale_ciph(CIPHER res, CIPHER op) {
  return Trace_cheddar_fhe(static_cast<uint32_t>(fhe::core::RTM_FHE_RESCALE),
                           res, [&]() { Cheddar_rescale(res, op); });
}

inline CIPHER Mod_switch(CIPHER res, CIPHER op) {
  return Trace_cheddar_fhe(
      static_cast<uint32_t>(fhe::core::RTM_FHE_MODSWITCH), res,
      [&]() { Cheddar_mod_switch(res, op); });
}

inline CIPHER Level_down_ciph(CIPHER res, CIPHER op, int level) {
  return Trace_cheddar_fhe(
      static_cast<uint32_t>(fhe::core::RTM_FHE_MODSWITCH), res,
      [&]() { Cheddar_level_down(res, op, level); });
}

inline CIPHER Relin(CIPHER res, CIPHER3 ciph) {
  return Trace_cheddar_fhe(static_cast<uint32_t>(fhe::core::RTM_FHE_RELIN),
                           res, [&]() { Cheddar_relin(res, ciph); });
}

inline CIPHER Bootstrap(CIPHER res, CIPHER op, int level, int slot) {
  return Trace_cheddar_fhe(
      static_cast<uint32_t>(fhe::core::RTM_FHE_BOOTSTRAP), res,
      [&]() { Cheddar_bootstrap(res, op, level, slot); });
}

inline CIPHER Bootstrap_with_relu(CIPHER res, CIPHER op, int level, int slot,
                                  double relu_value_range = 1.0) {
  return Trace_cheddar_fhe(
      static_cast<uint32_t>(fhe::core::RTM_FHE_BOOTSTRAP), res,
      [&]() {
        Cheddar_bootstrap_with_relu(res, op, level, slot, relu_value_range);
      });
}

inline void Copy_ciph(CIPHER res, CIPHER op) {
  if (res != op) {
    Trace_cheddar_rt(RTM_CT_COPY, [&]() { Cheddar_copy(res, op); });
  }
}

inline void Zero_ciph(CIPHER res) {
  Trace_cheddar_rt(RTM_CT_ZERO, [&]() { Cheddar_zero(res); });
}

inline void Free_ciph(CIPHER res) {
  Trace_cheddar_rt(RTM_CT_FREE, [&]() { Cheddar_free_ciph(res); });
}

inline void Free_plain(PLAIN res) {
  Trace_cheddar_rt(RTM_PT_FREE, [&]() { Cheddar_free_plain(res); });
}

inline void Free_ciph_array(CIPHER3 res, size_t size) {
  for (size_t i = 0; i < size; ++i) {
    Free_ciph(&res[i]);
  }
}

inline SCALE_T Sc_degree(CIPHER ct) { return Cheddar_scale(ct); }

inline LEVEL_T Level(CIPHER ct) { return Cheddar_level(ct); }

inline double Exact_scale(CIPHER ct) {
  return ct->is_zero ? ct->zero_scale : ct->inner.GetScale();
}

inline uint32_t Exact_slots(CIPHER ct) {
  int slots = ct->is_zero ? ct->zero_slots : ct->inner.GetNumSlots();
  return slots > 0 ? static_cast<uint32_t>(slots) : Degree() / 2;
}

inline uint32_t Exact_level(CIPHER ct) {
  return ct->is_zero ? static_cast<uint32_t>(ct->zero_level)
                       : static_cast<uint32_t>(Level(ct));
}

namespace fhe {
namespace rt {
namespace cheddar {
namespace detail {

template <typename... Steps>
inline std::vector<int> Collect_steps(Steps... steps) {
  return std::vector<int>{static_cast<int>(steps)...};
}

inline void Collect_step_plain_pairs(std::vector<int>&, std::vector<PLAIN>&) {}

template <typename Step, typename... Rest>
inline void Collect_step_plain_pairs(std::vector<int>& steps,
                                     std::vector<PLAIN>& plains, Step step,
                                     PLAIN plain, Rest... rest) {
  steps.push_back(static_cast<int>(step));
  plains.push_back(plain);
  Collect_step_plain_pairs(steps, plains, rest...);
}

inline std::vector<PLAIN> Collect_plain_refs(std::vector<PLAINTEXT>& plains) {
  std::vector<PLAIN> refs(plains.size());
  for (size_t idx = 0; idx < plains.size(); ++idx) {
    refs[idx] = &plains[idx];
  }
  return refs;
}

}  // namespace detail
}  // namespace cheddar
}  // namespace rt
}  // namespace fhe

inline CIPHER Mul_plain_rescale(CIPHER res, CIPHER op1, PLAIN op2) {
  Mul_plain(res, op1, op2);
  return Rescale_ciph(res, res);
}

template <typename... Steps>
inline CIPHER Rotate_add_reduce(CIPHER res, CIPHER op, uint32_t step_count,
                                uint32_t rotate_self, Steps... steps) {
  std::vector<int> step_values =
      fhe::rt::cheddar::detail::Collect_steps(steps...);
  Cheddar_rotate_add_reduce(res, op, static_cast<uint32_t>(step_values.size()),
                            rotate_self, step_values.data());
  (void)step_count;
  return res;
}

template <typename Step, typename... Rest>
inline CIPHER Rotate_mul_sum(CIPHER res, CIPHER op, uint32_t term_count,
                             uint32_t post_rescale, Step step0, PLAIN plain0,
                             Rest... rest) {
  std::vector<int>   steps;
  std::vector<PLAIN> plains;
  fhe::rt::cheddar::detail::Collect_step_plain_pairs(steps, plains, step0,
                                                     plain0, rest...);
  Cheddar_rotate_mul_sum(res, op, static_cast<uint32_t>(steps.size()),
                         post_rescale, plains.data(), steps.data());
  (void)term_count;
  return res;
}

template <typename... Steps>
inline CIPHER Rotate_mul_sum(CIPHER res, CIPHER op, uint32_t term_count,
                             uint32_t post_rescale, const float* plain_data,
                             size_t plain_len, SCALE_T scale, LEVEL_T level,
                             Steps... steps) {
  std::vector<int> step_values =
      fhe::rt::cheddar::detail::Collect_steps(steps...);
  std::vector<PLAINTEXT> plain_storage(step_values.size());
  std::vector<PLAIN>     plain_refs =
      fhe::rt::cheddar::detail::Collect_plain_refs(plain_storage);
  for (size_t idx = 0; idx < step_values.size(); ++idx) {
    Encode_float(plain_refs[idx],
                 const_cast<float*>(plain_data + idx * plain_len), plain_len,
                 scale, level);
  }
  Cheddar_rotate_mul_sum(res, op, static_cast<uint32_t>(step_values.size()),
                         post_rescale, plain_refs.data(), step_values.data());
  (void)term_count;
  return res;
}

template <typename... Steps>
inline CIPHER Rotate_mul_sum(CIPHER res, CIPHER op, uint32_t term_count,
                             uint32_t post_rescale, uint64_t plain_base,
                             size_t plain_len, SCALE_T scale, LEVEL_T level,
                             Steps... steps) {
  std::vector<int> step_values =
      fhe::rt::cheddar::detail::Collect_steps(steps...);
  std::vector<PLAINTEXT> plain_storage(step_values.size());
  std::vector<PLAIN>     plain_refs =
      fhe::rt::cheddar::detail::Collect_plain_refs(plain_storage);
  for (size_t idx = 0; idx < step_values.size(); ++idx) {
    Pt_from_msg(plain_refs[idx], static_cast<uint32_t>(plain_base + idx),
                plain_len, scale, level);
  }
  Cheddar_rotate_mul_sum(res, op, static_cast<uint32_t>(step_values.size()),
                         post_rescale, plain_refs.data(), step_values.data());
  (void)term_count;
  return res;
}

template <typename... Args>
inline CIPHER Linear_transform(CIPHER res, CIPHER op, uint32_t term_count,
                               uint32_t post_rescale, Args... args) {
  return Rotate_mul_sum(res, op, term_count, post_rescale, args...);
}

template <typename... Steps>
inline void Blocking_rotate(CIPHER res, CIPHER op, uint32_t step_count,
                            Steps... steps) {
  std::vector<int> step_values =
      fhe::rt::cheddar::detail::Collect_steps(steps...);
  Cheddar_blocking_rotate(res, op, static_cast<uint32_t>(step_values.size()),
                          step_values.data());
  (void)step_count;
}

template <typename... Steps>
inline void Block_rotate_mul_sum(CIPHER res, CIPHER op, uint32_t block_count,
                                 uint32_t grid_count, int grid_shift,
                                 uint32_t post_rescale, const float* plain_data,
                                 size_t plain_len, SCALE_T scale,
                                 LEVEL_T level, Steps... steps) {
  std::vector<int> bank_steps =
      fhe::rt::cheddar::detail::Collect_steps(steps...);
  Cheddar_block_rotate_mul_sum_float(
      res, op, static_cast<uint32_t>(bank_steps.size()), grid_count, grid_shift,
      post_rescale, plain_data, plain_len, scale, level, bank_steps.data());
  (void)block_count;
}

template <typename... Steps>
inline void Block_rotate_mul_sum(CIPHER res, CIPHER op, uint32_t block_count,
                                 uint32_t grid_count, int grid_shift,
                                 uint32_t post_rescale, uint64_t plain_base,
                                 size_t plain_len, SCALE_T scale,
                                 LEVEL_T level, Steps... steps) {
  std::vector<int> bank_steps =
      fhe::rt::cheddar::detail::Collect_steps(steps...);
  Cheddar_block_rotate_mul_sum_msg(
      res, op, static_cast<uint32_t>(bank_steps.size()), grid_count, grid_shift,
      post_rescale, plain_base, plain_len, scale, level, bank_steps.data());
  (void)block_count;
}

void Dump_ciph(CIPHER ct, size_t start, size_t len);

void Dump_plain(PLAIN pt, size_t start, size_t len);

void Dump_cipher_msg(const char* name, CIPHER ct, uint32_t len);

void Dump_plain_msg(const char* name, PLAIN pt, uint32_t len);

double* Get_msg(CIPHER ct);

double* Get_msg_from_plain(PLAIN pt);

inline uint32_t Get_ciph_slots(CIPHER ct) {
  (void)ct;
  return Degree() / 2;
}

inline uint32_t Get_plain_slots(PLAIN pt) {
  (void)pt;
  return Degree() / 2;
}

bool Within_value_range(CIPHER ciph, double* msg, uint32_t len);

#include "common/rt_validate.h"

#endif  // RTLIB_RT_CHEDDAR_RT_CHEDDAR_H
