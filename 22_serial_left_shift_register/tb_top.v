// testbench code for structural and
// timescale -- time unit/time precision

`timescale 1ns/1ns

module tb_top;

reg tb_clk;
reg tb_sin_i;
wire tb_out_o;

serial_shift_reg dut (
    .clk(tb_clk),
    .sin_i(tb_sin_i),
    .out_o(tb_out_o)
);

// Logic to terminate simulation
`ifndef TIMEOUT
  `define TIMEOUT 32'd1000
`endif
integer counter = 0;
always @(posedge tb_clk) begin
    counter <= counter+1;
    if (counter == `TIMEOUT) begin
        $finish;
    end
end

// Create VCD waveform file
initial begin
    $dumpfile(`VCD_FILE_LOC);
    $dumpvars;
end

initial begin
    tb_clk = 0;
    forever #10 tb_clk = ~tb_clk;
end

initial begin
    // A convenient printing utility that prints out the signals and the time ($time)
    $monitor("time = %0t, clk = %h sin = %h --> out = %h", $time, tb_clk, tb_sin_i, tb_out_o);
    tb_clk = 1'b0;
    tb_sin_i = 1'b0;

    #15;
    tb_sin_i = 1'b1;
    #35;
    tb_sin_i = 1'b0; 
    #80;
    tb_sin_i = 1'b1;
end

endmodule: tb_top
