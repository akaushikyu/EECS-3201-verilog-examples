`timescale 1ns/1ns
module t_ff (
    input clk,
    input rst,
    input t,
    output reg q
);
    
    wire d_in;
    assign d_in = t ^ q;

    d_ff d (
        .clk(clk),
	.rst(rst),
        .d(d_in),
        .q(q)
    );

endmodule : t_ff
