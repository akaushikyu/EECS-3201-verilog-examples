// testbench code for structural and
// timescale -- time unit/time precision

`timescale 1ns/1ns

module tb_top;

reg tb_enable;
reg [1:0] tb_ab_i;
wire [3:0] tb_wxyz_o;

decoder_2x4 dut (
    .enable(tb_enable),
    .ab_i(tb_ab_i),
    .wxyz_o(tb_wxyz_o)
);

// Create VCD waveform file
initial begin
    $dumpfile(`VCD_FILE_LOC);
    $dumpvars;
end

initial begin
    // A convenient printing utility that prints out the signals and the time ($time)
    $monitor("time = %0t, enable = %h, ab_i = %h --> wxyz_o = %h", $time, tb_enable, tb_ab_i, tb_wxyz_o);
    tb_enable = 1'b0;
    tb_ab_i = 2'h0;

    #5;
    tb_ab_i = 2'h0;

    #5;
    tb_ab_i = 2'h1;

    #5;
    tb_ab_i = 2'h2;

    #5;
    tb_ab_i = 2'h3;

    #10;
    tb_enable = 1'b1;
    tb_ab_i = 2'h0;
    
    #5;
    tb_ab_i = 2'h1;

    #5;
    tb_ab_i = 2'h2;

    #5;
    tb_ab_i = 2'h3;

    #2;
    tb_enable = 1'b0;
end

endmodule: tb_top
