`timescale 1ns/1ns
module d_ff (
    input clk,
    input d,
    output reg q,
    output reg qb
);
    always @(posedge clk) begin
        q <= d;
        qb <= !d;
    end

endmodule: d_ff
