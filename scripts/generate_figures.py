#!/usr/bin/python3

import os
import sys
import argparse
import matplotlib
matplotlib.rcParams['pdf.fonttype'] = 42
import matplotlib.pyplot as plt
import numpy as np
import math
import shutil
import pandas as pd
from plot_utils import *  # noqa F403
#plt.rc('text', usetex=True)
#plt.rc('font', family='monospace', weight='bold')


def get_data(data: str) -> pd.DataFrame:
    """
    Transform input string data into a pandas DataFrame.
    """

    lines = data.strip().split('\n')
    rows = []
    for line in lines:
        parts = line.split()
        row = {
            'Kernel': parts[0],
            'Slot Util.': parts[1],
            'Rotations': parts[2],
            'Time (secs)': parts[3],
            'Slot Util.2': parts[4],
            'Rotations2': parts[5],
            'Time (secs)2': parts[6],
            'Speedup': parts[7],
        }
        rows.append(row)

 
    df = pd.DataFrame(rows)
    df = df.set_index("Kernel")
    print(f"{df}")
    return df


def gen_table456(output_dir: str):
    data4 = """
    Conv1 100% 40 29.45 50% 17 2.26 13.03×
    Conv2 100% 56 42.25 50% 26 4.19 10.08×
    Conv3 100% 73 43.85 50% 28 2.89 15.17×
    Conv4 100% 90 45.01 50% 32 3.12 14.43×
    """

    data5 = """
    Conv1_Large 100% 3,220 12,089 100% 1,096 88.50 136.60×
    Conv2_Large 100% 4,142 13,686 100% 1,060 89.29 153.28×
    Conv3_Large 100% 4,628 13,508 100% 1,042 101.01 133.73×
    Conv4_Large 100% 5,127 13,220 100% 1,033 149.87 88.21×
    """

    data6 = """
    MVM1 100% 6,658 3,060.60 50% 71 16.49 185.60×
    MVM2 76.6% 65,535 >20h 76.6% 135 48.84 –
    """

    data_table4 = get_data(data4) 
    data_table5 = get_data(data5) 
    data_table6 = get_data(data6) 

    plot_table_chart456(data_table4, "table4.pdf", output_dir)
    plot_table_chart456(data_table5, "table5.pdf", output_dir)
    plot_table_chart456(data_table6, "table6.pdf", output_dir)


p_row = {columns[i]: '' for i in range(10)}
p_row[columns[2]]='Conv'
p_row[columns[3]]='MVM'
p_row[columns[4]]='Total'
p_row[columns[6]]='Conv'
p_row[columns[7]]='MVM'
p_row[columns[8]]='Total'

cifar10_row = {columns[i]: '' for i in range(10)}
cifar10_row[columns[0]]='$\mathbf{CIFAR10\ Models}$'

imagenet_row = {columns[i]: '' for i in range(10)}
imagenet_row[columns[0]]='$\mathbf{ImageNet\ Models}$'

def get_data7(data: str) -> pd.DataFrame:
    """
    Transform input string data into a pandas DataFrame.
    """

    lines = data.strip().split('\n')
    rows = []
    rows.append(p_row)
    rows.append(cifar10_row)
    i=0
    for line in lines:
        i+=1
        print(line)
        parts = shlex.split(line)
        row = {columns[i]: parts[i] for i in range(10)}    
        rows.append(row)
        if i == 5:
            rows.append(imagenet_row)

    df = pd.DataFrame(rows)
    df = df.set_index("Models")
    print(f"{df}")
    return df

def gen_table7(output_dir: str):
    data7 = """
    ResNet20 39.50 457.64 0.758 1905.05 1.42 107.05 1.23 1070.37 1.78×
    SqueezeNet 39.07 1301.67 0.63 2377.25 2.11 240.92 3.17 1359.2 1.75×
    AlexNet 283.55 7950.07 3164.95 11794.99 77.39 78.38 55.72 995.89 11.84×
    VGG11 53.69 3965.14 0.80 4,687.14 1.88 66.82 4.91 757.19 6.19×
    MobileNet – – – – 0.97 101.52 10.22 1662.27 –
    ResNet18 >10h 'OOM(1st Layer)' – – 49.56 5439.06 4.04 11717 –
    SqueezeNet >10h 'OOM(1st Layer)' – – 18.93 4441.22 4.29 13534 –
    AlexNet >10h 'OOM(1st Layer)' – – 338.21 2049.48 48.38 4364 –
    VGG11 >10h 'OOM(1st Layer)' – – 812.14 9275.19 69.14 28652 –
    """

    data_table7 = get_data7(data7) 
    plot_table_chart7(data_table7, "table7.pdf", output_dir)



# used for table 8
num_slots = 32768

def get_num_rot(rep, bs, gs, ps):
    log_result = math.ceil(math.log2(rep))
    return log_result + (bs - 1) + (gs - 1) + (ps - 1)


def count_factors(n):
    if n < 1:
        return 0
    count = 0
    for i in range(1, int(n**0.5) + 1):
        if n % i == 0:
            if i * i == n:
                count += 1
            else:
                count += 2
    return count


