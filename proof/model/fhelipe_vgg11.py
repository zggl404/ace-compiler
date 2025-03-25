#!/usr/bin/env python3

# VGG Model

import os
import argparse
import torch
import torch.nn as nn
import torch.nn.functional as F

import onnx
import onnxsim

cfg = {
    'VGG11': [32, 'M', 64, 'M', 128, 128, 'M', 256, 256, 'M', 512, 512, 'M'],
    'VGG13': [64, 64, 'M', 128, 128, 'M', 256, 256, 'M', 512, 512, 'M', 512, 512, 'M'],
    'VGG16': [64, 64, 'M', 128, 128, 'M', 256, 256, 256, 'M', 512, 512, 512, 'M', 512, 512, 512, 'M'],
    'VGG19': [64, 64, 'M', 128, 128, 'M', 256, 256, 256, 256, 'M', 512, 512, 512, 512, 'M', 512, 512, 512, 512, 'M'],
}

# Input: [1, 3, 32, 32], Output: [1, 10]
class VGG(nn.Module):
    def __init__(self, vgg_name):
        super(VGG, self).__init__()
        self.features = self._make_layers(cfg[vgg_name])
        self.classifier = nn.Linear(512, 10)

    def _make_layers(self, cfg):
        layers = []
        in_channels = 3
        for x in cfg:
            if x == 'M':
                layers += [nn.AvgPool2d(kernel_size=2, stride=2)]
            else:
                layers += [nn.Conv2d(in_channels, x, kernel_size=3, padding=1),
                           nn.BatchNorm2d(x),
                           nn.ReLU(inplace=True)]
                in_channels = x
        return nn.Sequential(*layers)

    def forward(self, x):
        out = self.features(x)
        out = torch.flatten(out, 1)
        out = self.classifier(out)
        return out

def main(output_onnx):
    dummy_input = torch.randn(1, 3, 32, 32)
    torch.onnx.export(VGG('VGG11'), (dummy_input), output_onnx, export_params=True, opset_version=10, verbose=False,
            input_names=['input'], output_names=['output'])
    exp_model = onnx.load(output_onnx)
    simp_model, check = onnxsim.simplify(exp_model)
    onnx.save_model(simp_model, output_onnx)

if __name__ == '__main__':
    parser = argparse.ArgumentParser(description='Generate fhelipe_vgg11.onnx',
                                     formatter_class=argparse.ArgumentDefaultsHelpFormatter)
    parser.add_argument('-o', '--output', default='./fhelipe_vgg11.onnx', help='Setting the output path')
    args = parser.parse_args()

    OUTPUT_ONNX = args.output
    OUTPUT_PATH = os.path.dirname(os.path.realpath(OUTPUT_ONNX))
    if not os.path.exists(OUTPUT_PATH):
        os.makedirs(OUTPUT_PATH, exist_ok=True)

    main(OUTPUT_ONNX)
