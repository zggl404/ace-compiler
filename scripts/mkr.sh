#!/bin/sh

MODE="${1:-regular}"

python3 /app/scripts/gen_onnx.py
[ $? -ne 0 ] && echo "Generate ONNX for MKR test failed." && exit 1

if [ "$MODE" = "mini" ]; then
    python3 /app/scripts/mkr.py -enm oopsla25_mini -o /app/mkr_ae_result/mini/mkr/
else
    python3 /app/scripts/mkr.py
fi