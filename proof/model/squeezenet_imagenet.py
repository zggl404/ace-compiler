#!/usr/bin/env python3

# SqueezeNet

import os
import argparse
import torch
import torch.nn as nn
import torch.nn.functional as F

import onnx
import onnxsim


# Input: [1, 3, 224, 224], Output: [1, 1000]
class FireBlock(nn.Module):
    def __init__(self, in_channel, s1x1, e1x1, e3x3):
        super(FireBlock, self).__init__()
        self.squeeze = nn.Sequential(
            nn.Conv2d(in_channel, s1x1, kernel_size=1, bias=False),
            nn.BatchNorm2d(s1x1),
            nn.ReLU()
        )
        self.expand1 = nn.Sequential(
            nn.Conv2d(s1x1, e1x1, kernel_size=1, bias=False),
            #nn.BatchNorm2d(e1x1),
            #nn.ReLU(True)
            nn.BatchNorm2d(e1x1)
        )
        self.expand2 = nn.Sequential(
            nn.Conv2d(s1x1, e3x3, kernel_size=3, padding=1, bias=False),
            #nn.BatchNorm2d(e3x3),
            #nn.ReLU(True)
            nn.BatchNorm2d(e3x3)
        )
        self.relu = nn.ReLU()

    def forward(self, x):
        squeeze = self.squeeze(x)
        expand1 = self.expand1(squeeze)
        expand2 = self.expand2(squeeze)
        out = self.relu(torch.cat([expand1, expand2], 1))
        return out

class FireBlockPool(nn.Module):
    def __init__(self, in_channel, s1x1, e1x1, e3x3, pk, ps):
        super(FireBlockPool, self).__init__()
        self.squeeze = nn.Sequential(
            nn.Conv2d(in_channel, s1x1, kernel_size=1, bias=False),
            nn.BatchNorm2d(s1x1),
            nn.ReLU()
        )
        self.expand1 = nn.Sequential(
            nn.Conv2d(s1x1, e1x1, kernel_size=1, bias=False),
            nn.BatchNorm2d(e1x1),
            nn.AvgPool2d(pk, ps)
        )
        self.expand2 = nn.Sequential(
            nn.Conv2d(s1x1, e3x3, kernel_size=3, padding=1, bias=False),
            nn.BatchNorm2d(e3x3),
            nn.AvgPool2d(pk, ps)
        )
        self.relu = nn.ReLU()

    def forward(self, x):
        squeeze = self.squeeze(x)
        expand1 = self.expand1(squeeze)
        expand2 = self.expand2(squeeze)
        out = self.relu(torch.cat([expand1, expand2], 1))
        return out

class SqueezeNet(nn.Module):
    def __init__(self, num_classes=1000):
        super(SqueezeNet, self).__init__()
        self.conv1 = nn.Sequential(
            nn.Conv2d(3, 96, kernel_size=7, stride=2, padding=3, bias=False),
            nn.BatchNorm2d(96),
            nn.ReLU(),
            nn.MaxPool2d(kernel_size=3, stride=2)
        )
        self.fire2 = FireBlock(96, 16, 64, 64)
        self.fire3 = FireBlock(128, 16, 64, 64)
        #self.fire4 = FireBlock(128, 32, 128, 128)
        #self.max_pool4 = nn.MaxPool2d(3, 2)
        self.fire4 = FireBlockPool(128, 32, 128, 128, 3, 2)
        self.fire5 = FireBlock(256, 32, 128, 128)
        self.fire6 = FireBlock(256, 64, 192, 192)
        self.fire7 = FireBlock(384, 64, 192, 192)
        #self.fire8 = FireBlock(384, 64, 256, 256)
        #self.max_pool8 = nn.MaxPool2d(3, 2)
        self.fire8 = FireBlockPool(384, 64, 256, 256, 3, 2)
        self.fire9 = FireBlock(512, 64, 256, 256)
        self.conv10 = nn.Sequential(
            nn.Conv2d(512, 512, kernel_size=1),
            nn.Dropout(0.5),
            nn.ReLU(),
        )
        self.avg_pool = nn.AdaptiveAvgPool2d((1, 1))
        self.fc = nn.Linear(512, num_classes)

    def forward(self, x):
        out = self.conv1(x)
        out = self.fire2(out)
        out = self.fire3(out)
        out = self.fire4(out)
        out = self.fire5(out)
        out = self.fire6(out)
        out = self.fire7(out)
        out = self.fire8(out)
        out = self.fire9(out)
        out = self.conv10(out)
        out = self.avg_pool(out)
        out = out.view(out.size(0), -1)
        out = self.fc(out)
        return out

def main(output_onnx):
    dummy_input = torch.randn(1, 3, 224, 224)
    torch.onnx.export(SqueezeNet(), (dummy_input), output_onnx, export_params=True, opset_version=10, verbose=False,
            input_names=['input'], output_names=['output'])
    exp_model = onnx.load(output_onnx)
    simp_model, check = onnxsim.simplify(exp_model)
    onnx.save_model(simp_model, output_onnx)

if __name__ == '__main__':
    parser = argparse.ArgumentParser(description='Generate squeezenet_imagenet.onnx',
                                     formatter_class=argparse.ArgumentDefaultsHelpFormatter)
    parser.add_argument('-o', '--output', default='./squeezenet_imagenet.onnx', help='Setting the output path')
    args = parser.parse_args()

    OUTPUT_ONNX = args.output
    OUTPUT_PATH = os.path.dirname(os.path.realpath(OUTPUT_ONNX))
    if not os.path.exists(OUTPUT_PATH):
        os.makedirs(OUTPUT_PATH, exist_ok=True)

    main(OUTPUT_ONNX)
