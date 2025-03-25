#!/bin/bash

#ID=`date +%m%d`
ID=ace

./metak_cifar_cmplr.sh resnet20_cifar10_pre $ID >resnet20_cifar10_pre.$ID.cmplr.log 2>&1
./metak_cifar_cmplr.sh fhelipe_alexnet      $ID >fhelipe_alexnet.$ID.cmplr.log 2>&1
./metak_cifar_cmplr.sh fhelipe_mobilenet    $ID >fhelipe_mobilenet.$ID.cmplr.log 2>&1
./metak_cifar_cmplr.sh fhelipe_squeezenet   $ID >fhelipe_squeezenet.$ID.cmplr.log 2>&1
./metak_cifar_cmplr.sh fhelipe_vgg11        $ID >fhelipe_vgg11.$ID.cmplr.log 2>&1

