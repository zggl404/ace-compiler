#!/usr/bin/env python3
#
# Copyright (c) Ant Group Co., Ltd
# SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

import os
import sys
import argparse
import subprocess
import datetime
import signal
from multiprocessing import Pool
import psutil
import math

# Minimal memory required to run a model in Gigabytes
EXEC_MEM = {'resnet20_cifar10': 50,
            'resnet32_cifar10': 50,
            'resnet32_cifar100': 60,
            'resnet44_cifar10': 50,
            'resnet56_cifar10': 50,
            'resnet110_cifar10': 50
            }
# Default options, supposed to be the fastest options
DEFAULT_OPTION = ['-VEC:conv_fast',
                  '-CKKS:hw=192:q0=60:sf=56', '-P2C:fp'
                  ]
# CGO25 test configurations
# Test models
CGO25_MODEL = ['resnet20_cifar10',
               'resnet32_cifar10',
               'resnet32_cifar100',
               'resnet44_cifar10',
               'resnet56_cifar10',
               'resnet110_cifar10'
               ]
# Basic ACE compilation options
CGO25_ACE_OPTION = ['-VEC:conv_fast',
                    '-SIHE:relu_mul_depth=13',
                    '-CKKS:hw=192:q0=60:sf=56', '-P2C:fp'
                    ]
# Relu accuracy tuning result options
RESNET20_CIFAR10_SIHE_OPT = ['-SIHE:relu_vr_def=3:relu_vr=' +
                             '/relu/Relu=4' +  # 1
                             ';/layer1/layer1.0/relu_1/Relu=4' +  # 3
                             ';/layer1/layer1.1/relu/Relu=4' +  # 4
                             ';/layer1/layer1.1/relu_1/Relu=5' +  # 5
                             ';/layer1/layer1.2/relu_1/Relu=5' +  # 7
                             ';/layer2/layer2.0/relu_1/Relu=5' +  # 9
                             ';/layer2/layer2.1/relu_1/Relu=5' +  # 11
                             ';/layer2/layer2.2/relu_1/Relu=7' +  # 13
                             ';/layer3/layer3.0/relu_1/Relu=4' +  # 15
                             ';/layer3/layer3.1/relu_1/Relu=6' +  # 17
                             ';/layer3/layer3.2/relu/Relu=4' +  # 18
                             ';/layer3/layer3.2/relu_1/Relu=20'  # 19
                             ]
RESNET32_CIFAR10_SIHE_OPT = ['-SIHE:relu_vr_def=2:relu_vr=' +
                             '/relu/Relu=4' +  # 1
                             ';/layer1/layer1.0/relu/Relu=3' +  # 2
                             ';/layer1/layer1.0/relu_1/Relu=5' +  # 3
                             ';/layer1/layer1.1/relu/Relu=3' +  # 4
                             ';/layer1/layer1.1/relu_1/Relu=5' +  # 5
                             ';/layer1/layer1.2/relu/Relu=3' +  # 6
                             ';/layer1/layer1.2/relu_1/Relu=5' +  # 7
                             ';/layer1/layer1.3/relu/Relu=3' +  # 8
                             ';/layer1/layer1.3/relu_1/Relu=5' +  # 9
                             ';/layer1/layer1.4/relu/Relu=3' +  # 10
                             ';/layer1/layer1.4/relu_1/Relu=5' +  # 11
                             ';/layer2/layer2.0/relu/Relu=3' +  # 12
                             ';/layer2/layer2.0/relu_1/Relu=5' +  # 13
                             ';/layer2/layer2.1/relu_1/Relu=5' +  # 15
                             ';/layer2/layer2.2/relu_1/Relu=5' +  # 17
                             ';/layer2/layer2.3/relu_1/Relu=6' +  # 19
                             ';/layer2/layer2.4/relu_1/Relu=6' +  # 21
                             ';/layer3/layer3.0/relu/Relu=3' +  # 22
                             ';/layer3/layer3.0/relu_1/Relu=5' +  # 23
                             ';/layer3/layer3.1/relu_1/Relu=4' +  # 25
                             ';/layer3/layer3.2/relu/Relu=3' +  # 26
                             ';/layer3/layer3.2/relu_1/Relu=6' +  # 27
                             ';/layer3/layer3.3/relu/Relu=4' +  # 28
                             ';/layer3/layer3.3/relu_1/Relu=10' +  # 29
                             ';/layer3/layer3.4/relu_1/Relu=11'  # 31
                             ]
RESNET32_CIFAR100_SIHE_OPT = ['-SIHE:relu_vr_def=3:relu_vr=' +
                              '/relu/Relu=5' +  # 1
                              ';/layer1/layer1.0/relu_1/Relu=6' +  # 3
                              ';/layer1/layer1.1/relu_1/Relu=7' +  # 5
                              ';/layer1/layer1.2/relu_1/Relu=8' +  # 7
                              ';/layer1/layer1.3/relu_1/Relu=10' +  # 9
                              ';/layer1/layer1.4/relu/Relu=4' +  # 10
                              ';/layer1/layer1.4/relu_1/Relu=7' +  # 11
                              ';/layer2/layer2.0/relu/Relu=4' +  # 12
                              ';/layer2/layer2.0/relu_1/Relu=6' +  # 13
                              ';/layer2/layer2.1/relu_1/Relu=8' +  # 15
                              ';/layer2/layer2.2/relu/Relu=4' +  # 16
                              ';/layer2/layer2.2/relu_1/Relu=8' +  # 17
                              ';/layer2/layer2.3/relu_1/Relu=9' +  # 19
                              ';/layer2/layer2.4/relu_1/Relu=11' +  # 21
                              ';/layer3/layer3.0/relu/Relu=4' +  # 22
                              ';/layer3/layer3.0/relu_1/Relu=8' +  # 23
                              ';/layer3/layer3.1/relu_1/Relu=9' +  # 25
                              ';/layer3/layer3.2/relu/Relu=4' +  # 26
                              ';/layer3/layer3.2/relu_1/Relu=11' +  # 27
                              ';/layer3/layer3.3/relu/Relu=4' +  # 28
                              ';/layer3/layer3.3/relu_1/Relu=26' +  # 29
                              ';/layer3/layer3.4/relu/Relu=5' +  # 30
                              ';/layer3/layer3.4/relu_1/Relu=46'  # 31
                              ]
