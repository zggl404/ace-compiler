//-*-c++-*-
//=============================================================================
//
// Copyright (c) Ant Group Co., Ltd
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//=============================================================================

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>

#include "rt_cheddar/rt_cheddar.h"

namespace {

constexpr uint32_t kPolyDegree = 65536;
constexpr uint32_t kFullSlots  = kPolyDegree / 2;
constexpr size_t   kInputLevel = 21;
constexpr size_t   kMulDepth   = 32;
constexpr size_t   kPrintLen   = 8;
constexpr SCALE_T  kScale      = 1;
constexpr int      kBootLevel  = 7;
constexpr int      kSlotsToTest[] = {32768, 16384, 8192, 4096};
constexpr double   kPi = 3.14159265358979323846;

struct ErrorStats {
  double mean_abs_error = 0.0;
  double max_abs_error  = 0.0;
  double mean_ratio     = 0.0;
  double min_ratio      = 0.0;
  double max_ratio      = 0.0;
  size_t ratio_count    = 0;
};

double Make_sample(size_t idx) {
  double sin_term  = 0.025 * std::sin((2.0 * kPi * static_cast<double>(idx)) / 31.0);
  double cos_term  = 0.010 * std::cos((2.0 * kPi * static_cast<double>(idx)) / 7.0);
  double ramp_term = 0.004 * static_cast<double>(static_cast<int>(idx % 9) - 4);
  return sin_term + cos_term + ramp_term;
}

std::vector<double> Build_base_input(int slot) {
  std::vector<double> input(static_cast<size_t>(slot));
  for (size_t idx = 0; idx < input.size(); ++idx) {
    input[idx] = Make_sample(idx);
  }
  return input;
}

std::vector<double> Build_encoded_input(const std::vector<double>& base,
                                        bool cyclic) {
  if (!cyclic) {
    return base;
  }

  std::vector<double> input(kFullSlots);
  for (size_t idx = 0; idx < input.size(); ++idx) {
    input[idx] = base[idx % base.size()];
  }
  return input;
}

void Print_prefix(const char* label, const double* data, size_t len) {
  size_t print_len = std::min(len, kPrintLen);
  std::printf("%s: [", label);
  for (size_t idx = 0; idx < print_len; ++idx) {
    if (idx != 0) {
      std::printf(", ");
    }
    std::printf("%.6f", data[idx]);
  }
  std::printf("]\n");
}

ErrorStats Collect_stats(const std::vector<double>& input, const double* output,
                         size_t len) {
  ErrorStats stats;
  bool       ratio_seeded = false;
  for (size_t idx = 0; idx < len; ++idx) {
    double abs_error = std::fabs(output[idx] - input[idx]);
    stats.mean_abs_error += abs_error;
    stats.max_abs_error = std::max(stats.max_abs_error, abs_error);

    double denom = std::fabs(input[idx]);
    if (denom >= 1e-4) {
      double ratio = output[idx] / input[idx];
      stats.mean_ratio += ratio;
      if (!ratio_seeded) {
        stats.min_ratio = ratio;
        stats.max_ratio = ratio;
        ratio_seeded    = true;
      } else {
        stats.min_ratio = std::min(stats.min_ratio, ratio);
        stats.max_ratio = std::max(stats.max_ratio, ratio);
      }
      ++stats.ratio_count;
    }
  }

  if (len != 0) {
    stats.mean_abs_error /= static_cast<double>(len);
  }
  if (stats.ratio_count != 0) {
    stats.mean_ratio /= static_cast<double>(stats.ratio_count);
  }
  return stats;
}

void Run_bootstrap_case(int slot, bool cyclic) {
  std::vector<double> base_input    = Build_base_input(slot);
  std::vector<double> encoded_input = Build_encoded_input(base_input, cyclic);

  CIPHERTEXT input_ct{};
  CIPHERTEXT boot_ct{};

  Cheddar_encrypt_double(&input_ct, encoded_input.data(), encoded_input.size(),
                         kScale,
                         kInputLevel);
  Bootstrap(&boot_ct, &input_ct, kBootLevel, slot);

  double* before = Get_msg(&input_ct);
  double* after  = Get_msg(&boot_ct);

  ErrorStats stats = Collect_stats(base_input, after, base_input.size());

  std::printf("=== mode=%s slot=%d ===\n", cyclic ? "cyclic" : "plain", slot);
  std::printf("input_level=%u boot_level=%u input_slots=%u boot_slots=%u\n",
              Exact_level(&input_ct), Exact_level(&boot_ct),
              Exact_slots(&input_ct), Exact_slots(&boot_ct));
  Print_prefix("before", before, base_input.size());
  Print_prefix("after ", after, base_input.size());
  std::printf(
      "mean_abs_error=%.8f max_abs_error=%.8f mean_ratio=%.8f "
      "ratio_range=[%.8f, %.8f] ratio_count=%zu\n",
      stats.mean_abs_error, stats.max_abs_error, stats.mean_ratio,
      stats.min_ratio, stats.max_ratio, stats.ratio_count);
  std::printf("\n");

  std::free(before);
  std::free(after);
  Free_ciph(&boot_ct);
  Free_ciph(&input_ct);
}

}  // namespace

int Get_input_count() { return 0; }

DATA_SCHEME* Get_encode_scheme(int idx) {
  (void)idx;
  return nullptr;
}

int Get_output_count() { return 0; }

DATA_SCHEME* Get_decode_scheme(int idx) {
  (void)idx;
  return nullptr;
}

CKKS_PARAMS* Get_context_params() {
  static CKKS_PARAMS parm = {
      LIB_CHEDDAR, kPolyDegree, 0, kMulDepth, kInputLevel, 60, 50, 3, 32768, 0,
      {}};
  return &parm;
}

RT_DATA_INFO* Get_rt_data_info() { return nullptr; }

bool Need_bts() { return true; }

int main(int argc, char* argv[]) {
  bool cyclic = false;
  if (argc > 1 && std::strcmp(argv[1], "--cyclic") == 0) {
    cyclic = true;
  }

  Prepare_context();
  for (int slot : kSlotsToTest) {
    Run_bootstrap_case(slot, cyclic);
  }
  Finalize_context();
  return 0;
}
