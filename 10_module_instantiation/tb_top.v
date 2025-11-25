// testbench code for structural and
// timescale -- time unit/time precision

`timescale 1ns/1ns

module tb_top;

reg [3:0] tb_wxyz_i;
wire tb_f;

circuit dut (
    .wxyz_i(tb_wxyz_i),
    .f(tb_f)
);

// Create VCD waveform file
initial begin
    $dumpfile(`VCD_FILE_LOC);
    $dumpvars;
end

initial begin
    // A convenient printing utility that prints out the signals and the time ($time)
    $monitor("time = %0t, wxyz_i = %h --> f = %h", $time, tb_wxyz_i, tb_f);

    tb_wxyz_i = 4'h0;
    #5;
    tb_wxyz_i = 4'h1;
    #5;
    tb_wxyz_i = 4'h2;
    #5;
    tb_wxyz_i = 4'h3;
    #5;
    tb_wxyz_i = 4'h4;
    #5;
    tb_wxyz_i = 4'h5;
    #5;
    tb_wxyz_i = 4'h6;
    #5;
    tb_wxyz_i = 4'h7;
    #5;
    tb_wxyz_i = 4'h8;
    #5;
    tb_wxyz_i = 4'h9;
    #5;
    tb_wxyz_i = 4'hA;
    #5;
    tb_wxyz_i = 4'hB;
    #5;
    tb_wxyz_i = 4'hC;
    #5;
    tb_wxyz_i = 4'hD;
    #5;
    tb_wxyz_i = 4'hE;
    #5;
    tb_wxyz_i = 4'hF;
end

endmodule: tb_top
