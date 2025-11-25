// testbench code for structural and
// timescale -- time unit/time precision

`timescale 1ns/1ns

module tb_top;

reg [3:0] tb_inp_1;
reg [3:0] tb_inp_2;
wire [3:0] tb_sum;
wire tb_carry;

adder dut (
    .inp_1(tb_inp_1),
    .inp_2(tb_inp_2),
    .sum(tb_sum),
    .carry(tb_carry)
);

// Create VCD waveform file
initial begin
    $dumpfile(`VCD_FILE_LOC);
    $dumpvars;
end

initial begin
    // A convenient printing utility that prints out the signals and the time ($time)
    $monitor("time = %0t, inp_1 = %h, inp_2 = %h, --> sum = %h, carry = %h", $time, tb_inp_1, tb_inp_2, tb_sum, tb_carry);

    tb_inp_1 = 4'h0;
    tb_inp_2 = 4'h0;

    // trivial cases
    #5;
    tb_inp_1 = 4'h0;
    tb_inp_2 = 4'h1;

    #5;
    tb_inp_1 = 4'h5;
    tb_inp_2 = 4'h5;

    #5;
    tb_inp_1 = 4'h4;
    tb_inp_2 = 4'h3;

    #5;
    tb_inp_1 = 4'h2;
    tb_inp_2 = 4'h7;

    #5;
    tb_inp_1 = 4'hA;
    tb_inp_2 = 4'h3;

    // corner cases
    #5;
    tb_inp_1 = 4'hF;
    tb_inp_2 = 4'hF;

    #5;
    tb_inp_1 = 4'h0;
    tb_inp_2 = 4'h0;

    #5;
    tb_inp_1 = 4'hE;
    tb_inp_2 = 4'hF;

    #5;
    tb_inp_1 = 4'h8;
    tb_inp_2 = 4'h8;

    #5;
    tb_inp_1 = 4'h9;
    tb_inp_2 = 4'h8;

end

endmodule: tb_top
