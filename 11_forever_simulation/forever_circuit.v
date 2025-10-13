// forever_circuit.v -- An example of an incorrect verilog code where simulation will not terminate and the verilog
//                      simulator will not be able to advance time because of a loop
// Syntax: module [design name] ([port list]):
// Description: Define the input and output interfaces of the hardware circuit
module forever_circuit (
    input a,
    input b,
    input c,
    output f);

    reg tmp1;
    reg tmp2;

    initial begin
        tmp2 = a;
    end

    // tmp1 is sensitive to changes in tmp2 and b
    always @(tmp2, b) begin
        tmp1 = tmp2 ^ b;
    end

    // tmp2 is sensitive to changes in tmp1 and c 
    // this causes the two always block processes to ping
    // pong as tmp2 and tmp1 do not take on stable values
    always @(tmp1, c) begin
        tmp2 = tmp1 || c;
    end

    assign f = tmp2;


endmodule: forever_circuit
