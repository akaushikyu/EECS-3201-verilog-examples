// circuit module that instantiates sub_circuit module
`timescale 1ns/1ns
module circuit (
    input [3:0] wxyz_i,
    output f
);

    wire pr1;
    wire pr2;
    wire pr3;

    // instantiate sub_circuit
    // Syntax: <module name> <instance name> (
    //                .<port in module> (signal declared in parent module),
    //                .<port in module> (signal declared in parent module),
    //                .... );

    // For the below instantiation, s1 is a module instance of sub_circuit with port connections
    // See the attached PNG for the diagram of this circuit
    sub_circuit s1 (
        .a(wxyz_i[0]),
        .b(wxyz_i[1]),
        .c(wxyz_i[2]),
        .d(pr1)
    );

    sub_circuit s2 (
        .a(wxyz_i[1]),
        .b(wxyz_i[2]),
        .c(wxyz_i[3]),
        .d(pr2)
    );

    sub_circuit s3 (
        .a(wxyz_i[2]),
        .b(wxyz_i[3]),
        .c(wxyz_i[0]),
        .d(pr3)
    );

    or G1(f, pr1, pr2, pr3);

    

endmodule: circuit
