#!/bin/bash

set -e  # terminiate when error occurs
ORIG_DIR="$(pwd)"

err() {
    echo "[ERROR] ($1): $2"
    cd "$ORIG_DIR"
    exit 1
}

cd /app/scripts || err ${LINENO} "Failed to cd to /app/scripts"
./bsgs.sh || err ${LINENO} "bsgs.sh failed"
./build_cmplr.sh Release || err ${LINENO} "build_cmplr.sh failed"
./mkr.sh || err ${LINENO} "mkr.sh failed"
./fhelipe.sh || err ${LINENO} "fhelipe.sh failed"
python3 generate_figures.py || err ${LINENO} "generate_figures.py failed"

cd "$ORIG_DIR" || exit 1
echo "All steps completed successfully"
