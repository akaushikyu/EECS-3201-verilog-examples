`timescale 1ns/1ns
module d_ff (
    input clk,
    input rst,
    input d,
    output reg q,
    output reg qb
);
    always @(posedge clk) begin
	if (rst == 1'b1) begin
		q <= 1'b0;
		qb <= 1'b1;
	end
	else begin
        	q <= d;
        	qb <= ~d;
	end
    end

endmodule: d_ff