RESNET44_CIFAR10_SIHE_OPT = ['-SIHE:relu_vr_def=2:relu_vr=' +
                             '/relu/Relu=4' +  # 1
                             ';/layer1/layer1.0/relu_1/Relu=5' +  # 3
                             ';/layer1/layer1.1/relu_1/Relu=5' +  # 5
                             ';/layer1/layer1.2/relu_1/Relu=5' +  # 7
                             ';/layer1/layer1.3/relu_1/Relu=6' +  # 9
                             ';/layer1/layer1.4/relu_1/Relu=6' +  # 11
                             ';/layer1/layer1.5/relu/Relu=2' +  # 12
                             ';/layer1/layer1.5/relu_1/Relu=7' +  # 13
                             ';/layer1/layer1.6/relu_1/Relu=6' +  # 15
                             ';/layer2/layer2.0/relu/Relu=2' +  # 16
                             ';/layer2/layer2.0/relu_1/Relu=5' +  # 17
                             ';/layer2/layer2.1/relu/Relu=2' +  # 18
                             ';/layer2/layer2.1/relu_1/Relu=5' +  # 19
                             ';/layer2/layer2.2/relu/Relu=2' +  # 20
                             ';/layer2/layer2.2/relu_1/Relu=5' +  # 21
                             ';/layer2/layer2.3/relu/Relu=2' +  # 22
                             ';/layer2/layer2.3/relu_1/Relu=5' +  # 23
                             ';/layer2/layer2.4/relu/Relu=2' +  # 24
                             ';/layer2/layer2.4/relu_1/Relu=5' +  # 25
                             ';/layer2/layer2.5/relu/Relu=2' +  # 26
                             ';/layer2/layer2.5/relu_1/Relu=6' +  # 27
                             ';/layer2/layer2.6/relu/Relu=2' +  # 28
                             ';/layer2/layer2.6/relu_1/Relu=7' +  # 29
                             ';/layer3/layer3.0/relu_1/Relu=5' +  # 31
                             ';/layer3/layer3.1/relu/Relu=2' +  # 32
                             ';/layer3/layer3.1/relu_1/Relu=5' +  # 33
                             ';/layer3/layer3.2/relu/Relu=2' +  # 34
                             ';/layer3/layer3.2/relu_1/Relu=6' +  # 35
                             ';/layer3/layer3.3/relu_1/Relu=7' +  # 37
                             ';/layer3/layer3.4/relu_1/Relu=9' +  # 39
                             ';/layer3/layer3.5/relu_1/Relu=15' +  # 41
                             ';/layer3/layer3.6/relu_1/Relu=16'  # 43
                             ]
RESNET56_CIFAR10_SIHE_OPT = ['-SIHE:relu_vr_def=2:relu_vr=' +
                             '/relu/Relu=4' +  # 1
                             ';/layer1/layer1.0/relu_1/Relu=6' +  # 3
                             ';/layer1/layer1.1/relu_1/Relu=5' +  # 5
                             ';/layer1/layer1.2/relu/Relu=3' +  # 6
                             ';/layer1/layer1.2/relu_1/Relu=6' +  # 7
                             ';/layer1/layer1.3/relu/Relu=3' +  # 8
                             ';/layer1/layer1.3/relu_1/Relu=7' +  # 9
                             ';/layer1/layer1.4/relu_1/Relu=6' +  # 11
                             ';/layer1/layer1.5/relu_1/Relu=6' +  # 13
                             ';/layer1/layer1.6/relu_1/Relu=6' +  # 15
                             ';/layer1/layer1.7/relu_1/Relu=6' +  # 17
                             ';/layer1/layer1.8/relu_1/Relu=5' +  # 19
                             ';/layer2/layer2.0/relu_1/Relu=4' +  # 21
                             ';/layer2/layer2.1/relu_1/Relu=4' +  # 23
                             ';/layer2/layer2.2/relu_1/Relu=5' +  # 25
                             ';/layer2/layer2.3/relu_1/Relu=5' +  # 27
                             ';/layer2/layer2.4/relu_1/Relu=6' +  # 29
                             ';/layer2/layer2.5/relu_1/Relu=8' +  # 31
                             ';/layer2/layer2.6/relu_1/Relu=11' +  # 33
                             ';/layer2/layer2.7/relu_1/Relu=11' +  # 35
                             ';/layer2/layer2.8/relu_1/Relu=12' +  # 37
                             ';/layer3/layer3.0/relu/Relu=3' +  # 38
                             ';/layer3/layer3.0/relu_1/Relu=5' +  # 39
                             ';/layer3/layer3.1/relu_1/Relu=5' +  # 41
                             ';/layer3/layer3.2/relu_1/Relu=5' +  # 43
                             ';/layer3/layer3.3/relu_1/Relu=5' +  # 45
                             ';/layer3/layer3.4/relu_1/Relu=5' +  # 47
                             ';/layer3/layer3.5/relu_1/Relu=6' +  # 49
                             ';/layer3/layer3.6/relu_1/Relu=8' +  # 51
                             ';/layer3/layer3.7/relu/Relu=3' +  # 52
                             ';/layer3/layer3.7/relu_1/Relu=10' +  # 53
                             ';/layer3/layer3.8/relu_1/Relu=12'  # 55
                             ]
