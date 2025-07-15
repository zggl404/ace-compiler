import argparse
import sys
from pathlib import Path
import logging

from data_processing import load_performance_data
from figure_generator import gen_table45, gen_table6, gen_table7, gen_table8, gen_figure7, gen_figure8


def setup_environment():
    """Parses command line arguments and creates the output directory."""
    parser = argparse.ArgumentParser(description="Generates figures for the MKR OOPSLA'25 paper.")
    parser.add_argument('-o', '--output-dir', type=Path, default=Path('/app/mkr_ae_result'),
                        help='Directory to save output files. Defaults to "/app/mkr_ae_result".')
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
        fhelipe_data, mkr_data, bsgs_data = load_performance_data(output_dir)
        
        # 2. Generate all figures and tables
        logging.info("--- Generating Tables 4, 5 ---")
        gen_table45(fhelipe_data, mkr_data, output_dir)

        logging.info("--- Generating Table 6 ---")
        gen_table6(fhelipe_data, mkr_data, bsgs_data, output_dir)
        
        logging.info("--- Generating Table 7 ---")
        gen_table7(fhelipe_data, mkr_data, output_dir)
        
        logging.info("--- Generating Table 8 ---")
        gen_table8(output_dir)
        
        logging.info("--- Generating Figure 7 ---")
        gen_figure7(fhelipe_data, mkr_data, output_dir)
        
        logging.info("--- Generating Figure 8 ---")
        gen_figure8(fhelipe_data, mkr_data, output_dir)

        logging.info(f"All figures generated successfully in {output_dir}.")

    except (AssertionError, FileNotFoundError) as e:
        logging.error(f"A critical error occurred: {e}")
        sys.exit(1)
    except Exception as e:
        logging.error(f"An unexpected error occurred: {e}", exc_info=True)
        sys.exit(2)


if __name__ == "__main__":
    main()
