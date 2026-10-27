//-*-c++-*-
//=============================================================================
//
// Copyright (c) Ant Group Co., Ltd
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//=============================================================================

#include <algorithm>
#include <cstdint>
#include <string>

#include "air/base/container.h"
#include "air/base/st.h"
#include "air/base/visitor.h"
#include "air/core/handler.h"
#include "air/opt/ssa_build.h"
#include "air/opt/ssa_container.h"
#include "air/util/error.h"
#include "ckks_stats.h"
#include "fhe/ckks/ckks_gen.h"
#include "fhe/ckks/sihe2ckks_lower.h"
#include "fhe/core/ctx_param_ana.h"
#include "fhe/sihe/sihe_handler.h"
#include "resbm.h"
#include "rt_validate_scale_level.h"
#include "scale_manager.h"
#include "sm.h"

using namespace air::base;

namespace fhe {
namespace ckks {

namespace {

core::EVAL_MOD_MODE Parse_eval_mod_mode(const std::string& value) {
  if (value == "legacy") {
    return core::EVAL_MOD_MODE::LEGACY;
  }
  if (value == "arcsine") {
    return core::EVAL_MOD_MODE::ARCSINE;
  }
  if (value == "rboot_arcsine") {
    return core::EVAL_MOD_MODE::RBOOT_ARCSINE;
  }
  AIR_ASSERT_MSG(false,
                 "unsupported bootstrap EvalMod mode: %s; expected legacy, "
                 "arcsine, or rboot_arcsine",
                 value.c_str());
  return core::EVAL_MOD_MODE::LEGACY;
}

uint32_t Positive_or_default(int64_t value, uint32_t default_value,
                             const char* name) {
  AIR_ASSERT_MSG(value >= 0, "%s must be non-negative", name);
  return value == 0 ? default_value : static_cast<uint32_t>(value);
}

core::BOOTSTRAP_PARAM Build_bootstrap_param(const CKKS_CONFIG& config,
                                            const core::CTX_PARAM& ctx_param) {
  core::BOOTSTRAP_PARAM result;
  int64_t word_bits = config.Cheddar_word_bits();
  AIR_ASSERT_MSG(word_bits == 32 || word_bits == 64,
                 "cheddar_word_bits must be 32 or 64, got %ld",
                 static_cast<long>(word_bits));
  result._word_bits = static_cast<uint32_t>(word_bits);
  result._eval_mod_mode =
      Parse_eval_mod_mode(config.Bootstrap_evalmod_mode());

  uint32_t default_normal_level = 20;
  uint32_t default_cts_levels = 4;
  uint32_t default_evalmod_levels = 8;
  switch (result._eval_mod_mode) {
    case core::EVAL_MOD_MODE::LEGACY:
      break;
    case core::EVAL_MOD_MODE::ARCSINE:
      default_normal_level = 14;
      default_cts_levels = 3;
      default_evalmod_levels = 14;
      break;
    case core::EVAL_MOD_MODE::RBOOT_ARCSINE:
      default_normal_level = 11;
      default_evalmod_levels = 16;
      break;
  }

  result._num_cts_levels = Positive_or_default(
      config.Bootstrap_cts_lvl(), default_cts_levels,
      "bootstrap_cts_lvl");
  result._num_evalmod_levels = Positive_or_default(
      config.Bootstrap_evalmod_lvl(), default_evalmod_levels,
      "bootstrap_evalmod_lvl");
  result._num_stc_levels = Positive_or_default(
      config.Bootstrap_stc_lvl(), 3, "bootstrap_stc_lvl");
  result._log_evalmod_scale = Positive_or_default(
      config.Bootstrap_evalmod_scale(), 58,
      "bootstrap_evalmod_scale");
  result._log_message_ratio = Positive_or_default(
      config.Bootstrap_log_message_ratio(), 5,
      "bootstrap_log_message_ratio");
  result._sparse_hamming_weight = Positive_or_default(
      config.Bootstrap_sparse_hamming_weight(), 32,
      "bootstrap_sparse_hamming_weight");

  uint32_t mul_level = ctx_param.Get_mul_level();
  AIR_ASSERT_MSG(mul_level >= 1, "mul_level must be at least 1");
  uint32_t mul_depth = mul_level - 1;
  uint32_t required_level =
      ctx_param.Get_input_level() == 0
          ? mul_depth + 1
          : std::max(ctx_param.Get_input_level(), mul_depth);
  uint32_t bootstrap_levels =
      result._num_cts_levels + result._num_evalmod_levels;
  uint32_t minimum_normal_level =
      required_level > bootstrap_levels ? required_level - bootstrap_levels
                                         : 0;
  minimum_normal_level =
      std::max(minimum_normal_level, result._num_stc_levels);
  uint32_t requested_normal_level = Positive_or_default(
      config.Bootstrap_normal_lvl(), default_normal_level,
      "bootstrap_normal_lvl");
  result._normal_level =
      std::max(requested_normal_level, minimum_normal_level);
  return result;
}

}  // namespace

GLOB_SCOPE* Ckks_driver(GLOB_SCOPE* glob, core::LOWER_CTX* lower_ctx,
                        const air::driver::DRIVER_CTX* driver_ctx,
                        const CKKS_CONFIG*             config) {
  GLOB_SCOPE* new_glob = new GLOB_SCOPE(glob->Id(), true);
  AIR_ASSERT(new_glob != nullptr);
  new_glob->Clone(*glob, true);

  // update hamming_weight of CTX_PARAMS with option
  lower_ctx->Get_ctx_param().Set_hamming_weight(config->Hamming_weight());

  SIHE2CKKS_LOWER sihe2ckks_lower(new_glob, lower_ctx, config);
  if (config->Rgn_scl_bts_mng() || config->Rgn_bts_mng()) {
    // 1. lower SIHE to CKKS domain
    for (GLOB_SCOPE::FUNC_SCOPE_ITER it = glob->Begin_func_scope();
         it != glob->End_func_scope(); ++it) {
      FUNC_SCOPE* func      = &(*it);
      FUNC_SCOPE* ckks_func = &sihe2ckks_lower.Lower_server_func(func);
    }
    // 2. perform modular level pass RESBM to insert required scale/level
    // management operations, like bootstrap/rescale/modswitch
    RESBM resbm(driver_ctx, config, new_glob, lower_ctx);
    resbm.Perform();
    // 3. perform other function level pass
    for (GLOB_SCOPE::FUNC_SCOPE_ITER it = new_glob->Begin_func_scope();
         it != new_glob->End_func_scope(); ++it) {
      FUNC_SCOPE*   ckks_func = &(*it);
      SCALE_MANAGER scale_mngr(driver_ctx, config, ckks_func, lower_ctx);
      scale_mngr.Run();
      core::CTX_PARAM_ANA ctx_param_ana(ckks_func, lower_ctx, driver_ctx,
                                        config);
      ctx_param_ana.Run();
    }
  } else if (config->Rgn_scl_mng()) {
    for (GLOB_SCOPE::FUNC_SCOPE_ITER it = glob->Begin_func_scope();
         it != glob->End_func_scope(); ++it) {
      FUNC_SCOPE* func      = &(*it);
      FUNC_SCOPE* ckks_func = &sihe2ckks_lower.Lower_server_func(func);
    }

    SM sm(driver_ctx, config, new_glob, lower_ctx);
    sm.Perform();

    for (GLOB_SCOPE::FUNC_SCOPE_ITER it = new_glob->Begin_func_scope();
         it != new_glob->End_func_scope(); ++it) {
      FUNC_SCOPE* ckks_func = &(*it);
      CKKS_CONFIG sm_scale_cfg = *config;
      if (sm.Applied()) {
        sm_scale_cfg._rgn_scl_bts_mng = true;
      }
      SCALE_MANAGER scale_mngr(driver_ctx, &sm_scale_cfg, ckks_func, lower_ctx);
      scale_mngr.Run();
      core::CTX_PARAM_ANA ctx_param_ana(ckks_func, lower_ctx, driver_ctx,
                                        config);
      ctx_param_ana.Run();
    }
  } else {
    for (GLOB_SCOPE::FUNC_SCOPE_ITER it = glob->Begin_func_scope();
         it != glob->End_func_scope(); ++it) {
      FUNC_SCOPE* func      = &(*it);
      FUNC_SCOPE* ckks_func = &sihe2ckks_lower.Lower_server_func(func);

      SCALE_MANAGER scale_mngr(driver_ctx, config, ckks_func, lower_ctx);
      scale_mngr.Run();

      core::CTX_PARAM_ANA ctx_param_ana(ckks_func, lower_ctx, driver_ctx,
                                        config);
      ctx_param_ana.Run();
    }
  }
  delete glob;

  if (config->Trace_stat() || config->Per_op_trace_stat()) {
    CKKS_STATS stats(*new_glob, *lower_ctx, config->Per_op_trace_stat());
    typedef air::base::OP_STATS_CTX<CKKS_STATS> STATS_CTX;
    STATS_CTX                                   stats_ctx(stats);
    for (GLOB_SCOPE::FUNC_SCOPE_ITER it = new_glob->Begin_func_scope();
         it != new_glob->End_func_scope(); ++it) {
      FUNC_SCOPE*                   func = &(*it);
      air::base::VISITOR<STATS_CTX> trav(stats_ctx);
      trav.Visit<void>(func->Container().Entry_node());
    }
    stats.Fixup_call_stats();
    stats.Print(driver_ctx->Tstream());
  }

  if (config->Rt_val_scl_lvl()) {
    RT_VAL_SCL_LVL val_bts_smo(driver_ctx, config, new_glob, lower_ctx);
    val_bts_smo.Run();
  }
  lower_ctx->Set_bootstrap_param(
      Build_bootstrap_param(*config, lower_ctx->Get_ctx_param()));
  return new_glob;
}  // Ckks_driver

}  // namespace ckks
}  // namespace fhe
