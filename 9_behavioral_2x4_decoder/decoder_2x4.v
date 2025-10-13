// decoder_2x4.v -- A decoder circuit that takes 3 inputs (enable + a, b) and outputs 4 signals

// Syntax: module [design name] ([port list]):
// Description: Define the input and output interfaces of the hardware circuit
module decoder_2x4 (
    // Syntax: input [width-1:0] <port name>
    input wire enable,
    input wire [1:0] ab_i,
    // Syntax: output [width-1:0] <port name>
    // Note that wxyz_o is declared as a reg here because
    // we are assigning the value to wxyz_o in the always block
    output reg [3:0] wxyz_o
);

    // | enable | ab_i  || wxyz_o |
    // |--------|-------||--------|
    // |  0     | xx    || 0000   |
    // |  1     | 00    || 0001   |
    // |  1     | 01    || 0010   |
    // |  1     | 10    || 0100   |
    // |  1     | 11    || 1000   |

    // z = enable . a' . b'
    // y = enable . a' . b
    // x = enable . a  . b'
    // w = enable . a  . b

    reg z;
    reg y;
    reg x;
    reg w;

    // Syntax:
    // always @ (sensitivity list) begin
    // <<< --- logic --- >>>
    // end
    // <sensitivity list>: list of signals that the always block is sensitive to changes
    always @ (enable, ab_i) begin
        z = (enable && ab_i[0] && ab_i[1]);
        y = (enable && ~ab_i[0] && ab_i[1]);
        x = (enable && ab_i[0] && ~ab_i[1]);
        w = (enable && ~ab_i[0] && ~ab_i[1]);
        // { } is the concatenation operation
        // wxyz_o is the concatenation of 4 individual signals: w, x, y, z
        // with w in the least significant bit and z in the most significant bit
        wxyz_o = {z, y, x, w};

endmodule: decoder_2x4
