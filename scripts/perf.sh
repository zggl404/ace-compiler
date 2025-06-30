#!/bin/sh

python3 /app/scripts/perf.py -e
[ $? -ne 0 ] && echo "Expert test failed." && exit

python3 /app/scripts/cgo25_ae.py
[ $? -ne 0 ] && echo "ACE test failed." && exit