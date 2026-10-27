//-*-c++-*- 
//=============================================================================
//
// Copyright (c) Ant Group Co., Ltd
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//=============================================================================

#ifndef FHE_CKKS_FUSION_PASS_H
#define FHE_CKKS_FUSION_PASS_H

#include "air/driver/pass.h"
#include "config.h"
#include "fhe/core/lib_provider.h"

namespace fhe {

namespace driver {
class FHE_COMPILER;
}  // namespace driver

namespace ckks {

class CKKS_FUSION_PASS : public air::driver::PASS<CKKS_CONFIG> {
public:
  CKKS_FUSION_PASS();

  R_CODE Init(driver::FHE_COMPILER* driver);

  R_CODE Pre_run();

  R_CODE Run();

  void Post_run();

  void Fini();

  const char* Name() const { return "CKKS_FUSION"; }

private:
  void Set_driver(driver::FHE_COMPILER* driver) { _driver = driver; }

  driver::FHE_COMPILER* Get_driver() const { return _driver; }

  CKKS_CONFIG& Get_config() { return _config; }

  bool Is_active() const { return _active; }

  driver::FHE_COMPILER* _driver;
  bool                  _active;
  core::PROVIDER        _provider;
};  // CKKS_FUSION_PASS

}  // namespace ckks

}  // namespace fhe

#endif  // FHE_CKKS_FUSION_PASS_H
