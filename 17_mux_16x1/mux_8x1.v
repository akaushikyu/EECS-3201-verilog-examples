// mux_8x1.v -- An 8x1 mux circuit

// Syntax: module [design name] ([port list]):
// Description: Define the input and output interfaces of the hardware circuit
`timescale 1ns/1ns
module mux_8x1 (
    // Syntax: input [width-1:0] <port name>
    input [2:0] sel,
    input [7:0] in_i,
    // Syntax: output [width-1:0] <port name>
    // Note that out_o is declared as a reg here because
    // we are assigning the value to out_o in the always block
    output reg out_o
);

    always @(in_i, sel) begin
        case (sel) 
            3'b000: out_o = in_i[0];
            3'b001: out_o = in_i[1];
            3'b010: out_o = in_i[2];
            3'b011: out_o = in_i[3];
            3'b100: out_o = in_i[4];
            3'b101: out_o = in_i[5];
            3'b110: out_o = in_i[6];
            3'b111: out_o = in_i[7];
        endcase
    end

endmodule: mux_8x1
