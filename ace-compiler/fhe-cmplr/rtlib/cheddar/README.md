# Ordinary Cheddar Boot: 32-bit and 64-bit builds

The ordinary backend uses Cheddar's unified `BootConfig` and
`ResolveBootConfig<Word>` interface. Use `corearc/cheddar-fhe` commit
`a0d5d102c1ea5c933e85e7be01ded9ed8d46b48c` or a compatible later version.
Set `RTLIB_CHEDDAR_SOURCE_DIR` to that checkout before configuring ACE.

Enable `RTLIB_CHEDDAR_STANDARD_ONLY=ON` and set `RTLIB_CHEDDAR_WORD_BITS` to
32 or 64. Use separate build directories for the two word widths. Existing
builds with the option disabled retain their previous integration path.

From the ACE repository root, for example:

```sh
export RTLIB_CHEDDAR_SOURCE_DIR=/absolute/path/to/cheddar-fhe

cmake -S fhe-cmplr -B release32 \
  '-DFHE_WITH_SRC=air-infra;nn-addon' \
  -DCMAKE_BUILD_TYPE=Release \
  -DBUILD_UNITTEST=OFF -DBUILD_BENCH=OFF \
  -DFHE_BUILD_TEST=OFF -DFHE_BUILD_EXAMPLE=OFF \
  -DAIR_BUILD_EXAMPLE=OFF \
  -DAIR_CODE_CHECK=OFF -DNN_CODE_CHECK=OFF -DFHE_CODE_CHECK=OFF \
  -DFHE_ENABLE_SEAL=OFF -DFHE_ENABLE_OPENFHE=OFF \
  -DFHE_ENABLE_PHANTOM=OFF -DFHE_ENABLE_HEONGPU=OFF \
  -DFHE_ENABLE_CHEDDAR=ON -DFHE_ENABLE_CUDA=ON \
  -DCMAKE_CUDA_COMPILER=/usr/local/cuda/bin/nvcc \
  -DCMAKE_CUDA_ARCHITECTURES=120 \
  -DRTLIB_CHEDDAR_STANDARD_ONLY=ON -DRTLIB_CHEDDAR_WORD_BITS=32
cmake --build release32 --target fhe_cmplr fhe_rtlib -j8
```

For a 64-bit build use `release64` and `RTLIB_CHEDDAR_WORD_BITS=64`.
Choose a CUDA architecture supported by your GPU and toolkit; 120 is the
Blackwell configuration used in validation. This command builds the compiler
and runtime libraries; application targets must be configured separately.
When generating an application with the inference CLI, set
`--cheddar-word-bits`, `--build-dir`, and `--compiler` to the matching build
(for example `--compiler release32/driver/fhe_cmplr`).

The compiler's bootstrap descriptor supplies normal level, CtS/StC budget,
normal scale, Boot scale, message ratio, and secret weights. The adapter passes
these logical requirements to Cheddar without specifying physical primes or
`level_config`. The output depth is `normal_level - num_stc_levels`.

The nominal auxiliary-modulus budget preserves the old 64-bit policy:

```text
logical_Q_count = normal_level + CtS_levels + EvalMod_levels + 1
reference_P_count = smallest count with ceil(logical_Q_count/count) == dnum
P_target_bits = 60 * reference_P_count
```

Cheddar converts that shared bit budget to backend-specific physical P primes.
The adapter checks the actual `dnum` and that the resolved chain covers the
compiler's required levels. For the validated scale50 / Boot55 / dnum3 cases:

| Configuration | Normal level | Output level | P target | 32-bit P count | 64-bit P count |
|---|---:|---:|---:|---:|---:|
| SBM+SSF | 19 | 16 | 660 bits | 22 | 11 |
| SSF-only | 21 | 18 | 720 bits | 24 | 12 |

This integration covers ordinary legacy full-slot Boot. It does not enable
operator fusion, SlimBoot, or the experimental EvalMod modes. The compiler
passes and Cheddar implementation are unchanged by this integration.
