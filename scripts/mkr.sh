#!/bin/sh

python3 /app/scripts/gen_onnx.py
[ $? -ne 0 ] && echo "Generate ONNX for MKR test failed." && exit

python3 /app/scripts/mkr.py

