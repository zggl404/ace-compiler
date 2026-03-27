//-*-c-*- 
//=============================================================================
//
// Copyright (c) Ant Group Co., Ltd
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//=============================================================================

#ifndef RTLIB_RT_HEONGPU_HEONGPU_API_H
#define RTLIB_RT_HEONGPU_HEONGPU_API_H

#include <heongpu/heongpu.hpp>

#include "common/tensor.h"
#include "rt_def.h"

typedef uint64_t SCALE_T;
typedef uint64_t LEVEL_T;

#ifdef __cplusplus
extern "C" {
#endif

void       Heongpu_prepare_input(TENSOR* input, const char* name);
void       Heongpu_set_output_data(const char* name, size_t idx, CIPHER data);
CIPHERTEXT Heongpu_get_input_data(const char* name, size_t idx);

void Heongpu_encode_float(PLAIN plain, float* input, size_t len,
                          SCALE_T sc_degree, LEVEL_T level);
void Heongpu_encode_double(PLAIN plain, double* input, size_t len,
                           SCALE_T sc_degree, LEVEL_T level);
void Heongpu_encode_float_cst_lvl(PLAIN plain, float* input, size_t len,
                                  SCALE_T sc_degree, int level);
void Heongpu_encode_double_cst_lvl(PLAIN plain, double* input, size_t len,
                                   SCALE_T sc_degree, int level);
void Heongpu_encode_float_mask(PLAIN plain, float input, size_t len,
                               SCALE_T sc_degree, LEVEL_T level);
void Heongpu_encode_double_mask(PLAIN plain, double input, size_t len,
                                SCALE_T sc_degree, LEVEL_T level);
void Heongpu_encode_float_mask_cst_lvl(PLAIN plain, float input, size_t len,
                                       SCALE_T sc_degree, int level);
void Heongpu_encode_double_mask_cst_lvl(PLAIN plain, double input, size_t len,
                                        SCALE_T sc_degree, int level);

void Heongpu_add_ciph(CIPHER res, CIPHER op1, CIPHER op2);
void Heongpu_sub_ciph(CIPHER res, CIPHER op1, CIPHER op2);
void Heongpu_add_plain(CIPHER res, CIPHER op1, PLAIN op2);
void Heongpu_sub_plain(CIPHER res, CIPHER op1, PLAIN op2);
void Heongpu_add_scalar(CIPHER res, CIPHER op1, double op2);
void Heongpu_sub_scalar(CIPHER res, CIPHER op1, double op2);
void Heongpu_mul_ciph(CIPHER res, CIPHER op1, CIPHER op2);
void Heongpu_mul_plain(CIPHER res, CIPHER op1, PLAIN op2);
void Heongpu_mul_scalar(CIPHER res, CIPHER op1, double op2);
void Heongpu_rotate(CIPHER res, CIPHER op, int step);
void Heongpu_conjugate(CIPHER res, CIPHER op);
void Heongpu_rescale(CIPHER res, CIPHER op);
void Heongpu_mod_switch(CIPHER res, CIPHER op);
void Heongpu_relin(CIPHER res, CIPHER3 op);
void Heongpu_bootstrap(CIPHER res, CIPHER op, int level, int slot);
void Heongpu_copy(CIPHER res, CIPHER op);
void Heongpu_zero(CIPHER res);
void Heongpu_free_ciph(CIPHER res);
void Heongpu_free_plain(PLAIN res);

bool Need_bts();

SCALE_T Heongpu_scale(CIPHER res);
LEVEL_T Heongpu_level(CIPHER res);

#ifdef __cplusplus
}
#endif

#endif  // RTLIB_RT_HEONGPU_HEONGPU_API_H
