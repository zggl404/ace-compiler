//-*-c++-*- 
//=============================================================================
//
// Copyright (c) Ant Group Co., Ltd
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//=============================================================================

#ifndef RTLIB_RT_CHEDDAR_CHEDDAR_API_H
#define RTLIB_RT_CHEDDAR_CHEDDAR_API_H

#include "common/tensor.h"
#include "rt_def.h"

typedef uint64_t SCALE_T;
typedef uint64_t LEVEL_T;

#ifdef __cplusplus
extern "C" {
#endif

void       Cheddar_prepare_input(TENSOR* input, const char* name);
void       Cheddar_set_output_data(const char* name, size_t idx, CIPHER data);
CIPHERTEXT Cheddar_get_input_data(const char* name, size_t idx);

double* Cheddar_handle_output(const char* name);

void Cheddar_encode_float(PLAIN plain, float* input, size_t len,
                          SCALE_T sc_degree, LEVEL_T level);
void Cheddar_encode_double(PLAIN plain, double* input, size_t len,
                           SCALE_T sc_degree, LEVEL_T level);
void Cheddar_encode_float_cst_lvl(PLAIN plain, float* input, size_t len,
                                  SCALE_T sc_degree, int level);
void Cheddar_encode_double_cst_lvl(PLAIN plain, double* input, size_t len,
                                   SCALE_T sc_degree, int level);
void Cheddar_encode_float_mask(PLAIN plain, float input, size_t len,
                               SCALE_T sc_degree, LEVEL_T level);
void Cheddar_encode_double_mask(PLAIN plain, double input, size_t len,
                                SCALE_T sc_degree, LEVEL_T level);
void Cheddar_encode_float_mask_cst_lvl(PLAIN plain, float input, size_t len,
                                       SCALE_T sc_degree, int level);
void Cheddar_encode_double_mask_cst_lvl(PLAIN plain, double input, size_t len,
                                        SCALE_T sc_degree, int level);
void Cheddar_encrypt_double(CIPHER res, double* input, size_t len,
                            SCALE_T sc_degree, LEVEL_T level);
void Cheddar_app_relu(CIPHER res, CIPHER op, size_t len,
                      LEVEL_T consumed_levels);

void Cheddar_add_ciph(CIPHER res, CIPHER op1, CIPHER op2);
void Cheddar_sub_ciph(CIPHER res, CIPHER op1, CIPHER op2);
void Cheddar_add_plain(CIPHER res, CIPHER op1, PLAIN op2);
void Cheddar_sub_plain(CIPHER res, CIPHER op1, PLAIN op2);
void Cheddar_add_scalar(CIPHER res, CIPHER op1, double op2);
void Cheddar_sub_scalar(CIPHER res, CIPHER op1, double op2);
void Cheddar_mul_ciph(CIPHER res, CIPHER op1, CIPHER op2);
void Cheddar_mul_plain(CIPHER res, CIPHER op1, PLAIN op2);
void Cheddar_mul_scalar(CIPHER res, CIPHER op1, double op2);
void Cheddar_rotate(CIPHER res, CIPHER op, int step);
void Cheddar_conjugate(CIPHER res, CIPHER op);
void Cheddar_rescale(CIPHER res, CIPHER op);
void Cheddar_mod_switch(CIPHER res, CIPHER op);
void Cheddar_level_down(CIPHER res, CIPHER op, int level);
void Cheddar_relin(CIPHER res, CIPHER3 op);
void Cheddar_bootstrap(CIPHER res, CIPHER op, int level, int slot);
void Cheddar_copy(CIPHER res, CIPHER op);
void Cheddar_zero(CIPHER res);
void Cheddar_free_ciph(CIPHER res);
void Cheddar_free_plain(PLAIN res);

bool Need_bts();

SCALE_T Cheddar_scale(CIPHER res);
LEVEL_T Cheddar_level(CIPHER res);

#ifdef __cplusplus
}
#endif

#endif  // RTLIB_RT_CHEDDAR_CHEDDAR_API_H
