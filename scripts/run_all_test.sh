#!/bin/bash
onnx_file=$1
base_file=${onnx_file%onnx*}"base.log"
cf_file=${onnx_file%onnx*}"cf.log"
ncf_file=${onnx_file%onnx*}"ncf.log"
mf_file=${onnx_file%onnx*}"mf.log"
sss_file=${onnx_file%onnx*}"sss.log"
sss_cf_mf_file=${onnx_file%onnx*}"sss.cf.mf.log"

echo $base_file
./run_base.sh $onnx_file > /app/ae_result/fhefusion/$base_file 2>&1

echo $ncf_file
./run_ncf.sh $onnx_file > /app/ae_result/fhefusion/$ncf_file 2>&1

echo $cf_file
./run_cf.sh $onnx_file > /app/ae_result/fhefusion/$cf_file 2>&1

echo $mf_file
./run_mf.sh $onnx_file > /app/ae_result/fhefusion/$mf_file 2>&1

echo $sss_file
./run_sss.sh $onnx_file > /app/ae_result/fhefusion/$sss_file 2>&1

echo $sss_cf_mf_file
./run_sss_cf_mf.sh $onnx_file > /app/ae_result/fhefusion/$sss_cf_mf_file 2>&1
