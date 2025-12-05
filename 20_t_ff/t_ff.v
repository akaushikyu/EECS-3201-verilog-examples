`timescale 1ns/1ns
module t_ff (
    input clk,
    input rst,
    input t,
    output wire q
); 
    wire d_in;
    assign d_in = t ^ q;

    d_ff d (
        .clk(clk),
        .d(d_in),
	.rst(rst),
        .q(q)
    );

endmodule : t_ff
