#!/bin/bash

verilator -Wall --trace -cc even_circuit.v --exe sim_main.cpp
make -C obj_dir -f Veven_circuit.mk
./obj_dir/Veven_circuit
