#!/bin/bash

#ID=`date +%m%d`
ID=ace

./metak_imagenet_cmplr.sh resnet18_imagenet     $ID >resnet18_imagenet.$ID.cmplr.log 2>&1
./metak_imagenet_cmplr.sh alexnet_imagenet      $ID >alexnet_imagenet.$ID.cmplr.log 2>&1
./metak_imagenet_cmplr.sh mobilenet_imagenet    $ID >mobilenet_imagenet.$ID.cmplr.log 2>&1
./metak_imagenet_cmplr.sh squeezenet_imagenet   $ID >squeezenet_imagenet.$ID.cmplr.log 2>&1
./metak_imagenet_cmplr.sh vgg11_imagenet        $ID >vgg11_imagenet.$ID.cmplr.log 2>&1

