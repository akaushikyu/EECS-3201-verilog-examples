#!/bin/bash

verilator -Wall --trace -cc comparator.v --exe sim_main.cpp
make -C obj_dir -f Vcomparator.mk
./obj_dir/Vcomparator
