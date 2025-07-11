import pandas as pd
from plot_utils import plot_table_chart45, plot_table_chart6, plot_table_chart7, plot_table_chart8, \
    plot_compile_time_chart, plot_run_time_chart
from data_processing import format_speedup, process_special_mvm2
import config
import cost_model


# --- Helper for Table 4, 5 ---
def _get_table45_row(fhelipe_data, mkr_data, op_fhelipe, op_mkr, kernel):
    speedup_val = format_speedup(fhelipe_data[op_fhelipe]['Runtime'], mkr_data[op_mkr]['Runtime'])
    return {
        'Kernel': kernel,
        'Slot Util.': fhelipe_data[op_fhelipe]['SlotUtil'],
        'Rotations': fhelipe_data[op_fhelipe]['Rotations'],
        'Time (secs)': fhelipe_data[op_fhelipe]['Runtime'],
        'Slot Util.2': mkr_data[op_mkr]['SlotUtil'],
        'Rotations2': mkr_data[op_mkr]['Rotations'],
        'Time (secs)2': mkr_data[op_mkr]['Runtime'],
        'Speedup': speedup_val
    }

def _get_table6_row(fhelipe_data, mkr_data, bsgs_data, op_fhelipe, op_mkr, kernel):
    fhelipe_speedup = format_speedup(fhelipe_data[op_fhelipe]['Runtime'], mkr_data[op_mkr]['Runtime'])
    bsgs_speedup = format_speedup(bsgs_data[op_mkr]['Runtime'], mkr_data[op_mkr]['Runtime'])
    return {
        'Kernel': kernel,
        'Slot Util.': fhelipe_data[op_fhelipe]['SlotUtil'],
        'Rotations': fhelipe_data[op_fhelipe]['Rotations'],
        'Time (secs)': fhelipe_data[op_fhelipe]['Runtime'],
        'Slot Util.2': bsgs_data[op_mkr]['SlotUtil'],
        'Rotations2': bsgs_data[op_mkr]['Rotations'],
        'Time (secs)2': bsgs_data[op_mkr]['Runtime'],
        'Slot Util.3': mkr_data[op_mkr]['SlotUtil'],
        'Rotations3': mkr_data[op_mkr]['Rotations'],
        'Time (secs)3': mkr_data[op_mkr]['Runtime'],
        'Speedup (FHELIPE)': fhelipe_speedup,
        'Speedup (BSGS)': bsgs_speedup
    }

def gen_table45(fhelipe_data, mkr_data, output_dir):
    table_configs = [
        {"name": "Table4", "kernels": ['Conv1', 'Conv2', 'Conv3', 'Conv4'],
         "special_processing": None},
        {"name": "Table5", "kernels": ['Conv1_Large', 'Conv2_Large', 'Conv3_Large', 'Conv4_Large'],
         "special_processing": None}
    ]
    for conf in table_configs:
        if conf["special_processing"]:
            conf["special_processing"]()
        rows = [_get_table45_row(fhelipe_data, mkr_data, config.SINGLE_OP_MAP[k]['fhelipe'],
                                  config.SINGLE_OP_MAP[k]['mkr'], k) for k in conf['kernels']]
        df = pd.DataFrame(rows).set_index("Kernel")
        plot_table_chart45(df, f"{conf['name']}.pdf", output_dir)


def gen_table6(fhelipe_data, mkr_data, bsgs_data, output_dir):
    conf = {"name": "Table6", "kernels": ['MVM1', 'MVM2'],
         "special_processing": lambda: process_special_mvm2(fhelipe_data,
                                                            config.SINGLE_OP_MAP['MVM2'][
                                                                'fhelipe'])}
    if conf["special_processing"]:
        conf["special_processing"]()
        rows = [_get_table6_row(fhelipe_data, mkr_data, bsgs_data, config.SINGLE_OP_MAP[k]['fhelipe'],
                                    config.SINGLE_OP_MAP[k]['mkr'], k) for k in conf['kernels']]
        df = pd.DataFrame(rows).set_index("Kernel")
        plot_table_chart6(df, f"{conf['name']}.pdf", output_dir)


