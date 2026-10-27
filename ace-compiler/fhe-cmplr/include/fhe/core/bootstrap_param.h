//-*-c++-*-
//=============================================================================
//
// Copyright (c) Ant Group Co., Ltd
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//=============================================================================

#ifndef FHE_CORE_BOOTSTRAP_PARAM_H
#define FHE_CORE_BOOTSTRAP_PARAM_H

#include <cstdint>

namespace fhe {
namespace core {

enum class EVAL_MOD_MODE : uint32_t {
  LEGACY        = 0,
  ARCSINE       = 1,
  RBOOT_ARCSINE = 2,
};

//! High-level bootstrap requirements preserved from CKKS lowering to codegen.
//! Backend runtimes use these values to invoke their own parameter planners.
struct BOOTSTRAP_PARAM {
  uint32_t      _word_bits             = 32;
  EVAL_MOD_MODE _eval_mod_mode         = EVAL_MOD_MODE::LEGACY;
  uint32_t      _normal_level          = 0;
  uint32_t      _num_cts_levels        = 0;
  uint32_t      _num_evalmod_levels    = 0;
  uint32_t      _num_stc_levels        = 0;
  uint32_t      _log_evalmod_scale     = 0;
  uint32_t      _log_message_ratio     = 5;
  uint32_t      _sparse_hamming_weight = 32;
};

}  // namespace core
}  // namespace fhe

#endif  // FHE_CORE_BOOTSTRAP_PARAM_H
