// simple_circuit.v -- A simple verilog file that does f(x, y, z) = \Sigma(0, 2, 4, 6)

// Syntax: module [design name] ([port list]):
// Description: Define the input and output interfaces of the hardware circuit
module simple_circuit (
    // Syntax: input [width-1:0] <port name>
    input wire x,
    input wire y,
    input wire z,
    // Syntax: output [width-1:0] <port name>
    output wire f, 
);

    // Truth table
    // | x | y | z | f | 
    // | - | - | - | - |
    // | 0 | 0 | 0 | 1 | 
    // | 0 | 0 | 1 | 0 | 
    // | 0 | 1 | 0 | 1 | 
    // | 0 | 1 | 1 | 0 | 
    // | 1 | 0 | 0 | 1 | 
    // | 1 | 0 | 1 | 0 | 
    // | 1 | 1 | 0 | 1 | 
    // | 1 | 1 | 1 | 0 | 

    //               (1)     (2)     (3)     (4)
    // f(x, y, z) = x'y'z' + x'yz' + xy'z' + xyz'
    
    // In behavioral modeling, any variable that holds some temporary value
    // within the always block should be declared as a register (reg) 
    // Syntax: reg [width-1:0] <reg_name>;
    reg tmp;

    // Here we are mixing dataflow and behavioral modeling, which is valid.
    // Here the wire f is assigned the value tmp and f captures any changes to tmp. 
    assign f = tmp;

    // the above assign statement is equivalent to the below behavioral modeling
    // always @ (tmp) begin
    //  f = tmp;
    // end

    // Syntax: 
    // always @ (sensitivity list) begin
    // <<< --- logic --- >>>
    // end
    // <sensitivity list>: list of signals that the always block is sensitive to changes
    always @ (x, y, z) begin
     tmp = (~x && ~y && ~z) ||
             (~x && y && ~z) || 
             (x && ~y && ~z) || 
             (x && y && ~z);
    end

endmodule: simple_circuit
