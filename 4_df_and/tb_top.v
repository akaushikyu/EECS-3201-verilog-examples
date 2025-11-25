// testbench code for structural and
// timescale -- time unit/time precision

`timescale 1ns/1ns

module tb_top;

reg tb_a;
reg tb_b;
wire tb_f;

simple_and dut (
    .a(tb_a),
    .b(tb_b),
    .f(tb_f)
);

// Create VCD waveform file
initial begin
    $dumpfile(`VCD_FILE_LOC);
    $dumpvars;
end

initial begin
    // A convenient printing utility that prints out the signals and the time ($time)
    $monitor("time = %0t, a = %h, b = %h, --> f = %h", $time, tb_a, tb_b, tb_f);
    tb_a = 1'b0;
    tb_b = 1'b0;

    #5;
    tb_a = 1'b0;
    tb_b = 1'b1;

    #10;
    tb_a = 1'b1;
    tb_b = 1'b0;

    #4;
    tb_a = 1'b1;
    tb_b = 1'b1;
end

endmodule: tb_top
