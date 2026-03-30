//-*-c++-*-
//=============================================================================
//
// Copyright (c) Ant Group Co., Ltd
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//=============================================================================

#ifndef RTLIB_RT_CHEDDAR_RT_DEF_H
#define RTLIB_RT_CHEDDAR_RT_DEF_H

#include <cstdint>

namespace cheddar {
template <typename word>
class Plaintext;
}

namespace fhe {
namespace rt {
namespace cheddar {
struct CheddarCiphertext;
struct CheddarPlaintext;
}  // namespace cheddar
}  // namespace rt
}  // namespace fhe

// NOLINTBEGIN (readability-identifier-naming)
typedef fhe::rt::cheddar::CheddarCiphertext  CIPHERTEXT;
typedef fhe::rt::cheddar::CheddarCiphertext  CIPHERTEXT3;
typedef fhe::rt::cheddar::CheddarCiphertext* CIPHER;
typedef fhe::rt::cheddar::CheddarCiphertext* CIPHER3;
typedef fhe::rt::cheddar::CheddarPlaintext   PLAINTEXT;
typedef fhe::rt::cheddar::CheddarPlaintext*  PLAIN;
// NOLINTEND (readability-identifier-naming)

#define CIPHER_DEFINED 1
#define PLAIN_DEFINED  1

#endif  // RTLIB_RT_CHEDDAR_RT_DEF_H
