`timescale 1ns/1ns
module universal_shift_reg #(
    parameter DWIDTH=32) (
    input clk,
    input slin_i,
    input srin_i,
    input [1:0] sel,
    input [DWIDTH-1:0] pin_i,
    output reg [DWIDTH-1:0] pout_o
);

    always @(posedge clk) begin
        case(sel)
            2'b00: pout_o <= pout_o;
            2'b01: pout_o <= {slin_i, pout_o[DWIDTH-1:1]};
            2'b10: pout_o <= {pout_o[DWIDTH-2:0], srin_i};
            2'b11: pout_o <= pin_i;
        endcase
    end

endmodule : universal_shift_reg
