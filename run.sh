#!/bin/bash
# date 2019-02-05 01:04:22
# author calllivecn <calllivecn@outlook.com>


CPUs=$(python3 -c "import os;print(os.cpu_count())")


for _ in $(seq ${CPUs})
do
	./a.out &
done