RESNET110_CIFAR10_SIHE_OPT = ['-SIHE:relu_vr_def=3:relu_vr=' +
                              '/relu/Relu=14' +  # 109
                              ';/layer1/layer1.0/relu/Relu=4' +  # 1
                              ';/layer1/layer1.0/relu_1/Relu=14' +  # 2
                              ';/layer1/layer1.1/relu/Relu=4' +  # 3
                              ';/layer1/layer1.1/relu_1/Relu=15' +  # 4
                              ';/layer1/layer1.10/relu/Relu=5' +  # 5
                              ';/layer1/layer1.10/relu_1/Relu=18' +  # 6
                              ';/layer1/layer1.11/relu/Relu=5' +  # 7
                              ';/layer1/layer1.11/relu_1/Relu=17' +  # 8
                              ';/layer1/layer1.12/relu/Relu=4' +  # 9
                              ';/layer1/layer1.12/relu_1/Relu=21' +  # 10
                              ';/layer1/layer1.13/relu/Relu=7' +  # 11
                              ';/layer1/layer1.13/relu_1/Relu=22' +  # 12
                              ';/layer1/layer1.14/relu/Relu=7' +  # 13
                              ';/layer1/layer1.14/relu_1/Relu=23' +  # 14
                              ';/layer1/layer1.15/relu/Relu=7' +  # 15
                              ';/layer1/layer1.15/relu_1/Relu=25' +  # 16
                              ';/layer1/layer1.16/relu/Relu=6' +  # 17
                              ';/layer1/layer1.16/relu_1/Relu=22' +  # 18
                              ';/layer1/layer1.17/relu/Relu=6' +  # 19
                              ';/layer1/layer1.17/relu_1/Relu=22' +  # 20
                              ';/layer1/layer1.2/relu/Relu=3' +  # 21
                              ';/layer1/layer1.2/relu_1/Relu=15' +  # 22
                              ';/layer1/layer1.3/relu/Relu=6' +  # 23
                              ';/layer1/layer1.3/relu_1/Relu=20' +  # 24
                              ';/layer1/layer1.4/relu/Relu=5' +  # 25
                              ';/layer1/layer1.4/relu_1/Relu=17' +  # 26
                              ';/layer1/layer1.5/relu/Relu=5' +  # 27
                              ';/layer1/layer1.5/relu_1/Relu=17' +  # 28
                              ';/layer1/layer1.6/relu/Relu=5' +  # 29
                              ';/layer1/layer1.6/relu_1/Relu=17' +  # 30
                              ';/layer1/layer1.7/relu/Relu=4' +  # 31
                              ';/layer1/layer1.7/relu_1/Relu=17' +  # 32
                              ';/layer1/layer1.8/relu/Relu=4' +  # 33
                              ';/layer1/layer1.8/relu_1/Relu=17' +  # 34
                              ';/layer1/layer1.9/relu/Relu=5' +  # 35
                              ';/layer1/layer1.9/relu_1/Relu=18' +  # 36
                              ';/layer2/layer2.0/relu/Relu=6' +  # 37
                              ';/layer2/layer2.0/relu_1/Relu=14' +  # 38
                              ';/layer2/layer2.1/relu/Relu=4' +  # 39
                              ';/layer2/layer2.1/relu_1/Relu=14' +  # 40
                              ';/layer2/layer2.10/relu/Relu=3' +  # 41
                              ';/layer2/layer2.10/relu_1/Relu=19' +  # 42
                              ';/layer2/layer2.11/relu/Relu=3' +  # 43
                              ';/layer2/layer2.11/relu_1/Relu=19' +  # 44
                              ';/layer2/layer2.12/relu/Relu=3' +  # 45
                              ';/layer2/layer2.12/relu_1/Relu=22' +  # 46
                              ';/layer2/layer2.13/relu/Relu=3' +  # 47
                              ';/layer2/layer2.13/relu_1/Relu=21' +  # 48
                              ';/layer2/layer2.14/relu/Relu=3' +  # 49
                              ';/layer2/layer2.14/relu_1/Relu=23' +  # 50
                              ';/layer2/layer2.15/relu/Relu=3' +  # 51
                              ';/layer2/layer2.15/relu_1/Relu=22' +  # 52
                              ';/layer2/layer2.16/relu/Relu=4' +  # 53
                              ';/layer2/layer2.16/relu_1/Relu=23' +  # 54
                              ';/layer2/layer2.17/relu/Relu=3' +  # 55
                              ';/layer2/layer2.17/relu_1/Relu=22' +  # 56
                              ';/layer2/layer2.2/relu/Relu=3' +  # 57
                              ';/layer2/layer2.2/relu_1/Relu=15' +  # 58
                              ';/layer2/layer2.3/relu/Relu=4' +  # 59
                              ';/layer2/layer2.3/relu_1/Relu=16' +  # 60
                              ';/layer2/layer2.4/relu/Relu=4' +  # 61
                              ';/layer2/layer2.4/relu_1/Relu=16' +  # 62
                              ';/layer2/layer2.5/relu/Relu=3' +  # 63
                              ';/layer2/layer2.5/relu_1/Relu=17' +  # 64
                              ';/layer2/layer2.6/relu/Relu=5' +  # 65
                              ';/layer2/layer2.6/relu_1/Relu=17' +  # 66
                              ';/layer2/layer2.7/relu/Relu=3' +  # 67
                              ';/layer2/layer2.7/relu_1/Relu=17' +  # 68
                              ';/layer2/layer2.8/relu/Relu=3' +  # 69
                              ';/layer2/layer2.8/relu_1/Relu=18' +  # 70
                              ';/layer2/layer2.9/relu/Relu=4' +  # 71
                              ';/layer2/layer2.9/relu_1/Relu=19' +  # 72
                              ';/layer3/layer3.0/relu/Relu=5' +  # 73
                              ';/layer3/layer3.0/relu_1/Relu=14' +  # 74
                              ';/layer3/layer3.1/relu/Relu=4' +  # 75
                              ';/layer3/layer3.1/relu_1/Relu=15' +  # 76
                              ';/layer3/layer3.10/relu/Relu=3' +  # 77
                              ';/layer3/layer3.10/relu_1/Relu=20' +  # 78
                              ';/layer3/layer3.11/relu/Relu=4' +  # 79
                              ';/layer3/layer3.11/relu_1/Relu=20' +  # 80
                              ';/layer3/layer3.12/relu/Relu=4' +  # 81
                              ';/layer3/layer3.12/relu_1/Relu=20' +  # 82
                              ';/layer3/layer3.13/relu/Relu=4' +  # 83
                              ';/layer3/layer3.13/relu_1/Relu=24' +  # 84
                              ';/layer3/layer3.14/relu/Relu=4' +  # 85
                              ';/layer3/layer3.14/relu_1/Relu=27' +  # 86
                              ';/layer3/layer3.15/relu/Relu=4' +  # 87
                              ';/layer3/layer3.15/relu_1/Relu=30' +  # 88
                              ';/layer3/layer3.16/relu/Relu=4' +  # 89
                              ';/layer3/layer3.16/relu_1/Relu=27' +  # 90
                              ';/layer3/layer3.17/relu/Relu=9' +  # 91
                              ';/layer3/layer3.17/relu_1/Relu=33' +  # 92
                              ';/layer3/layer3.2/relu/Relu=3' +  # 93
                              ';/layer3/layer3.2/relu_1/Relu=15' +  # 94
                              ';/layer3/layer3.3/relu/Relu=4' +  # 95
                              ';/layer3/layer3.3/relu_1/Relu=15' +  # 96
                              ';/layer3/layer3.4/relu/Relu=3' +  # 97
                              ';/layer3/layer3.4/relu_1/Relu=15' +  # 98
                              ';/layer3/layer3.5/relu/Relu=3' +  # 99
                              ';/layer3/layer3.5/relu_1/Relu=16' +  # 100
                              ';/layer3/layer3.6/relu/Relu=3' +  # 101
                              ';/layer3/layer3.6/relu_1/Relu=16' +  # 102
                              ';/layer3/layer3.7/relu/Relu=3' +  # 103
                              ';/layer3/layer3.7/relu_1/Relu=16' +  # 104
                              ';/layer3/layer3.8/relu/Relu=3' +  # 105
                              ';/layer3/layer3.8/relu_1/Relu=17' +  # 106
                              ';/layer3/layer3.9/relu/Relu=3' +  # 107
                              ';/layer3/layer3.9/relu_1/Relu=18'  # 108
                              ]
