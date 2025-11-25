// testbench code for structural and
// timescale -- time unit/time precision

`timescale 1ns/1ns

module tb_top;

reg [15:0] tb_inp_i;
reg [3:0] tb_sel;
wire tb_out_o;

mux_16x1 dut (
    .inp_i(tb_inp_i),
    .sel(tb_sel),
    .out_o(tb_out_o)
);

// Create VCD waveform file
initial begin
    $dumpfile(`VCD_FILE_LOC);
    $dumpvars;
end

initial begin
    // A convenient printing utility that prints out the signals and the time ($time)
    $monitor("time = %0t, inp_i = %b, sel = %h, --> f = %h", $time, tb_inp_i, tb_sel, tb_out_o);

    tb_inp_i = 16'h0;
    tb_sel = 4'h0;

    #5;
    tb_inp_i = 16'hABAB;
    tb_sel = 4'h0;

    #5;
    tb_inp_i = 16'hABAB;
    tb_sel = 4'h1;

    #5;
    tb_inp_i = 16'hABAB;
    tb_sel = 4'h2;

    #5;
    tb_inp_i = 16'hFFF0;
    tb_sel = 4'h2;

    #5;
    tb_inp_i = 16'hFFF4;
    tb_sel = 4'h2;

    #5;
    tb_inp_i = 16'hABCD;
    tb_sel = 4'h3;

    #5;
    tb_inp_i = 16'h1240;
    tb_sel = 4'h4;

    #5;
    tb_inp_i = 16'h1240;
    tb_sel = 4'h5;

    #5;
    tb_inp_i = 16'h1240;
    tb_sel = 4'h6;

    #5;
    tb_inp_i = 16'h1240;
    tb_sel = 4'h7;

    #5;
    tb_inp_i = 16'h1240;
    tb_sel = 4'h8;

    #5;
    tb_inp_i = 16'h1240;
    tb_sel = 4'h9;

    #5;
    tb_inp_i = 16'h1240;
    tb_sel = 4'hA;

    #5;
    tb_inp_i = 16'h1240;
    tb_sel = 4'hB;

    #5;
    tb_inp_i = 16'h1240;
    tb_sel = 4'hC;

    #5;
    tb_inp_i = 16'h1240;
    tb_sel = 4'hD;

    #5;
    tb_inp_i = 16'h1240;
    tb_sel = 4'hE;

    #5;
    tb_inp_i = 16'h1240;
    tb_sel = 4'hF;

    #5;
    tb_inp_i = 16'h8240;
    tb_sel = 4'hF;
end

endmodule: tb_top
