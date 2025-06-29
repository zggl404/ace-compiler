import re
from pathlib import Path
from collections import defaultdict
import logging
import math


def count_factors_util(n):
    if n < 1:
        return 0
    count = 0
    for i in range(1, int(n ** 0.5) + 1):
        if n % i == 0:
            if i * i == n:
                count += 1
            else:
                count += 2
    return count


def get_num_rot_util(rep, bs, gs, ps):
    log_result = math.ceil(math.log2(rep))
    return log_result + (bs - 1) + (gs - 1) + (ps - 1)


def imra_cost_model_conv_util(nd, kd, num_slots, orig_bs, output_size):
    min_cost = nd * kd
    bs = pb = ps = cost = 0
    num_search = 0

    bs = orig_bs

    pb = nd
    if output_size > num_slots // 2:
        ps = 1
    else:
        ps = num_slots // 2 // output_size

    delta = 0
    num_ps = count_factors_util(nd)
    for i in range(1, ps + 1):
        if (nd % i != 0):
            continue
        delta += 1
        num_search += (num_ps + 1 - delta)
    if output_size > num_slots // 2:
        num_search = 1

    return ps


def imra_cost_model_ps(nd, kd, num_slots):
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
            curr_cost = get_num_rot_util(curr_rep, curr_bs, curr_pb // curr_ps, curr_ps)
            num_search += 1

            if (curr_cost < min_cost) or (curr_cost == min_cost and curr_ps > ps):
                min_cost = curr_cost
                bs = curr_bs
                pb = curr_pb
                ps = curr_ps

    cost = min_cost
    return ps


# mkr slot util depends on ps.
def compute_mkr_slot_util(base_kernel: str):
    # Define operations with their parameters
    operations = {
        'gemv_4096x4096': {'type': 'fc', 'k': 4096, 'n': 4096},
        'gemv_4096x25088': {'type': 'fc', 'k': 25088, 'n': 4096},
        # padding to 4 channel_in
        'conv_3x16x32x3': {'type': 'conv', 'channel_out': 16, 'channel_in': 4, 'h': 32,
                           'kernel_size': 3},
        'conv_16x16x32x3': {'type': 'conv', 'channel_out': 16, 'channel_in': 16, 'h': 32,
                            'kernel_size': 3},
        'conv_32x32x16x3': {'type': 'conv', 'channel_out': 32, 'channel_in': 32, 'h': 16,
                            'kernel_size': 3},
        'conv_64x64x8x3': {'type': 'conv', 'channel_out': 64, 'channel_in': 64, 'h': 8,
                           'kernel_size': 3},
        'conv_64x64x56x3': {'type': 'conv', 'channel_out': 64, 'channel_in': 64, 'h': 56,
                            'kernel_size': 3},
        'conv_128x128x28x3': {'type': 'conv', 'channel_out': 128, 'channel_in': 128, 'h': 28,
                              'kernel_size': 3},
        'conv_256x256x14x3': {'type': 'conv', 'channel_out': 256, 'channel_in': 256, 'h': 14,
                              'kernel_size': 3},
        'conv_512x512x7x3': {'type': 'conv', 'channel_out': 512, 'channel_in': 512, 'h': 7,
                             'kernel_size': 3}
    }

    S = 32768  # Number of slots
    percentage_dict = {}

    for op, params in operations.items():
        if params['type'] == 'fc':
            k = params['k']
            n = params['n']
            ps = imra_cost_model_ps(n, k, S)
            util = (ps * k) / S

        elif params['type'] == 'conv':
            # ps parallel
            channel_out = params['channel_out']
            channel_in = params['channel_in']
            h = params['h']
            w = h
            k = params['kernel_size']
            input_size = channel_in * h * w
            output_size = channel_out * h * w
            nd = min(channel_in, channel_out)
            kd = max(channel_in, channel_out)
            ps = imra_cost_model_conv_util(nd, kd, S, k * k, output_size)

            util = (ps * output_size) / S
            if (output_size > S // 2):
                util = 1

        # Convert to percentage and store
        percentage_dict[op] = f"{min(util * 100, 100):.1f}%"

    # print("\n".join(f"{k}: {v}" for k, v in percentage_dict.items()))
    return percentage_dict.get(base_kernel, "0%")


def parse_mkr_engine_logs(directory_path):
    """
    Parse MKR engine output logs to extract performance metrics for each kernel,
    including operation-specific times for NN_CONV and NN_GEMM, and FHE rotation counts.

    Args:
        directory_path: Path to directory containing MKR log files

    Returns:
        Dictionary with kernel performance data including:
        - CompileTime: Sum of ACE and GCC compilation times
        - Runtime: Execution time from "Exec: Time" line
        - Rotations: Total FHE_ROTATE operations
        - CONVTime: Time for NN_CONV operations
        - GEMMTime: Time for NN_GEMM operations
        - SlotUtil: Not available (always None)
    """
    # Configure logging
    logging.basicConfig(level=logging.INFO, format='%(levelname)s: %(message)s')

    # Find all log files in the directory
    log_files = list(Path(directory_path).glob("*.log"))
    if not log_files:
        raise FileNotFoundError(f"No log files found in {directory_path}")

    # Process each log file
    kernel_data = defaultdict(dict)
    for log_file in log_files:
        try:
            content = log_file.read_text()

            # Extract compilation metrics
            compile_metrics = _parse_compilation_section(content)

            # Extract execution metrics, operation times, and rotations
            exec_metrics, op_times, rotation_counts = _parse_execution_section(content)

            # Merge metrics for each kernel
            all_kernels = set(compile_metrics.keys()) | set(exec_metrics.keys()) | set(
                rotation_counts.keys()) | set(op_times.keys())
            for kernel in all_kernels:
                # Compile time - Sum of ACE and GCC times
                if kernel in compile_metrics:
                    kernel_data[kernel]["CompileTime"] = round(compile_metrics[kernel], 2)
                elif kernel not in kernel_data or "CompileTime" not in kernel_data[kernel]:
                    kernel_data[kernel]["CompileTime"] = None

                # Runtime
                if kernel in exec_metrics:
                    kernel_data[kernel]["Runtime"] = exec_metrics[kernel]
                elif kernel not in kernel_data or "Runtime" not in kernel_data[kernel]:
                    kernel_data[kernel]["Runtime"] = None

                # Rotations - FIXED: Correctly capture rotation counts
                if kernel in rotation_counts:
                    kernel_data[kernel]["Rotations"] = rotation_counts[kernel]
                elif "Rotations" not in kernel_data[kernel]:
                    kernel_data[kernel]["Rotations"] = 0

                # Operation times (NN_CONV and NN_GEMM)
                if kernel in op_times:
                    if "NN_CONV Time (secs)" in op_times[kernel]:
                        kernel_data[kernel]["CONVTime"] = round(op_times[kernel][
                            "NN_CONV Time (secs)"], 2)
                    if "NN_GEMM Time (secs)" in op_times[kernel]:
                        kernel_data[kernel]["GEMMTime"] = round(op_times[kernel][
                            "NN_GEMM Time (secs)"], 2)

                # Ensure NN_CONV and NN_GEMM keys exist for every kernel
                if "CONVTime" not in kernel_data[kernel]:
                    kernel_data[kernel]["CONVTime"] = 0
                if "GEMMTime" not in kernel_data[kernel]:
                    kernel_data[kernel]["GEMMTime"] = 0

                # Slot utilization not available
                kernel_data[kernel]["SlotUtil"] = compute_mkr_slot_util(kernel)

        except Exception as e:
            logging.error(f"Error processing {log_file.name}: {str(e)}")

    return dict(kernel_data)


def _parse_compilation_section(content):
    """
    Parse the compilation section to extract ACE and GCC times

    Args:
        content: Log file content

    Returns:
        Dictionary of {kernel: total_compile_time (ACE + GCC)}
    """
    metrics = {}
    # Extract the compilation section
    compile_section_match = re.search(
        r"-------- ACE Compilation --------(.*?)-------- Done --------",
        content,
        re.DOTALL
    )
    if not compile_section_match:
        return metrics

    compile_section = compile_section_match.group(1)

    # Find all kernel entries in the compilation section
    kernel_entries = re.finditer(
        r"^(\w[\w\d_]+):\s*$",
        compile_section,
        re.MULTILINE
    )

    for match in kernel_entries:
        kernel = match.group(1).strip()
        # Find the ACE and GCC times for this kernel
        start_pos = match.end()
        # Look for ACE and GCC lines within this kernel block
        ace_match = re.search(r"ACE: Time = ([\d.]+)\(s\)", compile_section[start_pos:])
        gcc_match = re.search(r"GCC: Time = ([\d.]+)\(s\)", compile_section[start_pos:])

        ace_time = float(ace_match.group(1)) if ace_match else 0
        gcc_time = float(gcc_match.group(1)) if gcc_match else 0

        # Calculate total compile time as ACE + GCC
        metrics[kernel] = ace_time + gcc_time

    return metrics


def _parse_execution_section(content):
    """
    Parse the execution section to extract runtime metrics, operation times, and rotations

    Args:
        content: Log file content

    Returns:
        tuple: (
            exec_metrics: {kernel: runtime},
            op_times: {kernel: {op_name: time_value}},
            rotation_counts: {kernel: rotation_count}
        )
    """
    exec_metrics = {}
    op_times = defaultdict(dict)
    rotation_counts = defaultdict(int)

    # Extract the execution section
    exec_section_match = re.search(r"-------- ACE Performance --------(.*?)\Z", content, re.DOTALL)
    if not exec_section_match:
        return exec_metrics, op_times, rotation_counts

    exec_section = exec_section_match.group(1)

    # Find all kernel entries in the execution section
    kernel_entries = re.finditer(
        r"^(\w[\w\d_]+):\s*$",
        exec_section,
        re.MULTILINE
    )

    # Patterns for metrics extraction
    runtime_pattern = re.compile(r"Exec: Time = ([\d.]+)\(s\)")
    op_pattern = re.compile(r"^\s+(NN_\w+)\s+\d+\s+([\d.]+)\s+sec", re.MULTILINE)
    rotation_pattern = re.compile(r"^\s*FHE_ROTATE\s+(\d+)", re.MULTILINE)

    for match in kernel_entries:
        kernel = match.group(1).strip()
        start_pos = match.end()

        # Find the end of this kernel's section
        next_kernel = re.search(r"^\w[\w\d_]+:\s*$", exec_section[start_pos:], re.MULTILINE)
        end_pos = start_pos + next_kernel.start() if next_kernel else len(exec_section)

        kernel_block = exec_section[start_pos:end_pos]

        # Extract execution time
        runtime_match = runtime_pattern.search(kernel_block)
        if runtime_match:
            exec_metrics[kernel] = float(runtime_match.group(1))

        # Extract operation times
        op_matches = op_pattern.findall(kernel_block)
        for op_name, op_time in op_matches:
            # Only capture NN_CONV and NN_GEMM operations
            if op_name in ["NN_CONV", "NN_GEMM"]:
                op_times[kernel][f"{op_name} Time (secs)"] = float(op_time)

        # FIXED: Extract rotation counts directly from kernel block
        rotations = rotation_pattern.findall(kernel_block)
        for count in rotations:
            rotation_counts[kernel] += int(count)

    return exec_metrics, op_times, rotation_counts


# Example usage
if __name__ == "__main__":
    # Specify directory containing log files
    log_dir = "/app/mkr_ae_result/mkr"

    try:
        # Parse log files
        performance_data = parse_mkr_engine_logs(log_dir)

        # Print results
        print("MKR Engine Performance Data:")
        for kernel, metrics in sorted(performance_data.items()):
            print(f"\nKernel: {kernel}")
            print(f"  Compile Time (secs): {metrics.get('CompileTime', 'N/A')}")
            print(f"  Runtime (secs): {metrics.get('Runtime', 'N/A')}")
            print(f"  Rotations: {metrics.get('Rotations', 'N/A')}")
            print(f"  NN_CONV Time (secs): {metrics.get('CONVTime', 'N/A')}")
            print(f"  NN_GEMM Time (secs): {metrics.get('GEMMTime', 'N/A')}")
            print(f"  Slot Util: {metrics.get('SlotUtil', 'N/A')}")
    except Exception as e:
        print(f"Error processing logs: {str(e)}")
