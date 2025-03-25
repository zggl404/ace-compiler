import os
import argparse
import torch
import torch.nn as nn

# Input: [1, 3, 224, 224]
class ConvP0S1(nn.Module):
    def __init__(self):
        super().__init__()
        self.conv = nn.Conv2d(3, 64, 7, padding=3, stride=2)

    def forward(self, x):
        x = self.conv(x)
        return x

def main(output_onnx):
    dummy_input = torch.randn(1, 3, 224, 224)
    torch.onnx.export(ConvP0S1(), (dummy_input), output_onnx, export_params=True, opset_version=10, verbose=False,
            input_names=['input'], output_names=['output'])

if __name__ == '__main__':
    parser = argparse.ArgumentParser(description='Generate conv_3x224x64x7_s2.onnx',
                                     formatter_class=argparse.ArgumentDefaultsHelpFormatter)
    parser.add_argument('-o', '--output', default='./conv_3x224x64x7_s2.onnx', help='Setting the output path')
    args = parser.parse_args()

    OUTPUT_ONNX = args.output
    OUTPUT_PATH = os.path.dirname(os.path.realpath(OUTPUT_ONNX))
    if not os.path.exists(OUTPUT_PATH):
        os.makedirs(OUTPUT_PATH, exist_ok=True)

    main(OUTPUT_ONNX)
