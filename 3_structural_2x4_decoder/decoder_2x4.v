// decoder_2x4.v -- A decoder circuit that takes 3 inputs (enable, a, b) and outputs 4 signals

// Syntax: module [design name] ([port list]):
// Description: Define the input and output interfaces of the hardware circuit
module decoder_2x4 (
    // Syntax: input [width-1:0] <port name>
    input enable,
    // ab_i is a 2 bit signal with bits 0 and 1 corresponding to a and b respectively 
    input [1:0] ab_i,
    // Syntax: output [width-1:0] <port name>
    // wxyz is a 4 bit signal with bits 0, 1, 2, 3 corresponding to w, x, y and z respectively
    output [3:0] wxyz_o
);

    // Truth table
    // ==========================
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

    // Intermediate signals to capture the product of each term
    // Syntax: wire [width-1:0] <wire name>
    wire abar;
    wire bbar;

    // Syntax: <gate> <gate name> (output, inputs...)
    // Description: Define the gate and the inputs, output of gate 
    not n1 (bbar, ab_i[0]);
    not n2 (abar, ab_i[1]);
    
    and a1 (wxyz_o[0], enable, abar, bbar);
    and a2 (wxyz_o[1], enable, abar, ab_i[0]);
    and a3 (wxyz_o[2], enable, ab_i[1], bbar);
    and a4 (wxyz_o[3], enable, ab_i[0], ab_i[1]);

// Syntax: endmodule: <module name>
endmodule: decoder_2x4 
