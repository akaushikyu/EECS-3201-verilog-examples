#!/bin/bash

verilator -Wall --trace -cc decoder_2x4.v --exe sim_main.cpp
make -C obj_dir -f Vdecoder_2x4.mk
./obj_dir/Vdecoder_2x4
