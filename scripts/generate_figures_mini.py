import argparse
import sys
from pathlib import Path
import logging
import numbers
import pandas as pd

import config
from parse_fhelipe_data import extract_fhelipe_data, compute_fhelipe_slot_util
from parse_mkr_data import parse_mkr_engine_logs
from plot_utils import plot_table_chart45
from data_processing import format_speedup


# --- Helper for Table 4 ---
def _get_table4_row(fhelipe_data, mkr_data, op_fhelipe, op_mkr, kernel):
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

def gen_table4(fhelipe_data, mkr_data, output_dir):
    table_configs = [
        {"name": "Table4", "kernels": ['Conv1', 'Conv2'],
         "special_processing": None},
    ]
    for conf in table_configs:
        if conf["special_processing"]:
            conf["special_processing"]()
        rows = [_get_table4_row(fhelipe_data, mkr_data, config.SINGLE_OP_MAP[k]['fhelipe'],
                                  config.SINGLE_OP_MAP[k]['mkr'], k) for k in conf['kernels']]
        df = pd.DataFrame(rows).set_index("Kernel")
        plot_table_chart45(df, f"{conf['name']}.pdf", output_dir)


def load_performance_data(data_dir: Path) -> tuple[dict, dict]:
    """Loads and returns performance data for both Fhelipe and MKR."""
    print("Extracting FHELIPE data...")
    fhelipe_data = extract_fhelipe_data(data_dir / 'fhelipe')

    print("Extracting MKR data...")
    mkr_data = parse_mkr_engine_logs(data_dir / 'mkr')

    assert fhelipe_data, "FHELIPE data is empty!"
    assert mkr_data, "MKR data is empty!"
    
    return fhelipe_data, mkr_data


def setup_environment():
    """Parses command line arguments and creates the output directory."""
    parser = argparse.ArgumentParser(description="Generates mini figures for the MKR OOPSLA'25 paper.")
    parser.add_argument('-o', '--output-dir', type=Path, default=Path('/app/mkr_ae_result/mini'),
                        help='Directory to save output files. Defaults to "/app/mkr_ae_result/mini".')
    args = parser.parse_args()
    
    output_dir = args.output_dir
    logging.info(f"Output will be saved to: {output_dir}")
    output_dir.mkdir(parents=True, exist_ok=True)
    return output_dir


def main():
    """Main execution script."""
    logging.basicConfig(level=logging.INFO, format='%(asctime)s - %(levelname)s - %(message)s')
    
    try:
        output_dir = setup_environment()
        
        # 1. Load Data
        fhelipe_data, mkr_data = load_performance_data(output_dir)
        
        # 2. Generate all figures and tables
        logging.info("--- Generating Tables 4 ---")
        gen_table4(fhelipe_data, mkr_data, output_dir)

        logging.info(f"All figures generated successfully in {output_dir}.")

    except (AssertionError, FileNotFoundError) as e:
        logging.error(f"A critical error occurred: {e}")
        sys.exit(1)
    except Exception as e:
        logging.error(f"An unexpected error occurred: {e}", exc_info=True)
        sys.exit(2)


if __name__ == "__main__":
    main()
