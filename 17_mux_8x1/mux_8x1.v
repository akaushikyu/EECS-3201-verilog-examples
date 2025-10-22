// mux_8x1.v -- A decoder circuit that takes 3 inputs (enable + a, b) and outputs 4 signals

// Syntax: module [design name] ([port list]):
// Description: Define the input and output interfaces of the hardware circuit
module mux_8x1 (
    // Syntax: input [width-1:0] <port name>
    input wire enable,
    input wire [2:0] in_i,
    // Syntax: output [width-1:0] <port name>
    // Note that out_o is declared as a reg here because
    // we are assigning the value to out_o in the always block
    output reg [7:0] out_o
);

    // | enable | in_i  || out_o |
    // |--------|-------||--------|
    // |  0     | xxx    || 00000000   |
    // |  1     | 000    || 00000001   |
    // |  1     | 001    || 00000010   |
    // |  1     | 010    || 00000100   |
    // |  1     | 011    || 00001000   |
    // |  1     | 100    || 00010000   |
    // |  1     | 101    || 00100000   |
    // |  1     | 110    || 01000000   |
    // |  1     | 111    || 10000000   |

    always @(enable, in_i) begin
        if (enable == 1'b0) begin
            out_o = 8'b0;
        end
        else if (in_i == 3'b000) begin
            out_o = 8'b00000001;
        end
        else if (in_i == 3'b001) begin
            out_o = 8'b00000010;
        end
        else if (in_i == 3'b010) begin
            out_o = 8'b00000100;
        end
        else if (in_i == 3'b011) begin
            out_o = 8'b00001000;
        end
        else if (in_i == 3'b100) begin
            out_o = 8'b00010000;
        end
        else if (in_i == 3'b101) begin
            out_o = 8'b00100000;
        end
        else if (in_i == 3'b110) begin
            out_o = 8'b01000000;
        end
        else if (in_i == 3'b111) begin
            out_o = 8'b10000000;
        end
    end

endmodule: mux_8x1
