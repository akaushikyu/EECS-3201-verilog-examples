#!/bin/bash

verilator -Wall --trace -cc decoder_3x8.v --exe sim_main.cpp
make -C obj_dir -f Vdecoder_3x8.mk
./obj_dir/Vdecoder_3x8
