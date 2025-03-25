import os
import argparse
import torch
import torch.nn as nn

class Gemm_512x512(nn.Module):
    def __init__(self):
        super().__init__()
        self.fc = nn.Linear(512, 512)

    def forward(self, x):
        x = torch.flatten(x, 1) 
        x = self.fc(x)
        return x

def main(output_onnx):
    dummy_input = torch.randn(1, 512, 1, 1)
    torch.onnx.export(Gemm_512x512(), (dummy_input), output_onnx, export_params=True, opset_version=10, verbose=False,
            input_names=['input'], output_names=['output'])

if __name__ == '__main__':
    parser = argparse.ArgumentParser(description='Generate gemv_512x512.onnx',
                                     formatter_class=argparse.ArgumentDefaultsHelpFormatter)
    parser.add_argument('-o', '--output', default='./gemv_512x512.onnx', help='Setting the output path')
    args = parser.parse_args()

    OUTPUT_ONNX = args.output
    OUTPUT_PATH = os.path.dirname(os.path.realpath(OUTPUT_ONNX))
    if not os.path.exists(OUTPUT_PATH):
        os.makedirs(OUTPUT_PATH, exist_ok=True)

    main(OUTPUT_ONNX)
