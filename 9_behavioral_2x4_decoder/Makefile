# set up appropriate variables

export SCRIPTS_DIR = $(shell dirname $(realpath $(firstword $(MAKEFILE_LIST))))
export CL_ROOT     = $(realpath $(SCRIPTS_DIR))
export TEST_NAME   = $(CL_ROOT)/sim_main

export SIM_ROOT    = $(CL_ROOT)/verif/sim/$(SIMULATOR)
export SIM_DIR     = $(SIM_ROOT)/

all: make_sim_dir compile run

VCD_FILE	?=$(SIM_ROOT)/design.vcd
VCD_FILE_STR ?= \"$(VCD_FILE)\"

include Makefile.common.inc