# ASPLOS25 test configurations
ASPLOS25_MODEL = []
ASPLOS25_ACE_OPTION = []


def write_log(info, log):
    '''
    Print out info and write to log file if exists
    '''
    print(info[:-1])
    if log is not None:
        log.write(info)
        log.flush()
    return


def time_and_memory(outputs):
    '''
    Identify time and memory info from time output
    '''
    result = outputs.strip('"').split(' ')
    return float(result[0]), float(result[1]) / 1000000


def get_test_name(model_file):
    '''
    Return test name according to model file name
    e.g. return resnet20_cifar10 for resnet20_cifar10_pre.onnx
    '''
    for idx in EXEC_MEM:
        start = model_file.find(idx)
        if start != -1 and model_file[start + len(idx)] == '_':
            return idx
    return None


def get_exec_mem(model_file):
    '''
    Return memory requirement for the test in Gigabytes
    '''
    idx = get_test_name(model_file)
    if idx is not None:
        return EXEC_MEM[idx]
    return 0


def get_ace_cmplr(cmplr_dir):
    '''
    Find out the executable of ACE compiler
    '''
    for root, _, files in os.walk(cmplr_dir):
        for f in files:
            if f == 'fhe_cmplr':
                return os.path.abspath(os.path.join(root, f))
    return None


