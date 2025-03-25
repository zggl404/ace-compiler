#!/bin/bash

./metak_imagenet_cmplr.sh resnet18_imagenet     >mkr_resnet18_imagenet.cmplr.log 2>&1
mv resnet18_imagenet.sts.log mkr_resnet18_imagenet.sts.log

./metak_imagenet_cmplr.sh alexnet_imagenet      >mkr_alexnet_imagenet.cmplr.log 2>&1
mv alexnet_imagenet.sts.log mkr_alexnet_imagenet.sts.log

./metak_imagenet_cmplr.sh mobilenet_imagenet    >mkr_mobilenet_imagenet.cmplr.log 2>&1
mv mobilenet_imagenet.sts.log mkr_mobilenet_imagenet.sts.log

./metak_imagenet_cmplr.sh squeezenet_imagenet   >mkr_squeezenet_imagenet.cmplr.log 2>&1
mv squeezenet_imagenet.sts.log mkr_squeezenet_imagenet.sts.log

./metak_imagenet_cmplr.sh vgg11_imagenet        >mkr_vgg11_imagenet.cmplr.log 2>&1
mv vgg11_imagenet.sts.log mkr_vgg11_imagenet.sts.log

