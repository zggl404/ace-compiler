#!/bin/bash
  
set -e  # terminiate when error occurs
ORIG_DIR="$(pwd)"

err() {
    echo "[ERROR] ($1): $2"
    cd "$ORIG_DIR"
    exit 1
}

cd /app/scripts || err ${LINENO} "Failed to cd to /app/scripts"

mkdir -p /app/ae_result
mkdir -p /app/ae_result/fhefusion

./run_all_test.sh cryptonet.onnx
./run_all_test.sh lenet_ax2.onnx
./run_all_test.sh resnet20_cifar10_ax2.onnx 
./run_all_test.sh vgg11_cifar10_ax2.onnx
./run_all_test.sh mobilenet_cifar10_ax2.onnx 
./run_all_test.sh squeezenet_cifar10_ax2.onnx 
./run_all_test.sh alexnet_cifar10_ax2.onnx

./run_all_test.sh lenet.onnx
./run_all_test.sh resnet20_cifar10.onnx 
./run_all_test.sh vgg11_cifar10.onnx
./run_all_test.sh mobilenet_cifar10.onnx 
./run_all_test.sh squeezenet_cifar10.onnx 
./run_all_test.sh alexnet_cifar10.onnx

cd "$ORIG_DIR" || exit 1
echo "All steps completed successfully"
