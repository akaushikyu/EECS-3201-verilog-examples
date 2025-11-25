// testbench code for structural and
// timescale -- time unit/time precision

`timescale 1ns/1ns

module tb_top;

reg tb_a;
reg tb_b;
reg tb_c;
reg tb_d;
wire tb_f_b;
wire tb_f_nb;

blocking_non_blocking dut (
    .a(tb_a),
    .b(tb_b),
    .c(tb_c),
    .d(tb_d),
    .f_b(tb_f_b),
    .f_nb(tb_f_nb)
);

// Create VCD waveform file
initial begin
    $dumpfile(`VCD_FILE_LOC);
    $dumpvars;
end

initial begin
    // A convenient printing utility that prints out the signals and the time ($time)
    $monitor("time = %0t, a = %h, b = %h, c = %h, d = %h --> f_b = %h, f_nb = %h", $time, tb_a, tb_b, tb_c, tb_d, tb_f_b, tb_f_nb);
    tb_a = 1'b0;
    tb_b = 1'b0;
    tb_c = 1'b0;
    tb_d = 1'b0;

    #5;
    tb_a = 1'b1;
    tb_b = 1'b1;
    tb_c = 1'b0;
    tb_d = 1'b1;
    
    #5;
    tb_a = 1'b1;
    tb_b = 1'b1;
    tb_c = 1'b1;
    tb_d = 1'b1;

    #5;
    tb_a = 1'b1;
    tb_b = 1'b0;
    tb_c = 1'b0;
    tb_d = 1'b0;
 
    #5;
    tb_a = 1'b0;
    tb_b = 1'b0;
    tb_c = 1'b1;
    tb_d = 1'b1;
 
    #5;
    tb_a = 1'b1;
    tb_b = 1'b0;
    tb_c = 1'b1;
    tb_d = 1'b0;
  
end

endmodule: tb_top
