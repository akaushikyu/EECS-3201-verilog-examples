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

    #20;
end

endmodule: tb_top
