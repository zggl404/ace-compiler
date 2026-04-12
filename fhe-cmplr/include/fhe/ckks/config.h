//-*-c++-*-
//=============================================================================
//
// Copyright (c) Ant Group Co., Ltd
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//=============================================================================

#ifndef FHE_CKKS_CONFIG_H
#define FHE_CKKS_CONFIG_H

#include <algorithm>

#include "air/driver/common_config.h"
#include "air/driver/driver_ctx.h"
#include "air/util/debug.h"
#include "fhe/ckks/option_config.h"

namespace fhe {
namespace ckks {

enum TRACE_DETAIL : uint64_t {
  TD_CKKS_SCALE_MGT          = 0x1,
  TD_CKKS_LEVEL_MGT          = 0x2,
  TD_IR_BEFORE_SSA           = 0x4,
  TD_IR_AFTER_SSA_INSERT_PHI = 0x8,
  TD_IR_AFTER_SSA            = 0x10,
  TD_RESBM_MIN_CUT           = 0x20,
  TD_RESBM_SCALE_MGR         = 0x40,
  TD_RESBM_RS_INSERT         = 0x80,
  TD_RESBM_BTS_INSERT        = 0x100,
  TD_RESBM                   = 0x200,
  TD_SBM_PLAN                = 0x400,
  TD_RT_VAL                  = 0x800,
};
#define DEFAULT_MAX_BTS_LEV 16
#define DEFAULT_MAX_BTS_CNT 3
#define DEFAULT_MIN_BTS_LEV 5

struct CKKS_CONFIG : public fhe::ckks::CKKS_OPTION_CONFIG {
public:
  CKKS_CONFIG(void) {}

  uint32_t Bootstrap_input_level() const {
    return std::max<uint32_t>(1, this->Bootstrap_input_lvl());
  }

  uint32_t Bootstrap_level_reserve() const {
    return Bootstrap_input_level() - 1;
  }

  uint32_t Bootstrap_consumable_level(uint32_t raw_level) const {
    uint32_t reserve = Bootstrap_level_reserve();
    return raw_level > reserve ? raw_level - reserve : 0;
  }

  uint32_t Effective_bootstrap_mul_depth(uint32_t raw_depth) const {
    return Bootstrap_consumable_level(raw_depth);
  }
};

}  // namespace ckks
}  // namespace fhe

#endif  // FHE_CKKS_CONFIG_H
