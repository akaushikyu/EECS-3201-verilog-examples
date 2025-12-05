`timescale 1ns/1ns
module d_ff (
    input clk,
    input d,
    input rst,
    output reg q
);
    always @(posedge clk) begin
	if (rst == 1'b1) begin
		q <= 1'b0;
	end 
	else begin
        	q <= d;
	end
    end

endmodule: d_ff
