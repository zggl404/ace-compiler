#!/usr/bin/env python3
#
# Copyright (c) Ant Group Co., Ltd
# SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

import os
import sys
import argparse
from ace_util import *  # noqa F403
from ace_compile import run_ace_compile
from run_perf import run_perf
from pathlib import Path


def oopsla25_ae(cwd, args, log):
    '''
    Main function to run OOPSLA25 AE

    Args:
        cwd(str): current working directory
        args(Namespace): arguments needed to run
        log(file): log file
    '''
    exec_files = run_ace_compile(cwd, args.file, args.model, None, args.cmplr, args.src, args.temp,
                                 'oopsla25', 'ant', None, False, False, args.debug, args.trace, log)
    run_perf(exec_files, args.cifar10, args.cifar100, args.index, args.debug, args.trace, log)
    return


if __name__ == "__main__":
    parser = argparse.ArgumentParser(
        description='Artifact Evaluation script to reproduce ANT-ACE results of OOPSLA25\'s paper',
        formatter_class=argparse.ArgumentDefaultsHelpFormatter)
    parser.add_argument('-c', '--cmplr', metavar='PATH', default='/app/mkr_cmplr',
                        help='directory non-OpenMP version of ANT-ACE compiler is installed')
    parser.add_argument('-cf10', '--cifar10', metavar='PATH', default='./cifar-10-batches-bin',
                        help='direcotry where the cifar10 data are placed')
    parser.add_argument('-cf100', '--cifar100', metavar='PATH', default='./cifar-100-binary',
                        help='direcotry where the cifar100 data are placed')
    parser.add_argument('-d', '--debug', action='store_true', default=False,
                        help='print out debug info')
    parser.add_argument('-f', '--file', metavar='PATH',
                        help='run single ONNX model test')
    parser.add_argument('-i', '--index', type=int, default=0,
                        help='index of the starting image to infer, range: [0, 9999]')
    parser.add_argument('-m', '--model', metavar='PATH', default='/app/model',
                        help='directory holds the onnx models to run')
    parser.add_argument('-n', '--num', type=int, default=10,
                        help='number of images to run for each model, ranges: [1, 10000]')
    parser.add_argument('-s', '--src', metavar='PATH', default='/app/ace-compiler',
                        help='directory that holds repos of air-infra, fhe-cmplr & nn-addon')
    parser.add_argument('-t', '--trace', action='store_false', default=True,
                        help='print out trace info into log file')
    parser.add_argument('-tmp', '--temp', default="/app/mkr_ae_temp", help='directory that holds temp files')
    parser.add_argument("-o", "--output-log-dir", type=str, default="/app/mkr_ae_result/mkr/",
        help="Specify the directory to move generated log files to.")
    args = parser.parse_args()

    # Define the output and temp file directory path
    output_log_dir = Path(args.output_log_dir)
    temp_file_dir = Path(args.temp)
    # Ensure the top-level output and temp directory exists before processing any cases
    try:
        os.makedirs(output_log_dir, exist_ok=True)
        print(f"MKR logs will be moved to {output_log_dir}")
        os.makedirs(temp_file_dir, exist_ok=True)
        print(f"MKR temp files will be moved to {temp_file_dir}")
    except OSError as e:
        print(f"Error: Could not create output directory {output_log_dir} or temp directory {temp_file_dir}")
        sys.exit(1)

    cwd = os.getcwd()
    final_log_path = output_log_dir / 'mkr.run.log'
    with open(final_log_path, 'w') as log:
        info = '#### log for: %s\n' % (' '.join(sys.argv))
        write_log(info, log)
        oopsla25_ae(cwd, args, log)

    print(f"MKR's log have be moved to {final_log_path}")
