`timescale 1ns/1ns
module d_ff (
    input clk,
    input rst,
    input d,
    output reg q
);
    always @(posedge clk) begin
	if (rst) begin
	   q <= 0;
	end
	else begin
           q <= d;
	end
    end

endmodule: d_ff