def get_ace_option(test, args):
    '''
    Return compilation options for ACE compiler according to tests selected
    '''
    res = []
    # Basic ACE compilation options
    if args.paper == 'cgo25':
        res.extend(CGO25_ACE_OPTION)
    elif args.paper == 'asplos25':
        res.extend(ASPLOS25_ACE_OPTION)
    else:
        res.extend(DEFAULT_OPTION)
    # Relu accuracy tuning options
    if test == 'resnet20_cifar10':
        res.extend(RESNET20_CIFAR10_SIHE_OPT)
    elif test == 'resnet32_cifar10':
        res.extend(RESNET32_CIFAR10_SIHE_OPT)
    elif test == 'resnet32_cifar100':
        res.extend(RESNET32_CIFAR100_SIHE_OPT)
    elif test == 'resnet44_cifar10':
        res.extend(RESNET44_CIFAR10_SIHE_OPT)
    elif test == 'resnet56_cifar10':
        res.extend(RESNET56_CIFAR10_SIHE_OPT)
    elif test == 'resnet110_cifar10':
        res.extend(RESNET110_CIFAR10_SIHE_OPT)
    # Target library option
    res.append('-P2C:lib=' + args.lib)
    # Extra ACE compilation options from command line
    if args.extra is not None:
        res.extend(args.extra)
    return res


def get_onnx_inc_file(test, args):
    '''
    Return the onnx.inc file to be replaced with ACE generated onnx.c in ResNet testing
    '''
    inc_file = test + '_pre.onnx.inc'
    src_path = os.path.abspath(os.path.join(args.src, 'fhe-cmplr'))
    for root, _, files in os.walk(src_path):
        for f in files:
            if inc_file == f:
                return os.path.abspath(os.path.join(root, f))
    return None


def get_cpp_option(cmplr_dir, installed, args):
    '''
    Return include & link options used to generate executable
    '''
    res = []
    ace_lib_to_link = ['libAIRutil.a', 'libFHErt_ant.a', 'libFHErt_common.a']
    res.append('-DRTLIB_SUPPORT_LINUX')
    res.extend(['-I', os.path.join(cmplr_dir, 'include')])
    # append include options
    if installed:
        res.extend(['-I', os.path.join(cmplr_dir, 'rtlib/include/')])
        res.extend(['-I', os.path.join(cmplr_dir, 'rtlib/include/ant/')])
    else:
        src_dir = os.path.abspath(args.src)
        res.extend(['-I', os.path.join(cmplr_dir, 'rtlib/build/_deps/uthash-src/src/')])
        res.extend(['-I', os.path.join(src_dir, 'air-infra/include/')])
        res.extend(['-I', os.path.join(src_dir, 'fhe-cmplr/include/')])
        res.extend(['-I', os.path.join(src_dir, 'nn-addon/include/')])
        res.extend(['-I', os.path.join(src_dir, 'fhe-cmplr/rtlib/ant/include/')])
        res.extend(['-I', os.path.join(src_dir, 'fhe-cmplr/rtlib/include/rt_ant/')])
        res.extend(['-I', os.path.join(src_dir, 'fhe-cmplr/rtlib/include/')])
    # append link options
    res.extend(['-O3', '-DNDEBUG', '-std=gnu++17'])
    if args.omp:
        res.append('-fopenmp')
    for root, _, files in os.walk(cmplr_dir):
        for f in files:
            if f in ace_lib_to_link:
                res.append(os.path.join(root, f))
    return res


def get_cifar_option(test, args):
    '''
    Return the args required to run the test
    '''
    res = None
    if test in EXEC_MEM:
        if test != 'resnet32_cifar100':
            res = os.path.join(os.path.abspath(args.cifar10), 'test_batch.bin')
        else:
            res = os.path.join(os.path.abspath(args.cifar100), 'test.bin')
    return res


def check_required_memory(rq_mem):
    '''
    Check if the system has enough memory to run performance tests
    '''
    mem_info_file = '/proc/meminfo'
    # If we don't know, run anyway
    if not os.path.exists(mem_info_file):
        print(mem_info_file, 'does not exist!')
        return True
    mem_info = open(mem_info_file, 'r')
    total_mem = 0
    free_mem = 0
    for line in mem_info:
        if line.find('MemTotal') != -1:
            total_mem = int(line.split(':')[1].strip().split(' ')[0].strip())
            total_mem /= 1000000
        elif line.find('MemFree') != -1:
            free_mem = int(line.split(':')[1].strip().split(' ')[0].strip())
            free_mem /= 1000000
    mem_info.close()
    if total_mem > rq_mem:
        if free_mem < rq_mem:
            print('Warning: Not enough free memory,', rq_mem, 'GB is required')
            return False
        return True
    print('Warning: Not enough memory,', rq_mem, 'GB is required')
    return False


