//-*-c++-*-
//=============================================================================
//
// Copyright (c) Ant Group Co., Ltd
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//=============================================================================

#ifndef FHE_CKKS_GPU_FUSION_PASS_H
#define FHE_CKKS_GPU_FUSION_PASS_H

#include <cstdint>
#include <iosfwd>

#include "air/base/st_decl.h"

namespace fhe {

namespace core {
class LOWER_CTX;
}  // namespace core

namespace ckks {

struct GPU_FUSION_STATS {
  uint64_t _mul_plain_add        = 0;
  uint64_t _rotate_add           = 0;
  uint64_t _rotate_mul_plain_add = 0;
  uint64_t _rotate_many          = 0;
  uint64_t _copy_elim            = 0;
  uint64_t _fallback             = 0;
};

GPU_FUSION_STATS Run_gpu_fusion(air::base::GLOB_SCOPE* glob,
                                const core::LOWER_CTX& lower_ctx,
                                bool runtime_supported);

void Print_gpu_fusion_stats(const GPU_FUSION_STATS& stats,
                            bool runtime_supported, std::ostream& os);

}  // namespace ckks

}  // namespace fhe

#endif  // FHE_CKKS_GPU_FUSION_PASS_H
