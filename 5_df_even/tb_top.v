// testbench code for structural and
// timescale -- time unit/time precision

`timescale 1ns/1ns

module tb_top;

reg [2:0] tb_i;
wire tb_f;

even_circuit dut (
    .x(tb_i[2]),
    .y(tb_i[1]),
    .z(tb_i[0]),
    .f(tb_f)
);

// Create VCD waveform file
initial begin
    $dumpfile(`VCD_FILE_LOC);
    $dumpvars;
end

initial begin
    // A convenient printing utility that prints out the signals and the time ($time)
    $monitor("time=%0t, number = %h--> f = %h", $time, tb_i, tb_f);
    tb_i = 3'h0;

    #5;
    tb_i = 3'h1;
    #5;
    tb_i = 3'h2;
    #5;
    tb_i = 3'h3;
    #5;
    tb_i = 3'h4;
    #5;
    tb_i = 3'h5;
    #5;
    tb_i = 3'h6;
    #5;
    tb_i = 3'h7;
    #5;
    tb_i = 3'h8;
    #5;
    tb_i = 3'h1;
    #5;
    tb_i = 3'h4;
    #5;
    tb_i = 3'h3;
end

endmodule: tb_top
