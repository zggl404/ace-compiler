#!/usr/bin/env bash
set -euo pipefail

repo_root=$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.." && pwd)
result_root=${1:-"/results/resnet_fullkey_pre_$(date +%Y%m%d_%H%M%S)"}
mkdir -p "$result_root"
result_root=$(cd -- "$result_root" && pwd)
cd "$repo_root"

# Image 0 warms up each model; images 1..10 contribute to rtlib timing.
export ACE_RTLIB_TIMING_SKIP_FIRST_IMAGE=1

for model in resnet20 resnet32 resnet44 resnet56 resnet110; do
  model_dir="$result_root/$model"
  mkdir -p "$model_dir"
  printf 'Running %s; results: %s\n' "$model" "$model_dir"

  /usr/bin/time -f 'command_total_sec=%e' -o "$model_dir/command_total.txt" \
    python3 -u scripts/ace_resnet_cifar10_infer.py \
      --compiler release/driver/fhe_cmplr \
      --build-dir release \
      --backend cheddar \
      --cheddar-word-bits "${CHEDDAR_WORD_BITS:-32}" \
      --model "$model" \
      --ckks=-CKKS:q0=60:sf=50:N=65536:bes=55:bnl=19:bmr=10 \
      --vec=-VEC:conv_parl:ssf \
      --sbm --rot-key-mode full --omp-threads 8 \
      --cifar10 /app/cifar/test_batch.bin \
      --num 11 \
      --encode-mode pre --pre-encode-count 0 \
      --capture-timing \
      --timing-json "$model_dir/timing.json" \
      2>&1 | tee "$model_dir/run.log"
done

printf 'All models finished; results: %s\n' "$result_root"
