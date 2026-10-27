//-*-c-*- 
//=============================================================================
//
// Copyright (c) Ant Group Co., Ltd
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//=============================================================================

#ifndef RTLIB_RT_HEONGPU_RT_DEF_H
#define RTLIB_RT_HEONGPU_RT_DEF_H

#include <heongpu/heongpu.hpp>

// NOLINTBEGIN (readability-identifier-naming)
typedef heongpu::Ciphertext<heongpu::Scheme::CKKS>  CIPHERTEXT;
typedef heongpu::Ciphertext<heongpu::Scheme::CKKS>  CIPHERTEXT3;
typedef heongpu::Ciphertext<heongpu::Scheme::CKKS>* CIPHER;
typedef heongpu::Ciphertext<heongpu::Scheme::CKKS>* CIPHER3;
typedef heongpu::Plaintext<heongpu::Scheme::CKKS>   PLAINTEXT;
typedef heongpu::Plaintext<heongpu::Scheme::CKKS>*  PLAIN;
// NOLINTEND (readability-identifier-naming)

#define CIPHER_DEFINED 1
#define PLAIN_DEFINED  1

#endif  // RTLIB_RT_HEONGPU_RT_DEF_H
