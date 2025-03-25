#!/bin/bash

set -x

time python scripts/compile.py --program $1
[ $? -ne 0 ] && echo "FATAL: compile $1 failed." && exit 1

time python scripts/in_shared.py --program $1
[ $? -ne 0 ] && echo "FATAL: in_shared $1 failed." && exit 2

#time python scripts/run.py --program $1
#[ $? -ne 0 ] && echo "FATAL: run unencrypted $1 failed." && exit 3

time python scripts/run.py --program $1 --lattigo
[ $? -ne 0 ] && echo "FATAL: run encrypted $1 failed." && exit 4