def ace_compile_and_link(cwd, cmplr_dir, installed, model_file, log, args):
    '''
    Compile and link executable for model_file
    '''
    # model_file : xxx/resnet20_cifar10_pre.onnx
    # model_base : resnet20_cifar10_pre
    model_base, _ = os.path.splitext(os.path.basename(model_file))
    # test : resnet20_cifar10
    test = get_test_name(model_base)
    info = os.path.basename(model_file) + ':\n'
    write_log(info, log)
    indent = ' ' * (len(model_base) + 7)
    exec_file = os.path.join(cwd, model_base + '.ace')
    onnx_c = os.path.join(cwd, model_base + '.c')
    tfile = os.path.join(cwd, model_base + '.t')
    jfile = os.path.join(cwd, model_base + '.json')
    wfile = model_base + '.weight'
    # ACE compile
    ace_cmplr = get_ace_cmplr(cmplr_dir)
    cmds = ['time', '-f', '\"%e %M\"', ace_cmplr, model_file]
    ace_option = get_ace_option(test, args)
    cmds.extend(ace_option)
    cmds.extend(['-P2C:df=' + wfile, '-o', onnx_c])
    if args.debug:
        print(' '.join(cmds))
    if os.path.exists(wfile):
        os.remove(wfile)
    ret = subprocess.run(cmds, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    if not args.keep:
        if os.path.exists(tfile):
            os.remove(tfile)
        if os.path.exists(jfile):
            os.remove(jfile)
    if ret.returncode == 0:
        time, memory = time_and_memory(ret.stderr.decode().splitlines()[-1])
        info = '%sACE: Time = %.2f(s), Memory = %.2f(GB)\n' % (indent, time, memory)
        write_log(info, log)
        if args.stat:
            msg = ret.stdout.decode().splitlines()
            for item in msg:
                # ignore message that has nothing to do with performance statistics
                if item.find('Assertion Failure') != -1 or item.find('width_block_data') != -1:
                    continue
                write_log(indent + item + '\n', log)
    else:
        info = 'ACE: failed\n'
        write_log(info, log)
        info = ' '.join(cmds) + '\n'
        write_log(info, log)
        return None
    # replace onnx.inc with onnx.c
    onnx_inc = get_onnx_inc_file(test, args)
    if onnx_inc is None:
        print('Failed to find source to test %s' % model_base)
        sys.exit(-1)
    cmds = ['cp', onnx_c, onnx_inc]
    if args.debug:
        print(' '.join(cmds))
    ret = subprocess.run(cmds, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
    if ret.returncode != 0:
        print('Failed to replace onnx.c to onnx.inc for %s' % model_base)
        print(' '.join(cmds))
        sys.exit(-1)
    # link executable
    test_src = os.path.join(os.path.dirname(onnx_inc), test + '.cxx')
    if not os.path.exists(test_src):
        print(test_src, 'does not exist!')
        sys.exit(-1)
    cmds = ['time', '-f', '\"%e %M\"', 'c++', test_src]
    cpp_option = get_cpp_option(cmplr_dir, installed, args)
    cmds.extend(cpp_option)
    cmds.extend(['-lgmp', '-lm', '-o', exec_file])
    if args.omp:
        cmds.append('-lgomp')
    if args.debug:
        print(' '.join(cmds))
    ret = subprocess.run(cmds, stdout=subprocess.DEVNULL, stderr=subprocess.PIPE)
    if ret.returncode == 0:
        time, memory = time_and_memory(ret.stderr.decode().splitlines()[-1])
        info = '%sGCC: Time = %.2f(s), Memory = %.2f(GB)\n' % (indent, time, memory)
        # write_log(info, log)
    else:
        info = 'GCC: failed\n'
        write_log(info, log)
        info = ' '.join(cmds) + '\n'
        write_log(info, log)
        return None
    return exec_file


def run_single(exec_file, log, args):
    '''
    Run single encrypted inference
    '''
    model_base, _ = os.path.splitext(os.path.basename(exec_file))
    test = get_test_name(model_base)
    indent = ' ' * (len(model_base) + 7)
    data_file = get_cifar_option(test, args)
    start_idx = str(args.index)
    cmds = ['time', '-f', '\"%e %M\"', exec_file, data_file, start_idx, start_idx]
    os.environ["RTLIB_BTS_EVEN_POLY"] = "1"
    if args.stat:
        os.environ["RTLIB_TIMING_OUTPUT"] = "stdout"
    if args.debug:
        print(' '.join(cmds))
    ret = subprocess.run(cmds, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    if ret.returncode == 0:
        time, memory = time_and_memory(ret.stderr.decode().splitlines()[-1])
        accuracy = 0.0
        msg = ret.stdout.decode().splitlines()
        for line in msg:
            if line.find('[RESULT]') == -1:
                continue
            item = line.split(' ')
            accuracy = float(item[6].strip().split(',')[0].strip()) * 100
        info = '%sExec: Time = %.1f(s), Memory = %.1f(GB), Accuracy = %.1f%%\n' % (
            indent, time, memory, accuracy)
        write_log(info, log)
        if args.stat:
            for item in msg:
                write_log(indent + item + '\n', log)
    else:
        info = 'Exec: failed'
        if ret.returncode > 128:
            info += ' due to ' + signal.Signals(ret.returncode - 128).name
        info += '\n'
        write_log(info, log)
        info = ' '.join(cmds) + '\n'
        write_log(info, log)
    return


def run_cmd(cmd):
    '''
    Function used in multiprocessing
    '''
    ret = subprocess.run(cmd, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    return ret


def calculate_process_num(image_num, log):
    '''
    Calculate parallel process number
    '''
    num_cpus = 1
    num_process = 1
    all_cpus = psutil.cpu_count(logical=False)
    if all_cpus is None:
        info = 'CPU info unavailable, proceed with 1 CPU and 1 Process\n'
    else:
        num_batch = math.ceil(image_num / all_cpus)
        num_cpus = int(image_num / num_batch)
        if (image_num % num_batch) != 0:
            num_cpus += 1
        num_process = int(all_cpus / num_cpus)
        info = 'Available CPU: %d, Required CPU: %d, Process: %d\n' % (
            all_cpus, num_cpus, num_process)
    write_log(info, log)
    return num_cpus, num_process


def run_parallel(exec_files, log, args):
    '''
    Run encrypted inference in parallel with given image numbers
    '''
    image_num = args.num
    num_cpus, num_process = calculate_process_num(image_num, log)
    total_time = 0.0
    max_memory = 0.0
    all_cmds = []
    for exec_file in exec_files:
        model_base, _ = os.path.splitext(os.path.basename(exec_file))
        test = get_test_name(model_base)
        data_file = get_cifar_option(test, args)
        start_idx = str(args.index)
        end_idx = str(args.index + args.num - 1)
        cmds = ['time', '-f', '\"%e %M\"', exec_file, data_file, start_idx, end_idx]
        all_cmds.append(cmds)
    os.environ["RTLIB_BTS_EVEN_POLY"] = "1"
    os.environ["RT_BTS_CLEAR_IMAG"] = "1"
    os.environ["OMP_NUM_THREADS"] = str(num_cpus)
    start_time = datetime.datetime.now()
    with Pool(num_process) as p:
        results = p.map(run_cmd, all_cmds)
        p.close()
        p.join()
    end_time = datetime.datetime.now()
    spend_time = (end_time - start_time).total_seconds()
    for ret in results:
        accuracy = 0.0
        model_base, _ = os.path.splitext(os.path.basename(ret.args[3]))
        test = get_test_name(model_base)
        msg = ret.stdout.decode().splitlines()
        if ret.returncode == 0:
            time, memory = time_and_memory(ret.stderr.decode().splitlines()[-1])
            total_time += time
            if max_memory < memory:
                max_memory = memory
            for line in msg:
                if line.find('[RESULT]') == -1:
                    continue
                item = line.split(' ')
                accuracy = float(item[6].strip().split(',')[0].strip()) * 100
            info = '%s: Accuracy = %.1f%%, Time = %.2f(s), Memory = %.1f(GB)\n' % (model_base,
                accuracy, time, memory)
            write_log(info, log)
            if args.stat:
                info = '---> Detailes:\n'
                write_log(info, log)
                for item in msg:
                    write_log(item + '\n', log)
                info = '<--- Detailes.\n'
                write_log(info, log)
        else:
            info = 'Inference Failed\n'
            write_log(info, log)
            info = ' '.join(ret.args) + '\n'
            write_log(info, log)
            for item in msg:
                write_log(item + '\n', log)
            for item in ret.stderr.decode().splitlines():
                write_log(item + '\n', log)
    info = 'Spent time = %.2f(s), Total time = %.2f(s), Max memory usage = %.1f(Gb)\n' % (spend_time, total_time, max_memory)
    write_log(info, log)
    return


def get_test_onnx_models(args):
    '''
    Collect onnx model files that are to run in the test
    '''
    ret = []
    if args.file is not None:
        if not os.path.exists(os.path.abspath(args.file)):
            print(args.file, 'does not exist!')
            sys.exit(-1)
        ret.append(os.path.abspath(args.file))
    else:
        model_dir = os.path.abspath(args.model)
        model_files = [f for f in os.listdir(
            model_dir) if os.path.isfile(os.path.join(model_dir, f))]
        model_files.sort()
        if args.paper is not None:
            test_set = CGO25_MODEL
            if args.paper == 'asplos25':
                test_set = ASPLOS25_MODEL
            for test in test_set:
                found = False
                for model_file in model_files:
                    if get_test_name(model_file) == test:
                        ret.append(os.path.join(model_dir, model_file))
                        found = True
                        break
                if not found:
                    print('Pre-train onnx model for %s is missing under %s' % (test, model_dir))
                    sys.exit(-1)
        else:
            for model_file in model_files:
                ret.append(os.path.join(model_dir, model_file))
    return ret


def env_check(args):
    '''
    Check testing environment
    '''
    # get onnx models to test
    onnx_models = get_test_onnx_models(args)
    # check required cifar data
    cifar10 = False
    cifar100 = False
    for model in onnx_models:
        test = get_test_name(model)
        if test.find('cifar100') != -1:
            cifar100 = True
        elif test.find('cifar10') != -1:
            cifar10 = True
    if cifar10:
        cifar_dir = os.path.abspath(args.cifar10)
        if not os.path.exists(cifar_dir):
            print(cifar_dir, 'does not exist!')
            sys.exit(-1)
        cifar_data = os.path.join(cifar_dir, 'test_batch.bin')
        if not os.path.exists(cifar_data):
            print(cifar_data, 'does not exist!')
            sys.exit(-1)
    if cifar100:
        cifar_dir = os.path.abspath(args.cifar100)
        if not os.path.exists(cifar_dir):
            print(cifar_dir, 'does not exist!')
            sys.exit(-1)
        cifar_data = os.path.join(cifar_dir, 'test.bin')
        if not os.path.exists(cifar_data):
            print(cifar_data, 'does not exist!')
            sys.exit(-1)
    # check ACE compiler
    build_dir = args.build
    cmplr_dir = args.cmplr
    installed = False
    if build_dir is None and cmplr_dir is None:
        cmplr_dir = './build'
    elif cmplr_dir is None:
        cmplr_dir = build_dir
    else:
        installed = True
    cmplr_dir = os.path.abspath(cmplr_dir)
    if not os.path.exists(cmplr_dir):
        print(cmplr_dir, 'does not exist!')
        sys.exit(-1)
    ace_cmplr = get_ace_cmplr(cmplr_dir)
    if ace_cmplr is None:
        print('Failed to locate fhe_cmplr under %s! Please build/install ACE compiler first!' % cmplr_dir)
        sys.exit(-1)
    # check memory requirement for tests
    rq_mem = 0
    for model_file in onnx_models:
        tmp = get_exec_mem(model_file)
        if tmp > rq_mem:
            rq_mem = tmp
    if not check_required_memory(rq_mem):
        sys.exit(-1)
    # check repo source
    src_path = os.path.abspath(os.path.join(args.src, 'fhe-cmplr'))
    if not os.path.exists(src_path):
        print(src_path, 'does not exist!')
        sys.exit(-1)
    return cmplr_dir, installed, onnx_models


def run_perf_test(cwd, cmplr_dir, installed, model_files, date_time, args):
    '''
    Run performance testing
    '''
    log_file_name = date_time + '.perf.log'
    log = open(os.path.join(cwd, log_file_name), 'w')
    # run tests
    info = '#### log for: %s\n' % (' '.join(sys.argv))
    write_log(info, log)
    info = '-------- ACE Performance --------\n'
    write_log(info, log)
    for model_file in model_files:
        exec_file = ace_compile_and_link(cwd, cmplr_dir, installed, model_file, log, args)
        if exec_file is None:
            continue
        run_single(exec_file, log, args)
    info = '-------- Done --------\n'
    write_log(info, log)
    log.close()
    return


def run_acc_test(cwd, cmplr_dir, installed, model_files, date_time, args):
    '''
    Run accuracy testing
    '''
    start_idx = str(args.index)
    end_idx = str(args.index + args.num - 1)
    log_file_name = date_time + '.acc.' + start_idx + '.' + end_idx + '.log'
    log = open(os.path.join(cwd, log_file_name), 'w')
    # run tests
    info = '#### log for: %s\n' % (' '.join(sys.argv))
    write_log(info, log)
    info = '-------- ACE Accuracy for %d Images --------\n' % args.num
    write_log(info, log)
    exec_files = []
    for model_file in model_files:
        exec_file = ace_compile_and_link(cwd, cmplr_dir, installed, model_file, log, args)
        if exec_file is not None:
            exec_files.append(exec_file)
    run_parallel(exec_files, log, args)
    info = '-------- Done --------\n'
    write_log(info, log)
    log.close()
    return


def main(args):
    '''
    Main function for running ACE compiler performance testing
    '''
    cwd = os.getcwd()
    cmplr_dir, installed, onnx_models = env_check(args)
    date_time = datetime.datetime.now().strftime("%Y_%m_%d_%H_%M")
    run_perf = not args.acc or args.all
    run_acc = args.acc or args.all
    if run_perf:
        run_perf_test(cwd, cmplr_dir, installed, onnx_models, date_time, args)
    if run_acc:
        run_acc_test(cwd, cmplr_dir, installed, onnx_models, date_time, args)
    return


if __name__ == "__main__":
    parser = argparse.ArgumentParser(
        description='Run performance and/or accuracy tests for ACE Compiler')
    parser.add_argument('-a', '--all', action='store_true', default=False,
                        help='Run both performance and accuracy tests')
    parser.add_argument('-b', '--build', metavar='PATH',
                        help='Directory where the ACE compiler is built')
    parser.add_argument('-c', '--cmplr', metavar='PATH',
                        help='Installation directory of the ACE compiler')
    parser.add_argument('-cf10', '--cifar10', metavar='PATH', default='./cifar-10-batches-bin',
                        help='Direcotry where the cifar10 data are placed')
    parser.add_argument('-cf100', '--cifar100', metavar='PATH', default='./cifar-100-binary',
                        help='Direcotry where the cifar100 data are placed')
    parser.add_argument('-d', '--debug', action='store_true', default=False,
                        help='Print out debug info')
    parser.add_argument('-e', '--extra', metavar='OPTIONS', nargs='*',
                        help='Extra ACE compilation options')
    parser.add_argument('-f', '--file', metavar='PATH',
                        help='Test single ONNX model')
    parser.add_argument('-i', '--index', type=int, default=0,
                        help='Index of the starting image to inference, range: [0, 9999]')
    parser.add_argument('-k', '--keep', action='store_true', default=False,
                        help='Keep files generated in the test')
    parser.add_argument('-l', '--lib', choices=['ant', 'seal', 'openfhe'], default='ant',
                        help='Target library to link')
    parser.add_argument('-m', '--model', metavar='PATH', default='./model',
                        help='Directory holds the onnx models to be tested')
    parser.add_argument('-n', '--num', type=int, default=1,
                        help='Number of images to run for each model, ranges: [1, 10000]')
    parser.add_argument('-o', '--omp', action='store_true', default=False,
                        help='Indicate if it is OpenMP version of ACE compiler')
    parser.add_argument('-oa', '--acc', action='store_true', default=False,
                        help='Run accuracy test only')
    parser.add_argument('-p', '--paper', choices=['cgo25', 'asplos25'],
                        help='Reproduce paper results')
    parser.add_argument('-s', '--src', metavar='PATH', default='./',
                        help='Directory that holds repos of air-infra, fhe-cmplr & nn-addon')
    parser.add_argument('-t', '--stat', action='store_true', default=False,
                        help='Print out detailed statistics info [into log file]')
    args = parser.parse_args()
    main(args)
