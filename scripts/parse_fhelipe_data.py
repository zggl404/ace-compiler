import re
from pathlib import Path
import logging
import math


def compute_fhelipe_slot_util(base_kernel):
    # Define operations with their parameters
    operations = {
        'fc_4096x4096': {'type': 'fc', 'k': 4096, 'n': 4096},
        'fc_4096x25088': {'type': 'fc', 'k': 25088, 'n': 4096},
        'conv_3x16x32x3': {'type': 'conv', 'channel_out': 16, 'channel_in': 3, 'h': 32,
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
            # duplicate k
            util = (math.floor(S / k) * k) / S

        elif params['type'] == 'conv':
            channel_out = params['channel_out']
            channel_in = params['channel_in']
            h = params['h']
            w = h
            input_size = channel_in * h * w
            # duplicate channel_out

            util = (input_size * channel_out) / S

        # Convert to percentage and store
        percentage_dict[op] = f"{min(util * 100, 100):.2f}%"

    # print("\n".join(f"{k}: {v}" for k, v in percentage_dict.items()))
    return percentage_dict.get(base_kernel, "0%")


def extract_fhelipe_data(directory_path):
    """
    Extract FHELIPE performance data from log and timing files in a directory.

    Args:
        directory_path: Path to directory containing log and timing files

    Returns:
        Dictionary with all kernel performance data
    """
    # Configure logging
    logging.basicConfig(level=logging.INFO, format='%(levelname)s: %(message)s')

    # Build paths to required files
    directory = Path(directory_path)
    log_file = directory / "fhelipe.run.log.txt"

    # Validate main log file exists
    if not log_file.exists():
        raise FileNotFoundError(f"Main log file not found: {log_file}")

    # Read main log file content
    log_content = log_file.read_text()

    # Find all kernel names in the log
    kernel_pattern = re.compile(r"Processing case \d+/\d+: (\w+)")
    kernel_names = kernel_pattern.findall(log_content)

    # Find all formatted timing files
    formatted_timing_files = list(directory.glob("*_timing_formatted.txt"))

    # Find all operation time files
    op_time_files = list(directory.glob("*_ops_timing.txt"))

    # Create mappings for files
    formatted_timing_map = {}
    op_time_map = {}

    for file in formatted_timing_files:
        # Extract kernel base name from filename
        base_name = file.stem.replace("_ops_timing_formatted", "")
        base_name = base_name.replace("metak_fhelipe_", "", 1)
        formatted_timing_map[base_name] = file

    for file in op_time_files:
        # Extract kernel base name from filename
        base_name = file.stem.replace("_ops_timing", "")
        base_name = base_name.replace("metak_fhelipe_", "", 1)
        op_time_map[base_name] = file

    # Process each kernel
    results = {}
    for full_kernel in kernel_names:
        # Create base kernel name (without metak_fhelipe_ prefix)
        base_kernel = full_kernel.replace("metak_fhelipe_", "", 1)

        # Initialize kernel data
        kernel_data = {
            "SlotUtil": None,
            "Rotations": 0,
            "CompileTime": None,
            "Runtime": None,
            "CONVTime": 0.0,
            "GEMMTime": 0.0,
        }

        # Extract compile time - from [PHASE] Source Compilation section
        compile_pattern = re.compile(
            rf"Processing case.*?{re.escape(full_kernel)}.*?"
            r"\[PHASE\] Source Compilation.*?"
            r"TIMING: (\d+\.\d+)s",
            re.DOTALL
        )
        compile_match = compile_pattern.search(log_content)
        if compile_match:
            kernel_data["CompileTime"] = round(float(compile_match.group(1)), 2)
        else:
            logging.warning(f"No compile time found for {full_kernel}")

        # Extract runtime - from [PHASE] Execution with Lattigo section
        runtime_pattern = re.compile(
            rf"Processing case.*?{re.escape(full_kernel)}.*?"
            r"\[PHASE\] Execution with Lattigo.*?"
            r"TIMING: (\d+\.\d+)s",
            re.DOTALL
        )
        runtime_match = runtime_pattern.search(log_content)
        if runtime_match:
            kernel_data["Runtime"] = round(float(runtime_match.group(1)), 2)
        else:
            logging.warning(f"No runtime found for {full_kernel}")

        # Extract rotations from formatted timing file
        if base_kernel in formatted_timing_map:
            rotations = extract_rotations(formatted_timing_map[base_kernel])
            kernel_data["Rotations"] = rotations
        else:
            logging.warning(f"No timing file found for {base_kernel}")

        # Extract NN_CONV and NN_GEMM times from operation time file
        if base_kernel in op_time_map:
            op_times = extract_operation_times(op_time_map[base_kernel])
            kernel_data["CONVTime"] = round(op_times.get("conv", 0.0), 2)
            kernel_data["GEMMTime"] = round(op_times.get("linear", 0.0), 2)
        else:
            logging.warning(f"No ops file found for {base_kernel}")

        # Slot utilization not available in files
        kernel_data["SlotUtil"] = compute_fhelipe_slot_util(base_kernel)

        results[base_kernel] = kernel_data

    return results


def extract_rotations(timing_file_path):
    """
    Extract total rotation count from a timing file

    Args:
        timing_file_path: Path to timing file

    Returns:
        Total number of rotation operations
    """
    try:
        content = timing_file_path.read_text()
        rotations = 0

        # Parse table rows
        for line in content.splitlines():
            # Skip header and separator lines
            if not line.startswith('|') or '---' in line or 'OP' in line:
                continue

            parts = [p.strip() for p in line.split('|')[1:-1]]
            if len(parts) < 3:
                continue

            op = parts[0]
            # Sum EXEC values for rotate operations
            if op == 'rotate':
                try:
                    # EXEC is the 4th column (index 3)
                    rotations += int(parts[3])
                except (ValueError, IndexError):
                    continue

        return rotations
    except Exception as e:
        logging.error(f"Error extracting rotations from {timing_file_path}: {str(e)}")
        return 0


def extract_operation_times(op_time_file_path):
    """
    Extract operation times from operation time file

    Args:
        op_time_file_path: Path to operation time file

    Returns:
        Dictionary with operation times for conv and linear
    """
    op_times = {
        "conv": 0.0,
        "linear": 0.0
    }

    try:
        content = op_time_file_path.read_text()

        # Find conv and linear lines
        for line in content.splitlines():
            # Match lines starting with "conv:" or "linear:"
            if line.startswith("conv:") or line.startswith("linear:"):
                parts = line.split()
                if len(parts) >= 2:
                    op_type = parts[0].replace(":", "")
                    try:
                        time_val = float(parts[1])
                        op_times[op_type] = time_val
                    except ValueError:
                        logging.warning(f"Invalid time format in line: {line}")

        return op_times
    except Exception as e:
        logging.error(f"Error extracting operation times from {op_time_file_path}: {str(e)}")
        return op_times


# Example usage
if __name__ == "__main__":
    # Specify directory containing log and timing files
    data_dir = "/app/mkr_ae_result/fhelipe"

    try:
        # Extract data
        performance_data = extract_fhelipe_data(data_dir)

        # Print results
        print("FHELIPE Performance Data:")
        print("{:<25} {:<15} {:<15} {:<15} {:<15} {:<15} {:<15}".format(
            "Kernel", "Slot Util", "Rotations", "Compile Time", "Runtime", "NN_CONV Time",
            "NN_GEMM Time"
        ))
        print("-" * 105)

        for kernel, metrics in performance_data.items():
            print("{:<25} {:<15} {:<15} {:<15.2f} {:<15.2f} {:<15.2f} {:<15.2f}".format(
                kernel,
                str(metrics['SlotUtil']),
                metrics['Rotations'],
                metrics['CompileTime'] or 0.0,
                metrics['Runtime'] or 0.0,
                metrics['CONVTime'] or 0.0,
                metrics['GEMMTime'] or 0.0
            ))
    except Exception as e:
        print(f"Error processing logs: {str(e)}")
