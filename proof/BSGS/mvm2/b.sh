#!/bin/bash -x

tar xf weight.tar.bz2

gcc -O3 -DNDEBUG main_gemm_n4096_k25088.c gemm_n4096_k25088.onnx.c -I/app/mkr_cmplr/rtlib/include/ant/ -I/app/mkr_cmplr/rtlib/include /app/mkr_cmplr/rtlib/lib/libFHErt_ant.a /app/mkr_cmplr/rtlib/lib/libFHErt_common.a -lgmp -lm -o ./exe.gemm_n4096_k25088.onnx

time RTLIB_TIMING_OUTPUT=log.bsgs.mvm2 ./exe.gemm_n4096_k25088.onnx

rm weight

