#!/bin/bash

verilator -Wall --trace -cc simple_and.v --exe sim_main.cpp
make -C obj_dir -f Vsimple_and.mk
./obj_dir/Vsimple_and
