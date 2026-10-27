//-*-c-*- 
//=============================================================================
//
// Copyright (c) Ant Group Co., Ltd
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//=============================================================================

#ifndef RTLIB_RT_HEONGPU_RT_HEONGPU_H
#define RTLIB_RT_HEONGPU_RT_HEONGPU_H

#include "common/rt_api.h"
#include "heongpu_api.h"

inline uint32_t Degree() { return Get_context_params()->_poly_degree; }

inline CIPHERTEXT Get_input_data(const char* name, size_t idx) {
  return Heongpu_get_input_data(name, idx);
}

inline void Set_output_data(const char* name, size_t idx, CIPHER data) {
  Heongpu_set_output_data(name, idx, data);
}

inline void Encode_float(PLAIN plain, float* input, size_t len,
                         SCALE_T sc_degree, LEVEL_T level) {
  Heongpu_encode_float(plain, input, len, sc_degree, level);
}

inline void Encode_double(PLAIN plain, double* input, size_t len,
                          SCALE_T sc_degree, LEVEL_T level) {
  Heongpu_encode_double(plain, input, len, sc_degree, level);
}

inline void Encode_float_cst_lvl(PLAIN plain, float* input, size_t len,
                                 SCALE_T sc_degree, int level) {
  Heongpu_encode_float_cst_lvl(plain, input, len, sc_degree, level);
}

inline void Encode_double_cst_lvl(PLAIN plain, double* input, size_t len,
                                  SCALE_T sc_degree, int level) {
  Heongpu_encode_double_cst_lvl(plain, input, len, sc_degree, level);
}

inline void Encode_float_mask(PLAIN plain, float input, size_t len,
                              SCALE_T sc_degree, LEVEL_T level) {
  Heongpu_encode_float_mask(plain, input, len, sc_degree, level);
}

inline void Encode_double_mask(PLAIN plain, double input, size_t len,
                               SCALE_T sc_degree, LEVEL_T level) {
  Heongpu_encode_double_mask(plain, input, len, sc_degree, level);
}

inline void Encode_float_mask_cst_lvl(PLAIN plain, float input, size_t len,
                                      SCALE_T sc_degree, int level) {
  Heongpu_encode_float_mask_cst_lvl(plain, input, len, sc_degree, level);
}

inline void Encode_double_mask_cst_lvl(PLAIN plain, double input, size_t len,
                                       SCALE_T sc_degree, int level) {
  Heongpu_encode_double_mask_cst_lvl(plain, input, len, sc_degree, level);
}

inline CIPHER Add_ciph(CIPHER res, CIPHER op1, CIPHER op2) {
  Heongpu_add_ciph(res, op1, op2);
  return res;
}

inline CIPHER Sub_ciph(CIPHER res, CIPHER op1, CIPHER op2) {
  Heongpu_sub_ciph(res, op1, op2);
  return res;
}

inline CIPHER Add_plain(CIPHER res, CIPHER op1, PLAIN op2) {
  Heongpu_add_plain(res, op1, op2);
  return res;
}

inline CIPHER Sub_plain(CIPHER res, CIPHER op1, PLAIN op2) {
  Heongpu_sub_plain(res, op1, op2);
  return res;
}

inline CIPHER Add_scalar(CIPHER res, CIPHER op1, double op2) {
  Heongpu_add_scalar(res, op1, op2);
  return res;
}

inline CIPHER Sub_scalar(CIPHER res, CIPHER op1, double op2) {
  Heongpu_sub_scalar(res, op1, op2);
  return res;
}

inline CIPHER Mul_ciph(CIPHER res, CIPHER op1, CIPHER op2) {
  Heongpu_mul_ciph(res, op1, op2);
  return res;
}

inline CIPHER Mul_plain(CIPHER res, CIPHER op1, PLAIN op2) {
  Heongpu_mul_plain(res, op1, op2);
  return res;
}

inline CIPHER Mul_scalar(CIPHER res, CIPHER op1, double op2) {
  Heongpu_mul_scalar(res, op1, op2);
  return res;
}

inline CIPHER Rotate_ciph(CIPHER res, CIPHER op, int step) {
  Heongpu_rotate(res, op, step);
  return res;
}

inline CIPHER Conjugate(CIPHER res, CIPHER op) {
  Heongpu_conjugate(res, op);
  return res;
}

inline CIPHER Rescale_ciph(CIPHER res, CIPHER op) {
  Heongpu_rescale(res, op);
  return res;
}

inline CIPHER Mod_switch(CIPHER res, CIPHER op) {
  Heongpu_mod_switch(res, op);
  return res;
}

inline CIPHER Relin(CIPHER res, CIPHER3 ciph) {
  Heongpu_relin(res, ciph);
  return res;
}

inline CIPHER Bootstrap(CIPHER res, CIPHER op, int level, int slot) {
  Heongpu_bootstrap(res, op, level, slot);
  return res;
}

inline void Copy_ciph(CIPHER res, CIPHER op) {
  if (res != op) {
    Heongpu_copy(res, op);
  }
}

inline void Zero_ciph(CIPHER res) { Heongpu_zero(res); }

inline void Free_ciph(CIPHER res) { Heongpu_free_ciph(res); }

inline void Free_plain(PLAIN res) { Heongpu_free_plain(res); }

inline SCALE_T Sc_degree(CIPHER ct) { return Heongpu_scale(ct); }

inline LEVEL_T Level(CIPHER ct) { return Heongpu_level(ct); }

void Dump_ciph(CIPHER ct, size_t start, size_t len);

void Dump_plain(PLAIN pt, size_t start, size_t len);

void Dump_cipher_msg(const char* name, CIPHER ct, uint32_t len);

void Dump_plain_msg(const char* name, PLAIN pt, uint32_t len);

double* Get_msg(CIPHER ct);

double* Get_msg_from_plain(PLAIN pt);

inline uint32_t Get_ciph_slots(CIPHER ct) { return Degree() / 2; }

inline uint32_t Get_plain_slots(PLAIN pt) { return Degree() / 2; }

bool Within_value_range(CIPHER ciph, double* msg, uint32_t len);

#include "common/rt_validate.h"

#endif  // RTLIB_RT_HEONGPU_RT_HEONGPU_H
