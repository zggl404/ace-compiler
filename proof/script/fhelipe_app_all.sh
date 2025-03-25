#!/bin/sh

set -x

rm -f ops_timing.txt
./fhelipe_cmplr_run.sh ace_fhelipe_resnet >fhelipe_resnet20_cifar.run.log 2>&1
mv ops_timing.txt fhelipe_resnet20_cifar.sts.log

./fhelipe_cmplr_run.sh ace_fhelipe_alexnet >fhelipe_alexnet_cifar.run.log 2>&1
mv ops_timing.txt fhelipe_alexnet_cifar.sts.log

./fhelipe_cmplr_run.sh ace_fhelipe_squeezenet >fhelipe_squeezenet_cifar.run.log 2>&1
mv ops_timing.txt fhelipe_squeezenet_cifar.sts.log

./fhelipe_cmplr_run.sh ace_fhelipe_vgg >fhelipe_vgg11_cifar.run.log 2>&1
mv ops_timing.txt fhelipe_vgg11_cifar.sts.log

