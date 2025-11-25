`timescale 1ns / 1ns
module tb_top;

reg tb_S;
reg tb_R;
wire tb_Q;
wire tb_Qn;

sr_latch_nor dut (
    .S(tb_S),
    .R(tb_R),
    /* verilator lint_off UNOPTFLAT */
    .Q(tb_Q),
    /* verilator lint_on UNOPTFLAT */
    .Q_bar(tb_Qn)
);

// Create VCD waveform file
initial begin
    $dumpfile(`VCD_FILE_LOC);
    $dumpvars;
end

initial begin
    // Initialize Inputs
    $monitor("time = %0t, S = %h: R = %h --> Q = %h, Qn = %h", $time, tb_S, tb_R, tb_Q, tb_Qn);

    tb_S = 1;
    tb_R = 1;
 
    // Add stimulus here
    #100 tb_S = 0;
    #100 tb_S = 1;
    #100 tb_R = 0;
    #100 tb_R = 1;
    #100 tb_S = 0;
         tb_R = 0;
    #100 tb_S = 1;
         tb_R = 1;
    #100 tb_S = 0;
         tb_R = 0;
end

endmodule : tb_top
