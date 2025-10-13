#!/bin/bash

verilator --timing -Wall --trace --cc --main --build --exe tb_top decoder_2x4.v
make -C obj_dir -f Vtb_top.mk
./obj_dir/Vtb_top
