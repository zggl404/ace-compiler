import re
from pathlib import Path
from collections import defaultdict
import logging


# n/S
def compute_bsgs_slot_util(base_kernel: str):
    # Define operations with their parameters
    operations = {
        'gemv_4096x4096': {'type': 'fc', 'k': 4096, 'n': 4096},
        'gemv_4096x25088': {'type': 'fc', 'k': 25088, 'n': 4096},
    }

    S = 32768  # Number of slots
    percentage_dict = {}

    for op, params in operations.items():
        if params['type'] == 'fc':
            k = params['k']
            n = params['n']
            util = k / S


        # Convert to percentage and store
        percentage_dict[op] = f"{min(util * 100, 100):.2f}%"

    # print("\n".join(f"{k}: {v}" for k, v in percentage_dict.items()))
    return percentage_dict.get(base_kernel, "0%")


def parse_bsgs_logs(directory_path):
    """
    Parse MKR engine output logs to extract performance metrics for each kernel,
    Args:
        directory_path: Path to directory containing MKR log files

    Returns:
        Dictionary with kernel performance data including:
        - Runtime: Execution time from "Exec: Time" line
        - Rotations: Total FHE_ROTATE operations
        - SlotUtil: Not available (always None)
    """

    # Configure logging
    logging.basicConfig(level=logging.INFO, format='%(levelname)s: %(message)s')
    
    pattern = r'BSGS-([^:\s]+)\s*:\s*(num_rot|time)\s*=\s*([0-9.]+)(?:\s+seconds)?'

    # Build paths to required files
    directory = Path(directory_path)
    log_file_path = directory / "bsgs.run.log"

    if not log_file_path:
        raise FileNotFoundError(f"No log files found in {directory_path}")

    kernel_data = defaultdict(dict)
    
    with open(log_file_path, 'r') as file:
        for line in file:
            match = re.search(pattern, line)
            if match:
                mvm_id = match.group(1)     # MVM1, MVM2, etc.
                key_type = match.group(2)   # num_rot or time
                value_str = match.group(3)  # numeric value as string
        
                if mvm_id not in kernel_data:
                    kernel_data[mvm_id] = {}

                if key_type == 'num_rot':
                    kernel_data[mvm_id]['Rotations'] = int(value_str)
                elif key_type == 'time':
                    kernel_data[mvm_id]['Runtime'] = float(value_str)

    # Compute util
    for kernel in kernel_data:
        kernel_data[kernel]["SlotUtil"] = compute_bsgs_slot_util(kernel)
    return dict(kernel_data)


# Example usage
if __name__ == "__main__":
    # Specify directory containing log files
    log_dir = "/app/mkr_ae_result/bsgs/"
    try:
        # Parse log files
        performance_data = parse_bsgs_logs(log_dir)

        # Print results
        print("BSGS Performance Data:")
        for kernel, metrics in sorted(performance_data.items()):
            print(f"\nKernel: {kernel}")
            print(f"  Runtime (secs): {metrics.get('Runtime', 'N/A')}")
            print(f"  Rotations: {metrics.get('Rotations', 'N/A')}")
            print(f"  Slot Util: {metrics.get('SlotUtil', 'N/A')}")
    except Exception as e:
        print(f"Error processing logs: {str(e)}")
