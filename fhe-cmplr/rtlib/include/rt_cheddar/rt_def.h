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
#include <memory>

#include "UserInterface.h"
#include "core/DeviceVector.h"

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

class CheddarCiphertext {
public:
  CheddarCiphertext()
      : inner_(std::make_unique<CipherInner>()),
        is_zero_(false),
        zero_level_(0),
        zero_scale_(1.0),
        zero_slots_(0) {}

  CheddarCiphertext(const CheddarCiphertext& other) : CheddarCiphertext() {
    *this = other;
  }

  CheddarCiphertext& operator=(const CheddarCiphertext& other) {
    if (this == &other) {
      return *this;
    }
    is_zero_ = other.is_zero_;
    zero_level_ = other.zero_level_;
    zero_scale_ = other.zero_scale_;
    zero_slots_ = other.zero_slots_;
    Copy_cipher_inner(*inner_, *other.inner_);
    return *this;
  }

  CheddarCiphertext(CheddarCiphertext&&) noexcept = default;
  CheddarCiphertext& operator=(CheddarCiphertext&&) noexcept = default;

  CipherInner& Inner() { return *inner_; }
  const CipherInner& Inner() const { return *inner_; }

  bool Is_zero() const { return is_zero_; }
  void Mark_zero(int logical_level, double scale, int num_slots) {
    is_zero_ = true;
    zero_level_ = logical_level;
    zero_scale_ = scale;
    zero_slots_ = num_slots;
  }
  void Clear_zero() { is_zero_ = false; }

  int Zero_level() const { return zero_level_; }
  double Zero_scale() const { return zero_scale_; }
  int Zero_slots() const { return zero_slots_; }

  size_t size() const {
    return inner_->bx_.size() + inner_->ax_.size() + inner_->rx_.size();
  }

  void release() {
    inner_ = std::make_unique<CipherInner>();
    is_zero_ = false;
    zero_level_ = 0;
    zero_scale_ = 1.0;
    zero_slots_ = 0;
  }

private:
  std::unique_ptr<CipherInner> inner_;
  bool is_zero_;
  int zero_level_;
  double zero_scale_;
  int zero_slots_;
};

class CheddarPlaintext {
public:
  CheddarPlaintext() : inner_(std::make_unique<PlainInner>()) {}

  CheddarPlaintext(const CheddarPlaintext& other) : CheddarPlaintext() {
    *this = other;
  }

  CheddarPlaintext& operator=(const CheddarPlaintext& other) {
    if (this == &other) {
      return *this;
    }
    Copy_plain_inner(*inner_, *other.inner_);
    return *this;
  }

  CheddarPlaintext(CheddarPlaintext&&) noexcept = default;
  CheddarPlaintext& operator=(CheddarPlaintext&&) noexcept = default;

  PlainInner& Inner() { return *inner_; }
  const PlainInner& Inner() const { return *inner_; }

  size_t size() const { return inner_->mx_.size(); }

  void release() { inner_ = std::make_unique<PlainInner>(); }

private:
  std::unique_ptr<PlainInner> inner_;
};

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
