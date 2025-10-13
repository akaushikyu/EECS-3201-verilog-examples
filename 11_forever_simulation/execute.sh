#!/bin/bash

verilator -Wall --trace -cc forever_circuit.v --exe sim_main.cpp
make -C obj_dir -f Vforever_circuit.mk
./obj_dir/Vforever_circuit
