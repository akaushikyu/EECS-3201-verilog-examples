#!/bin/bash

verilator -Wall --trace -cc mux_4x1.v --exe sim_main.cpp
make -C obj_dir -f Vmux_4x1.mk
./obj_dir/Vmux_4x1
