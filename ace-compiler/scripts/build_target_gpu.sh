#!/bin/bash

set -euo pipefail

# Check the number of arguments passed
if [ "$#" -ne 2 ]; then
    echo "Usage: $0 <cu_file> <graph_file>"
    exit 1
fi

script_dir=$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)
repo_root=$(cd -- "$script_dir/.." && pwd)
build_dir=${ACE_BUILD_DIR:-"$repo_root/release"}
target_name=$(basename "$1")
target_name=${target_name%.*}

# Gets the input file and the target directory
cu_file=$1
inc_file=$2
dest_dir=$(dirname "$inc_file")

# Check if the destination directory exists and create it if not
if [ ! -d "$dest_dir" ]; then
    echo "Destination directory does not exist. Creating: $dest_dir"
    mkdir -p "$dest_dir"
fi

# Copy the .cu file to the destination directory
cp "$cu_file" "$dest_dir"

# Check whether the copy operation was successful
if [ $? -eq 0 ]; then
    echo "File copied successfully."
else
    echo "Failed to copy file."
fi

# Execute instructions
echo "Running command..."
backend=""
case "$dest_dir" in
    */fhe-cmplr/rtlib/*/example|*/rtlib/*/example)
        backend=$(basename "$(dirname "$dest_dir")")
        ;;
esac

rtlib_build_dir="$build_dir/rtlib/build"
backend_build_make=""
if [ -n "$backend" ]; then
    backend_build_make="$rtlib_build_dir/$backend/CMakeFiles/$target_name.dir/build.make"
fi

if [ -f "$backend_build_make" ]; then
    echo "Building backend target: $backend/$target_name"
    make -C "$rtlib_build_dir" -f "$backend/CMakeFiles/$target_name.dir/build.make" \
        -j "example/$target_name"
else
    echo "Backend-specific target not found. Falling back to full build."
    cmake --build "$build_dir" -- -j
fi

echo "Command executed"