def imra_cost_model_conv(nd, kd, num_slots, orig_bs, output_size):
    min_cost = nd * kd
    bs = pb = ps = cost = 0
    num_search = 0

    bs=orig_bs

    
    pb = nd
    if output_size > num_slots // 2:
        ps = 1
    else:
        ps = num_slots // 2 // output_size
    
    delta=0
    num_ps = count_factors(nd)
    for i in  range(1, ps + 1):
        if (nd % i != 0):
            continue
        delta += 1
        num_search += (num_ps+1-delta)
    if output_size > num_slots // 2:
        num_search = 1

    return bs, pb, ps, cost, num_search


def imra_cost_model(nd, kd, num_slots):
    min_cost = nd * kd
    bs = pb = ps = cost = 0
    num_search = 0

    # Generate all divisors of nd
    divisors = []
    for i in range(1, int(nd) + 1):
        if nd % i == 0:
            divisors.append(i)

    for curr_bs in divisors:
        curr_pb = nd // curr_bs
        max_ps = curr_pb

        for curr_ps in range(1, max_ps + 1):
            if (curr_pb % curr_ps != 0 or
                (kd * curr_ps + nd > num_slots and kd != num_slots) or
                (kd == num_slots and curr_ps > 1)):
                continue

            curr_rep = math.ceil((kd * curr_ps + nd) / kd)
            curr_cost = get_num_rot(curr_rep, curr_bs, curr_pb // curr_ps, curr_ps)
            num_search += 1

            if (curr_cost < min_cost) or (curr_cost == min_cost and curr_ps > ps):
                min_cost = curr_cost
                bs = curr_bs
                pb = curr_pb
                ps = curr_ps

    cost = min_cost
    return bs, pb, ps, cost, num_search


def search_conv(channel_in, height, width, channel_out, k, slots):

    x = y = z = 1
    spatial_size = height * width

    if spatial_size >= slots:
        # Spatial dimension too big for one ciphertext
        z = spatial_size // slots
        if spatial_size % slots != 0:
            z += 1

        # AIR_ASSERT: Ensure that height is divisible by z (for hardware alignment)
        assert height % z == 0, f"Height {height} must be divisible by z={z}"

        y = channel_in
        x = channel_out
    else:
        # Input can fit spatially in a single ciphertext; now shard across channels
        input_size = channel_in * spatial_size
        y = input_size // slots
        if input_size % slots != 0:
            y += 1

        # Find smallest y such that y divides channel_in
        while channel_in % y != 0:
            y += 1

        # Do the same for output
        output_size = channel_out * spatial_size
        x = output_size // slots
        if output_size % slots != 0:
            x += 1

        # Find smallest x such that x divides channel_out
        while channel_out % x != 0:
            x += 1

    PO=x
    PI=y

    # conv bs is k*k, blocked IRMA.
    bs=k*k
    ps=1
    pb=1
    num_search=1

    if PO > 1 or PI >1:
        pb = channel_in // PI
    else:
        nd = min(channel_in, channel_out)
        kd = max(channel_in, channel_out)
        bs, pb, ps, cost, num_search=imra_cost_model_conv(nd, kd, num_slots, k*k, output_size)

    return PI, PO, num_search, pb, ps, bs


# Benchmark
mvm_bench = [
    {
        "name": "MVM1",
        "shape": [4096, 4096]  # 
    },
    {
        "name": "MVM2",
        "shape": [4096, 32768]  # 25088 pad to 32768 
    }
]

conv_bench = [
    {
        "name": "Conv1",
        "input_shape": [4, 32, 32], # padding divisible
        "weight_shape": [16, 3, 3, 3]
    },
    {
        "name": "Conv2",
        "input_shape": [16, 32, 32],
        "weight_shape": [16, 16, 3, 3]
    },
    {
        "name": "Conv3",
        "input_shape": [32, 16, 16],
        "weight_shape": [32, 32, 3, 3]
    },
    {
        "name": "Conv4",
        "input_shape": [64, 8, 8],
        "weight_shape": [64, 64, 3, 3]
    },
    {
        "name": "Conv1_Large",
        "input_shape": [64, 56, 56],
        "weight_shape": [64, 64, 3, 3]
    },
    {
        "name": "Conv2_Large",
        "input_shape": [128, 28, 28],
        "weight_shape": [128, 128, 3, 3]
    },
    {
        "name": "Conv3_Large",
        "input_shape": [256, 14, 14],
        "weight_shape": [256, 256, 3, 3]
    },
    {
        "name": "Conv4_Large",
        "input_shape": [512, 7, 7],
        "weight_shape": [512, 512, 3, 3]
    },
]


print(f"{'Bench':<12} {'PI':<6} {'PO':<6}  {'search':<10} {'pb':<8} {'ps':<8} {'bs':<8}")
print("-" * 60)


def gen_table8(output_dir):
    table_data=[]

    for conv in conv_bench:
        name = conv["name"]
        c_in, h, w = conv["input_shape"]
        c_out, _, _, k = conv["weight_shape"]
        pi,po,search,pb,ps,bs=search_conv(c_in, h, w, c_out, k,num_slots)
        result_dict = {
            "Kernel": name,  # You may need to generate this dynamically
            "P_I": str(pi),     # Convert numeric values to strings
            "P_O": str(po),
            "Search Space": str(search),
            "P_b": str(pb),
            "P_s": str(ps),
            "bs^opt": str(bs)
        }
        table_data.append(result_dict)  # Add dictionary to list

        print(f"{name:<12} {pi:<6} {po:<6}  {search:<10} {pb:<8} {ps:<8} {bs:<8}")


    for mvm in mvm_bench:
        name = mvm["name"]
        nd, kd = mvm["shape"]

        bs, pb, ps, cost, search = imra_cost_model(nd, kd, num_slots)
        result_dict = {
            "Kernel": name,  # You may need to generate this dynamically
            "P_I": "n/a",     # Convert numeric values to strings
            "P_O": "n/a",
            "Search Space": str(search),
            "P_b": str(pb),
            "P_s": str(ps),
            "bs^opt": str(bs)
        }
        table_data.append(result_dict)    
        print(f"{name:<12} {'-':<6} {'-':<6}  {search:<10} {pb:<8} {ps:<8} {bs:<8}")


    print(table_data)
    df = pd.DataFrame(table_data)
    df = df.set_index("Kernel")

    plot_table_chart8(df, "table8.pdf", output_dir)



def gen_figure7(output_dir: str):
    comp_category_labels = [
        "Conv1", "Conv2", "Conv3", "Conv4",
        "Conv1_Large", "Conv2_Large", "Conv3_Large", "Conv4_Large",
        "MVM1", "MVM2"
    ]

    comp_series1_data = [
        1.55, 3.06, 2.88, 2.72,
        21.85, 21.76, 20.48, 19.38,
        10.48, 882.63
    ]

    comp_series2_data = [
        0.20, 0.27, 0.24, 0.21,
        3.56, 3.01, 3.22, 2.41,
        86.57, 573.31
    ]

    plot_compile_time_chart(
        category_labels=comp_category_labels,
        series1_data=comp_series1_data,
        series2_data=comp_series2_data,
        series1_name="Fhelipe",
        series2_name="MKR",
        title="Comparison of Times",
        y_axis_label="Comp. Time (secs, $\mathbf{log}_{\mathbf{10}}$ scale)",
        output_filename="Figure7.pdf",
        output_dir=output_dir
    )

def gen_figure8(output_dir: str):
    run_category_labels = ['ResNet20', 'SqueezeNet', 'AlexNet', 'VGG11']

    fhelipe_conv = [457.64, 1301.67, 7950.07, 3965.14]
    mkr_conv = [107.05, 240.92, 78.38, 66.82]

    fhelipe_mvm = [0.758, 0.63, 3164.95, 0.8]
    mkr_mvm = [1.23, 3.17, 55.72, 4.91]

    series1_data_part1 = [457.64, 1301.67, 7950.07, 3965.14]
    series2_data_part1 = [107.05, 240.92, 78.38, 66.82]

    series1_data_part2 = [0.758, 0.63, 3164.95, 0.8]
    series2_data_part2 = [1.23, 3.17, 55.72, 4.91]

    plot_run_time_chart(
            run_category_labels,
            series1_data_part1,
            series2_data_part1,
            series1_data_part2,
            series2_data_part2,
            series1_name_part1="Fhelipe(Conv)",
            series2_name_part1="MKR(Conv)",
            series1_name_part2="Fhelipe(MVM)",
            series2_name_part2="MKR(MVM)",
            title="Comparison of Times",
            y_axis_label="Execution Time (secs)",
            output_filename="Figure8.pdf",
            output_dir=output_dir
    )


def main():
    # read mkr/fhelipe log files to get performance data, use fake data now
    # generate figures

    parser = argparse.ArgumentParser(
        description="A script that generates figures in MKR OOPSLA'25 paper."
    )

    parser.add_argument(
        '-o', '--output-dir',
        type=str,
        default='/app/mkr_ae_result',
        help='Specify the directory to save output files. Defaults to "/app/mkr_ae_result".'
    )

    args = parser.parse_args()

    # Get the output directory specified by the user or the default one
    output_directory = args.output_dir

    print(f"Script execution started...")
    print(f"Output files will be saved to directory: '{output_directory}'")

    # Ensure the output directory exists
    # exist_ok=True means os.makedirs will not raise an error if the directory already exists
    try:
        os.makedirs(output_directory, exist_ok=True)
        print(f"Ensured output directory exists or was successfully created: '{output_directory}'")
    except OSError as e:
        print(f"Error: Unable to create output directory '{output_directory}': {e}")
        return # Exit the script if directory creation fails


    gen_table456(output_directory)
    gen_table7(output_directory)
    gen_table8(output_directory)
    gen_figure7(output_directory)
    gen_figure8(output_directory)    


if __name__ == "__main__":
    main()

