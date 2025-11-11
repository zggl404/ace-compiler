#!/bin/bash
onnx_file=$1
main_file=${onnx_file%onnx*}"c"
graph_file="${onnx_file%onnx*}onnx.c"
trace_file="${onnx_file%onnx*}t"
base_graph_file="${onnx_file%onnx*}base.onnx.c"
base_trace_file="${onnx_file%onnx*}base.t"
exe_file="${onnx_file%onnx*}out"

echo $onnx_file
echo $main_file
echo $graph_file

export RTLIB_TIMING_OUTPUT=stdout
export RTLIB_BTS_EVEN_POLY=1

rm /tmp/fhe_data.bin

cd /app/fhefusion_cmplr/bin


if [[ "$onnx_file" == "cryptonet.onnx" ]]; then
  time ./fhe_cmplr -VEC:fcount:ms=4096 -CKKS:sbm:tsbm:hw=192:q0=60:sf=59:N=8192 -P2C:fp:df=/tmp/fhe_data.bin /app/onnx_file/${onnx_file}
elif [[ "$onnx_file" == "lenet_ax2.onnx" || "$onnx_file" == "lenet.onnx" ]]; then
  time ./fhe_cmplr -VEC:fcount:ms=16384 -CKKS:sbm:tsbm:hw=192:q0=60:sf=59:N=32768 -P2C:fp:df=/tmp/fhe_data.bin /app/onnx_file/${onnx_file}
elif [[ "$onnx_file" == "resnet20_cifar10.onnx" || "$onnx_file" == "resnet20_cifar10_ax2.onnx" ]]; then
  time ./fhe_cmplr -VEC:fcount:ms=32768 -CKKS:sbm:tsbm:hw=192:q0=60:sf=59:N=65536 -P2C:fp:df=/tmp/fhe_data.bin /app/onnx_file/${onnx_file}
else
  # vgg, alexnet, mobilenet, squeezenet
  time ./fhe_cmplr -P2C:fp:df=/tmp/fhe_data.bin -CKKS:sbm:tsbm:hw=192:q0=60:sf=59 /app/onnx_file/${onnx_file}
fi

ret=$?
if [ $ret -ne 0 ]; then
  echo "compile failed!!"
  exit $ret
fi

mv ${trace_file} /app/ae_result/fhefusion/${base_trace_file}
cp ${graph_file} /app/test/
mv ${graph_file} /app/test/${base_graph_file}

cd /app/test

rm ${onnx}.out -rf
rm ./${exe_file}
#OLDDIR=$PWD
#CURDIR=`dirname $0`
#cd $CURDIR
time cc -DRTLIB_SUPPORT_LINUX $main_file ${graph_file} -I/app/ant_compiler/air-infra/include -I/app/ant_compiler/nn-addon/include -I/app/ant_compiler/fhe-cmplr/include -I/app/ant_compiler/fhe-cmplr/rtlib/include -I/app/fhefusion_cmplr/rtlib/include/ant -I/app/ant_compiler/fhe-cmplr/rtlib/ant/include /app/fhefusion_cmplr/rtlib/lib/libFHErt_ant.a /app/fhefusion_cmplr/rtlib/lib/libFHErt_common.a /usr/lib/x86_64-linux-gnu/libgmp.so /usr/lib/x86_64-linux-gnu/libm.so -o ${exe_file}

time ./${exe_file}
ret=$?
#cd $OLDDIR
exit $ret
