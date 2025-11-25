`timescale 1ns/1ns
module d_ff (
    input clk,
    input d,
    output reg q
);
    always @(posedge clk) begin
        q <= d;
    end

endmodule: d_ff
