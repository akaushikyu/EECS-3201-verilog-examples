# EECS 3201 Verilog examples

This repository holds Verilog code examples used in YorkU's EECS 3201 - Digital Logic Design course.

The examples can be run either using [Verilator](https://www.veripool.org/verilator/) or ModelSim.

## Getting started
The below steps have been tested on the EA machines available to YorkU students.

### Step 1: Setup the environment
- Log into an EA machine, open a terminal and clone the repository by executing the following command:
```
git clone git@github.com:akaushikyu/EECS-3201-verilog-examples.git
```
This should create a directory called `EECS-3201-verilog-examples`.
- Change the shell to bash by executing `bash` and in the `EECS-3201-verilog-examples` directory, execute
  ```
  source env.sh
  ```
  
  You should see the following output:
  ```
  ===== EECS 3201 Course Environment Setup =====
  Location of project:  /eecs/home/kaushika/EECS-3201-verilog-examples
  Verilator version:
  VSIM version:  Model Technology ModelSim - INTEL FPGA STARTER EDITION vsim 2020.1 Simulator 2020.02 Feb 28 2020
  ```
  Now the environment is setup and you can build and run the verilog examples.

### Step 2: Build and run an example
- Next, navigate to a verilog example of your choice. For example, navigate to the full adder subtractor design (`13_full_adder_subtractor`).
- Each design has design files and a testbench `tb_top.v`.
- Inside this design, there are four Makefiles: `Makefile`, `Makefile.verilator`, `Makefile.vsim` and `Makefile.common.inc`. These makefiles call the corresponding build and compile tools based on the simulator choice.
- Execute the following command to compile the design using ModelSim
  ```
  make compile VSIM=1
  ```
  The expected output for a correctly designed code should be:
  ```
  echo Vsim Compilation
  Vsim Compilation
  mkdir -p /eecs/home/kaushika/EECS-3201-verilog-examples/13_full_adder_subtractor/verif/sim/vsim/
  vlog -work /eecs/home/kaushika/EECS-3201-verilog-examples/13_full_adder_subtractor/work \
	+incdir+/eecs/home/kaushika/EECS-3201-verilog-examples/13_full_adder_subtractor/design/code +incdir+/eecs/home/kaushika/EECS-3201-verilog-examples/13_full_adder_subtractor/design/ +define+VCD_FILE_LOC=\"/eecs/home/kaushika/EECS-3201-verilog-examples/13_full_adder_subtractor/verif/sim/vsim/design.vcd\" -stats=none /eecs/home/kaushika/EECS-3201-verilog-examples/13_full_adder_subtractor/half_adder.v /eecs/home/kaushika/EECS-3201-verilog-examples/13_full_adder_subtractor/full_adder.v /eecs/home/kaushika/EECS-3201-verilog-examples/13_full_adder_subtractor/adder_sub.v /eecs/home/kaushika/EECS-3201-verilog-examples/13_full_adder_subtractor/tb_top.v
  Model Technology ModelSim - Intel FPGA Edition vlog 2020.1 Compiler 2020.02 Feb 28 2020
  -- Compiling module half_adder
  -- Compiling module full_adder
  -- Compiling module adder_sub
  -- Compiling module tb_top
  ```
- To run the simulation, execute
  ```
  make run VSIM=1
  ```
  This will generate a waveform VCD file in `verif/sim/vsim/design.vcd` and some output to the console if the testbench has the `$monitor` command.
- The VCD file can be opened in GTKWave by executing the command:
  ```
  gtkwave verif/sim/vsim/design.vcd`
  ```
### Running with Verilator
To run the verilog code examples using Verilator, download [Verilator](https://www.veripool.org/verilator/) and repeat the same steps as above with calls to the `make` as `make compile VERILATOR=1` and `make run VERILATOR=1`. The VCD files will be in `verif/sim/verilator/design.vcd`.

## Code examples
1. [AND gate using structural modeling](1_structural_and)
2. [3-bit circuit to identify even numbers using structural modeling](2_structural_even)
3. [2x4 decoder circuit using structural modeling](3_structural_2x4_decoder)
4. [AND gate using dataflow modeling](4_df_and)
5. [3-bit circuit to identify even numbers using dataflow modeling](5_df_even)
6. [2x4 decoder circuit using dataflow modeling](6_df_2x4_decoder)
7. [AND gate using behavioral modeling](7_behavioral_and)
8. [3-bit circuit to identify even numbers using behavioral modeling](8_behavioral_even)
9. [2x4 decoder circuit using behavioral modeling](9_behavioral_2x4_decoder)
10. [Model instantiation example](10_module_instantiation)
11. [Incorrect verilog example that does not terminate](11_forever_simulation)
12. [Full adder](12_full_adder)
13. [Full adder and subtractor](13_full_adder_subtractor)
14. [Carry lookahead adder](14_carry_lookahead_adder)
15. [Magnitude comparator](15_magnitude_comparator)
16. [Blocking and non-blocking usecases](16_blocking_non_blocking)
17. [16x1 Multiplexer](17_mux_16x1)
18. [SR Latch](18_sr_latch)
19. [D flip flop](19_d_ff)
20. [T flip flop](20_t_ff)
21. [JK flip flop](21_jk_ff)
22. [Serial left shift register](22_serial_left_shift_register)
23. [Universal shift register](23_universal_shift_register)
24. [Concise universal shift register](24_simple_user)
25. [4-bit ripple counter](25_four_bit_ripple_counter)
26. [BCD ripple counter](26_bcd_ripple_counter)
27. [BCD synchronous counter](27_bcd_sync_counter)
28. [Pattern detection Mealy](28_pattern_detection_mealy)
29. [Pattern detection Moore](29_pattern_detection_moore)