def _get_table7_row(label, fhelipe_data, mkr_data):
    """Generates a single, clean data row for Table 7."""
    # Fhelipe data extraction
    op_key_f = config.E2E_MODEL_MAP.get(label, {}).get('fhelipe')
    perf_f = fhelipe_data.get(op_key_f, {})

    # MKR data extraction
    op_key_m = config.E2E_MODEL_MAP.get(label, {}).get('mkr')
    perf_m = mkr_data.get(op_key_m, {})

    # Complex default value logic for Fhelipe
    default_val, default_val1, default_val2 = '–', '–', '–'
    if label in ['ResNet18', 'SqueezeNet_Imagenet', 'AlexNet_Imagenet', 'VGG11_Imagenet']:
        default_val1 = '>10h'
        default_val2 = 'OOM (1st Layer)'

    fhelipe_runtime = perf_f.get('Runtime', default_val)
    mkr_runtime = perf_m.get('Runtime', 0)

    # Determine Speedup
    speedup = '–'
    if label not in ['MobileNet', 'ResNet18', 'SqueezeNet_Imagenet', 'AlexNet_Imagenet',
                     'VGG11_Imagenet', 'MobileNet_Imagenet']:
        speedup = format_speedup(fhelipe_runtime, mkr_runtime)

    return [label.removesuffix('_Imagenet'),
            perf_f.get('CompileTime', default_val1),
            perf_f.get('CONVTime', default_val2),
            perf_f.get('GEMMTime', default_val),
            fhelipe_runtime,
            perf_m.get('CompileTime', 0),
            perf_m.get('CONVTime', 0),
            perf_m.get('GEMMTime', 0),
            mkr_runtime,
            speedup]


def get_data7(data: list) -> pd.DataFrame:
    """
    Transform input list data into a pandas DataFrame.
    """
    columns = [
        ('Models'),
        ('compiletime'),
        ('conv'),
        ('mvm'),
        ('total'),
        ('compiletime2'),
        ('conv2'),
        ('mvm2'),
        ('total2'),
        ('Speedup')
    ]
    p_row = {columns[i]: '' for i in range(10)}
    p_row[columns[2]] = 'Conv'
    p_row[columns[3]] = 'MVM'
    p_row[columns[4]] = 'Total'
    p_row[columns[6]] = 'Conv'
    p_row[columns[7]] = 'MVM'
    p_row[columns[8]] = 'Total'

    cifar10_row = {columns[i]: '' for i in range(10)}
    cifar10_row[columns[0]] = '$\mathbf{CIFAR10\ Models}$'

    imagenet_row = {columns[i]: '' for i in range(10)}
    imagenet_row[columns[0]] = '$\mathbf{ImageNet\ Models}$'

    rows = []
    rows.append(p_row)
    rows.append(cifar10_row)
    i = 0
    for line in data:
        i += 1
        print(line)
        row = {columns[i]: line[i] for i in range(10)}
        rows.append(row)
        if i == 5:
            rows.append(imagenet_row)

    df = pd.DataFrame(rows)
    df = df.set_index("Models")
    print(f"{df}")
    return df


def gen_table7(fhelipe_data, mkr_data, output_dir):
    models = ['ResNet20', 'SqueezeNet', 'AlexNet', 'VGG11', 'MobileNet', 'ResNet18',
              'SqueezeNet_Imagenet', 'AlexNet_Imagenet', 'VGG11_Imagenet', 'MobileNet_Imagenet']

    # Build a clean DataFrame first
    data_rows = [_get_table7_row(label, fhelipe_data, mkr_data) for label in models]

    data_table7 = get_data7(data_rows)
    plot_table_chart7(data_table7, "Table7.pdf", output_dir)


def gen_table8(output_dir):
    table_data = []
    for conv in config.CONV_BENCH:
        c_in, h, w = conv["input_shape"]
        c_out, _, _, k = conv["weight_shape"]
        pi, po, search, pb, ps, bs = cost_model.search_conv(c_in, h, w, c_out, k, config.NUM_SLOTS)
        table_data.append(
            {"Kernel": conv["name"], "P_I": str(pi), "P_O": str(po), "Search Space": str(search),
             "P_b": str(pb), "P_s": str(ps), "bs^opt": str(bs)})

    for mvm in config.MVM_BENCH:
        nd, kd = mvm["shape"]
        bs, pb, ps, _, search = cost_model.imra_cost_model(nd, kd, config.NUM_SLOTS)
        table_data.append(
            {"Kernel": mvm["name"], "P_I": "n/a", "P_O": "n/a", "Search Space": str(search),
             "P_b": str(pb), "P_s": str(ps), "bs^opt": str(bs)})

    df = pd.DataFrame(table_data).set_index("Kernel")
    plot_table_chart8(df, "Table8.pdf", output_dir)


