#!/bin/bash

mkdir -p /app/mkr_ae_result/bsgs
LOGFILE="/app/mkr_ae_result/bsgs/bsgs.run.log"

if [ -f "$LOGFILE" ]; then
    mv "$LOGFILE" "${LOGFILE}.$(date '+%Y%m%d_%H%M%S').bak"
fi

#stdout and stderr to tee, both terminal and log files
exec > >(tee -a "$LOGFILE") 2>&1

set -e
ORIG_DIR="$(pwd)"

err() {
    echo "Error on line $1: $2"
    cd "$ORIG_DIR"
    exit 1
}

cd /app/ace-compiler/proof/BSGS/

echo ">>>>>> MVM1 bsgs"
cd mvm1
if ! ./b.sh; then
    err ${LINENO} "mvm1/b.sh failed"
fi



echo ">>>>>> MVM2 bsgs"
cd ../mvm2
if ! ./b.sh; then
    err ${LINENO} "mvm2/b.sh failed"
fi


cd "$ORIG_DIR"
echo "Compile bsgs test cases completed. Returned to $ORIG_DIR."
echo "BSGS's log have be moved to $LOGFILE"
