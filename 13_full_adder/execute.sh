#!/bin/bash

verilator -Wall --trace -cc adder.v --exe sim_main.cpp
make -C obj_dir -f Vadder.mk
./obj_dir/Vadder
