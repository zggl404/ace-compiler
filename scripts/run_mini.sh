#!/bin/bash

set -e  # terminiate when error occurs
ORIG_DIR="$(pwd)"

err() {
    echo "[ERROR] ($1): $2"
    cd "$ORIG_DIR"
    exit 1
}

cd /app/scripts || err ${LINENO} "Failed to cd to /app/scripts"
./build_cmplr.sh Release || err ${LINENO} "build_cmplr.sh failed"
./mkr.sh mini || err ${LINENO} "mkr_mini.sh failed"
./fhelipe.sh mini || err ${LINENO} "fhelipe_mini.sh failed"
python3 generate_figures_mini.py || err ${LINENO} "generate_figures_mini.py failed"

cd "$ORIG_DIR" || exit 1
echo "All steps completed successfully"
