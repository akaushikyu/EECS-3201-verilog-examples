// decoder_2x4.v -- A decoder circuit that takes 3 inputs (enable + a, b) and outputs 4 signals

// Syntax: module [design name] ([port list]):
// Description: Define the input and output interfaces of the hardware circuit
`timescale 1ns/1ns
module decoder_2x4 (
    // Syntax: input [width-1:0] <port name>
    input enable,
    input [1:0] ab_i,
    // Syntax: output [width-1:0] <port name>
    output [3:0] wxyz_o
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

    // Syntax: <gate> <gate name> (output, inputs...)
    // Description: Define the gate and the inputs, output of gate 

    // Intermediate signals to capture the product of each term
    // Syntax: wire [width-1:0] <wire name>

    wire z;
    wire y;
    wire x;
    wire w;

    // assign -- continuously assign a signal a value
    // Syntax: assign <output signal name>  = operation on input signals
    assign z = (enable && ab_i[0] && ab_i[1]);
    assign y = (enable && ~ab_i[0] && ab_i[1]);
    assign x = (enable && ab_i[0] && ~ab_i[1]);
    assign w = (enable && ~ab_i[0] && ~ab_i[1]);

    assign wxyz_o = {z, y, x, w};

// Syntax: endmodule: <module name>
endmodule: decoder_2x4 
