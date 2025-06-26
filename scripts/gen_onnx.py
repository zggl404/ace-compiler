#!/usr/bin/env python3

import argparse
import os
import subprocess
import sys
from pathlib import Path

def execute_python_script(
    script_path: Path, 
    common_output_dir: Path, # The base directory for all .onnx files
    stdout_log_dir: Path, 
    stderr_log_dir: Path
) -> bool:
    """
    Executes a single Python script, passing a specific .onnx output file path
    via its -o option, and redirects its console output (stdout/stderr) to
    separate log files.

    Args:
        script_path (Path): The path to the Python script to execute.
        common_output_dir (Path): The base directory where ALL .onnx files will be placed.
        stdout_log_dir (Path): Directory where stdout log of this *execution* should be saved.
        stderr_log_dir (Path): Directory where stderr log of this *execution* should be saved.

    Returns:
        bool: True if the script executed successfully, False otherwise.
    """
    script_name_stem = script_path.stem  # Get filename without extension (e.g., "script_a" from "script_a.py")

    # 1. Define the specific .onnx output file path for this sub-script
    #    This is the FULL PATH (directory + filename + .onnx extension)
    #    Example: if common_output_dir is 'my_onnx_models', and script_path.stem is 'model_a_exporter',
    #    then target_onnx_filepath will be 'my_onnx_models/model_a_exporter.onnx'
    target_onnx_filepath = common_output_dir / f"{script_name_stem}.onnx"

    # 2. Define the log files for this script's console output (stdout/stderr)
    stdout_log_file = stdout_log_dir / f"{script_name_stem}.stdout.log"
    stderr_log_file = stderr_log_dir / f"{script_name_stem}.stderr.log"

    # The command to execute the Python script
    # We pass the -o option with the FULL target_onnx_filepath
    # sys.executable ensures we use the same Python interpreter that's running this script
    command = [sys.executable, str(script_path), '-o', str(target_onnx_filepath)]

    print(f"--- Executing: {script_path.name} ---")
    print(f"  Script's ONNX output target: {target_onnx_filepath.resolve()}")
    print(f"  Console output will be logged to: {stdout_log_file} and {stderr_log_file}")
    print(f"  Command: {' '.join(command)}") # Print the command for debugging

    try:
        # Open log files for stdout and stderr
        with open(stdout_log_file, 'w', encoding='utf-8') as stdout_f, \
             open(stderr_log_file, 'w', encoding='utf-8') as stderr_f:
            
            # Run the subprocess
            # cwd=script_path.parent: Changes the working directory for the subprocess
            # to the script's parent directory. This is often necessary if the
            # executed script relies on relative paths to access its own local files.
            subprocess.run(
                command,
                stdout=stdout_f,
                stderr=stderr_f,
                check=True,  # Raise CalledProcessError if the command returns a non-zero exit code
                text=True,   # Decode stdout/stderr as text
                cwd=script_path.parent # Execute the script from its own directory
            )
        print(f"  SUCCESS: {script_path.name} finished successfully.")
        return True
    except FileNotFoundError:
        print(f"  ERROR: Python interpreter or script '{script_path.name}' not found.")
        return False
    except subprocess.CalledProcessError as e:
        print(f"  FAILED: {script_path.name} exited with error code {e.returncode}.")
        print(f"    Check {stderr_log_file} for details of the error.")
        return False
    except Exception as e:
        print(f"  AN UNEXPECTED ERROR OCCURRED for {script_path.name}: {e}")
        return False

def main():
    parser = argparse.ArgumentParser(
        description="Execute all Python files in a directory to generate onnx files, passing a specific ONNX output file path "
                    "via its -o option, and logging console output."
    )
    parser.add_argument(
        '-s', '--source-dir',
        type=str,
        default='/app/ace-compiler/proof/model',
        help='The directory containing Python files to execute. Defaults to /app/ace-compiler/proof/model.'
    )
    parser.add_argument(
        '-o', '--output-dir',
        type=str,
        default='/app/model', # Default top-level output directory for ALL .onnx files
        help='The single, common directory where all generated .onnx files will be saved. '
             'Defaults to "/app/model".'
    )
    parser.add_argument(
        '-r', '--recursive',
        action='store_true', # Flag, defaults to False if not present
        help='Search for Python files in subdirectories recursively.'
    )

    args = parser.parse_args()

    source_directory = Path(args.source_dir).resolve()
    common_output_directory = Path(args.output_dir).resolve() # This is the directory for ALL .onnx files

    # Validate source directory
    if not source_directory.is_dir():
        print(f"Error: Source directory '{source_directory}' does not exist or is not a directory.")
        sys.exit(1)

    # Create common output directory if it doesn't exist
    try:
        common_output_directory.mkdir(parents=True, exist_ok=True)
        print(f"Common ONNX output directory '{common_output_directory}' ensured.")
    except OSError as e:
        print(f"Error: Could not create common ONNX output directory '{common_output_directory}': {e}")
        sys.exit(1)

    # Create dedicated subdirectories for console logs (inside the common_output_directory)
    console_stdout_log_dir = common_output_directory / "console_stdout_logs"
    console_stderr_log_dir = common_output_directory / "console_stderr_logs"
    try:
        console_stdout_log_dir.mkdir(parents=True, exist_ok=True)
        console_stderr_log_dir.mkdir(parents=True, exist_ok=True)
        print(f"Console logs will be saved in '{console_stdout_log_dir}' and '{console_stderr_log_dir}'.")
    except OSError as e:
        print(f"Error: Could not create console log directories: {e}")
        sys.exit(1)


    print(f"\nScanning for Python files in: {source_directory}")
    if args.recursive:
        print("  (including subdirectories recursively)")
    else:
        print("  (only in the top-level directory)")

    found_scripts = []
    if args.recursive:
        # Use rglob for recursive search
        found_scripts = list(source_directory.rglob('*.py'))
    else:
        # Use glob for non-recursive search
        found_scripts = list(source_directory.glob('*.py'))
    
    if not found_scripts:
        print(f"No Python files found in '{source_directory}'." + (" (recursively)" if args.recursive else ""))
        sys.exit(0)

    # Filter out self-execution if the main script is in the source directory
    # This prevents the main script from trying to execute itself.
    scripts_to_execute = [
        script for script in found_scripts 
        if script.resolve() != Path(__file__).resolve()
    ]
    
    if not scripts_to_execute:
        print("No other Python files found to execute after filtering out self.")
        sys.exit(0)

    print(f"Found {len(scripts_to_execute)} Python files to process.")
    print("=" * 60)

    successful_executions = 0
    total_executions = 0

    for script_path in sorted(scripts_to_execute): # Sort for consistent order
        total_executions += 1
        # Pass the common_output_directory (as the base for the .onnx file)
        if execute_python_script(
            script_path, 
            common_output_directory, 
            console_stdout_log_dir, 
            console_stderr_log_dir
        ):
            successful_executions += 1
        print("=" * 60)

    print("\n--- Execution Summary ---")
    print(f"Total Python scripts processed: {total_executions}")
    print(f"Successfully executed: {successful_executions}")
    print(f"Failed executions: {total_executions - successful_executions}")
    print(f"All generated .onnx files are in: {common_output_directory}")
    print(f"All console logs are in: {console_stdout_log_dir} and {console_stderr_log_dir}")

if __name__ == "__main__":
    main()
