#!/bin/bash

set -x

export RTLIB_TIMING_OUTPUT=-
export OMP_NUM_THREADS=1
export RTLIB_BTS_EVEN_POLY=1

TEST=$1
ID=$2
WRK_DIR=`pwd`

timed_run() {
  if [ -e /usr/bin/time ]; then
    /usr/bin/time $@
    RET=$?
  else
    time $@
    RET=$?
  fi
  return $RET
}


# call fhe-cmplr to generate .c file
VEC_OPT="-VEC:ms=32768:gemmf:convf:ssf:conv_parl:rtt"
SIHE_OPT="-SIHE:relu_vr_def=100:rtt"
CKKS_OPT="-CKKS:hw=192:q0=60:sf=56:N=65536:pots:rtt"
POLY_OPT="-POLY:rtt"
P2C_OPT="-P2C:df=$WRK_DIR/$TEST.$ID.bin:fp"

timed_run ./driver/fhe_cmplr $VEC_OPT $SIHE_OPT $CKKS_OPT $POLY_OPT $P2C_OPT ../metak/$TEST.onnx
[ $? -ne 0 ] && echo "fhe_cmplr $TEST failed" && exit 1
# save compiler trace
mv $TEST.t          $TEST.$ID.sts.log
cp $TEST.onnx.c   $TEST.$ID.onnx.c

# call host gcc to generate exe file
HOST_DEF="-DRTLIB_SUPPORT_LINUX"
HOST_INC="-I../fhe-cmplr/rtlib/include -I../fhe-cmplr/rtlib/ant/include -Irtlib/build/_deps/uthash-src/src -I../air-infra/include -I../nn-addon/include -I../fhe-cmplr/include"
HOST_LIBS="-L./rtlib/build/common -L./rtlib/build/ant -lFHErt_ant -lFHErt_common -lgmp -lm"
HOST_SRCS="../metak/$TEST.main.c $TEST.onnx.c"

timed_run gcc $HOST_DEF $HOST_INC $HOST_SRCS $HOST_LIBS -o $TEST.$ID
[ $? -ne 0 ] && echo "host gcc $TEST failed" && exit 2

# run the command
timed_run ./$TEST.$ID > $TEST.$ID.run.log 2>&1

