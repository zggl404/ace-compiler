#!/bin/bash

./metak_cifar_cmplr.sh resnet20_cifar10_pre >mkr_resnet20_cifar.run.log   2>&1
mv resnet20_cifar10_pre.sts.log mkr_resnet20_cifar.sts.log

./metak_cifar_cmplr.sh fhelipe_alexnet      >mkr_alexnet_cifar.run.log    2>&1
mv fhelipe_alexnet.sts.log mkr_alexnet_cifar.sts.log

./metak_cifar_cmplr.sh fhelipe_mobilenet    >mkr_mobilenet_cifar.run.log  2>&1
mv fhelipe_mobilenet.sts.log mkr_mobilenet_cifar.sts.log

./metak_cifar_cmplr.sh fhelipe_squeezenet   >mkr_squeezenet_cifar.run.log 2>&1
mv fhelipe_squeezenet.sts.log mkr_squeezenet_cifar.sts.log

./metak_cifar_cmplr.sh fhelipe_vgg11        >mkr_vgg11_cifar.run.log      2>&1
mv fhelipe_vgg11.sts.log mkr_vgg11_cifar.sts.log

