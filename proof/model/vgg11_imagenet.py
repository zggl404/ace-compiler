#!/usr/bin/env python3

# VGG

import os
import argparse
import torch
import torch.nn as nn
import torch.nn.functional as F

import onnx
import onnxsim

from vgg_imagenet_model import VGG

def main(output_onnx):
    dummy_input = torch.randn(1, 3, 224, 224)
    torch.onnx.export(VGG('VGG11'), (dummy_input), output_onnx, export_params=True, opset_version=10, verbose=False,
            input_names=['input'], output_names=['output'])
    exp_model = onnx.load(output_onnx)
    simp_model, check = onnxsim.simplify(exp_model)
    onnx.save_model(simp_model, output_onnx)

if __name__ == '__main__':
    parser = argparse.ArgumentParser(description='Generate vgg11_imagenet.onnx',
                                     formatter_class=argparse.ArgumentDefaultsHelpFormatter)
    parser.add_argument('-o', '--output', default='./vgg11_imagenet.onnx', help='Setting the output path')
    args = parser.parse_args()

    OUTPUT_ONNX = args.output
    OUTPUT_PATH = os.path.dirname(os.path.realpath(OUTPUT_ONNX))
    if not os.path.exists(OUTPUT_PATH):
        os.makedirs(OUTPUT_PATH, exist_ok=True)

    main(OUTPUT_ONNX)