def gen_figure7(fhelipe_perf_data: dict, mkr_perf_data: dict, output_dir: str):
    """
    Generates Figure 7 by safely extracting compile times, handling missing data.
    """
    comp_category_labels = [
        "Conv1", "Conv2", "Conv3", "Conv4",
        "Conv1_Large", "Conv2_Large", "Conv3_Large", "Conv4_Large",
        "MVM1", "MVM2"
    ]

    fhelipe_compile_time = []
    for label in comp_category_labels:
        # Use a chain of .get() for safe access. If any step fails, return a default.
        op_key = config.SINGLE_OP_MAP.get(label, {}).get('fhelipe')
        perf_entry = fhelipe_perf_data.get(op_key, {})
        compile_time = perf_entry.get('CompileTime', 0) # Default to 0 if data is missing
        fhelipe_compile_time.append(compile_time)

    # The same robust logic can also be written as a list comprehension
    mkr_compile_time = [
        mkr_perf_data.get(config.SINGLE_OP_MAP.get(label, {}).get('mkr'), {}).get('CompileTime', 0)
        for label in comp_category_labels
    ]

    # For validation and debugging
    # print("--- Generated Robust Data for Figure 7 ---")
    # print(f"Categories: {comp_category_labels}")
    # print(f"Fhelipe Data: {fhelipe_compile_time}")
    # print(f"MKR Data: {mkr_compile_time}")

    plot_compile_time_chart(
        category_labels=comp_category_labels,
        series1_data=fhelipe_compile_time,
        series2_data=mkr_compile_time,
        series1_name="Fhelipe",
        series2_name="MKR",
        title="Comparison of Times",
        y_axis_label="Comp. Time (secs, $\mathbf{log}_{\mathbf{10}}$ scale)",
        output_filename="Figure7.pdf",
        output_dir=output_dir
    )


def _extract_execution_times(
        category_labels: list,
        context: str,
        perf_data: dict,
        op_map: dict
) -> tuple[list, list]:
    """
    Helper function to extract CONV and GEMM execution times for a given context.

    Args:
        category_labels: A list of benchmark names (e.g., 'ResNet20').
        context: The context key (e.g., 'fhelipe' or 'mkr').
        perf_data: The performance data dictionary for the context.
        op_map: The mapping from benchmark name to operation key.

    Returns:
        A tuple containing two lists: (conv_times, gemm_times).
    """
    conv_times = []
    gemm_times = []
    for label in category_labels:
        op_key = op_map.get(label, {}).get(context)
        perf_entry = perf_data.get(op_key, {})

        conv_times.append(perf_entry.get('CONVTime', 0))
        gemm_times.append(perf_entry.get('GEMMTime', 0))

    return conv_times, gemm_times


def gen_figure8(fhelipe_perf_data: dict, mkr_perf_data: dict, output_dir: str):
    run_category_labels = ['ResNet20', 'SqueezeNet', 'AlexNet', 'VGG11']

    # Call the helper function for each context
    fhelipe_conv, fhelipe_gemm = _extract_execution_times(
        run_category_labels, 'fhelipe', fhelipe_perf_data, config.E2E_MODEL_MAP
    )

    mkr_conv, mkr_gemm = _extract_execution_times(
        run_category_labels, 'mkr', mkr_perf_data, config.E2E_MODEL_MAP
    )

    # For validation and debugging
    # print("--- Generated Robust Data for Figure 8 ---")
    # print(f"Categories: {run_category_labels}")
    # print(f"Fhelipe Conv: {fhelipe_conv}")
    # print(f"MKR Conv: {mkr_conv}")
    # print(f"Fhelipe Gemm: {fhelipe_gemm}")
    # print(f"MKR Gemm: {mkr_gemm}")

    # fhelipe_conv = [457.64, 1301.67, 7950.07, 3965.14]
    # mkr_conv = [107.05, 240.92, 78.38, 66.82]
    #
    # fhelipe_gemm = [0.758, 0.63, 3164.95, 0.8]
    # mkr_gemm = [1.23, 3.17, 55.72, 4.91]

    plot_run_time_chart(
        run_category_labels,
        fhelipe_conv,
        mkr_conv,
        fhelipe_gemm,
        mkr_gemm,
        series1_name_part1="Fhelipe(Conv)",
        series2_name_part1="MKR(Conv)",
        series1_name_part2="Fhelipe(MVM)",
        series2_name_part2="MKR(MVM)",
        title="Comparison of Times",
        y_axis_label="Execution Time (secs)",
        output_filename="Figure8.pdf",
        output_dir=output_dir
    )
