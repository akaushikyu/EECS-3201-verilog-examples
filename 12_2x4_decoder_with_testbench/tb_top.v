// testbench code for the decoer_2x4 
// timescale -- time unit/time precision
`timescale 1ns/1ps

module tb_top;

    // since we are providing inputs, declare the 
    // stimulus inputs as registers
    reg tb_enable;
    reg [1:0] tb_ab;

    // catch the output
    wire [3:0] tb_wxyz;

    // instantiate the decoder module
    // dut: design under test
    decoder_2x4 dut (
        .enable(tb_enable),
        .ab_i(tb_ab),
        .wxyz_o(tb_wxyz)
    );

    // set the initial state
    initial begin
        // A convenient printing utility that prints out the signals and the time ($time)
        $monitor("time=%0t, enable = %h: ab = %h, --> wxyz = %h", $time, tb_enable, tb_ab, tb_wxyz);
        tb_enable = 1'b0;
        tb_ab = 2'b00;
    
        // Syntax: # <time units>
        // #5 means after 5 time units. The precision of the time unit (seconds, nanoseconds, picoseconds etc.) is 
        // controlled by the `timescale directive
        #5;
        tb_ab = 2'b00;
        tb_enable = 1'b1;

        #10;
        tb_ab = 2'b01;

        #20;
        tb_ab = 2'b11;

        #45;
        tb_ab = 2'b10;
    end

endmodule: tb_top
