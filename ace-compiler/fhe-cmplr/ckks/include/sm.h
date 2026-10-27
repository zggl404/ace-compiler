//-*-c++-*-
//=============================================================================
//
// Copyright (c) Ant Group Co., Ltd
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//=============================================================================

#ifndef FHE_CKKS_SM_H
#define FHE_CKKS_SM_H

#include "air/driver/driver_ctx.h"
#include "fhe/ckks/config.h"
#include "fhe/core/lower_ctx.h"

namespace air {
namespace base {
class GLOB_SCOPE;
}  // namespace base
}  // namespace air

namespace fhe {
namespace ckks {

class SM {
public:
  using GLOB_SCOPE = air::base::GLOB_SCOPE;
  using LOWER_CTX  = core::LOWER_CTX;

  SM(const air::driver::DRIVER_CTX* driver_ctx, const CKKS_CONFIG* cfg,
     GLOB_SCOPE* glob_scope, LOWER_CTX* lower_ctx);
  ~SM() {}

  R_CODE Perform();
  bool   Applied() const { return _applied; }

private:
  void Update_trace_detail() const;

  GLOB_SCOPE*                    _glob_scope = nullptr;
  LOWER_CTX*                     _lower_ctx  = nullptr;
  const CKKS_CONFIG*             _config     = nullptr;
  const air::driver::DRIVER_CTX* _driver_ctx = nullptr;
  bool                           _applied    = false;
};

}  // namespace ckks
}  // namespace fhe

#endif  // FHE_CKKS_SM_H
