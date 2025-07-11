#!/bin/bash

# Usage: ./fhelipe_run.sh [mini|regular]
MODE="${1:-regular}"

cd /app/FHELIPE/fhelipe || exit 1

if [[ "$MODE" == "mini" ]]; then
    INPUT="mini_input.txt"
    OUTPUT="/app/mkr_ae_result/mini/fhelipe/"
else
    INPUT="input_cases.txt"
    OUTPUT="/app/mkr_ae_result/fhelipe/"
fi

python test_fhelipe.py -f "$INPUT" -o "$OUTPUT"
cd -