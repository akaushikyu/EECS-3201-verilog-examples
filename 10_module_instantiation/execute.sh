#!/bin/bash

verilator -Wall --trace -cc circuit.v --exe sim_main.cpp
make -C obj_dir -f Vcircuit.mk
./obj_dir/Vcircuit
