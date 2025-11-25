// testbench code for structural and
// timescale -- time unit/time precision

`timescale 1ns/1ns

module tb_top;

reg tb_clk;
reg tb_slin_i;
reg tb_srin_i;
reg [3:0] tb_pin_i;
reg [1:0] tb_sel;
wire [3:0] tb_pout_o;

universal_shift_reg dut (
    .clk(tb_clk),
    .slin_i(tb_slin_i),
    .srin_i(tb_srin_i),
    .sel(tb_sel),
    .pin_i(tb_pin_i),
    .pout_o(tb_pout_o)
);

initial begin
    tb_clk = 0;
    forever #10 tb_clk = ~tb_clk;
end

// Create VCD waveform file
initial begin
    $dumpfile(`VCD_FILE_LOC);
    $dumpvars;
end

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

initial begin
    tb_clk = 1'b0;
    tb_slin_i = 1'b0;
    tb_srin_i = 1'b0;
    tb_sel = 2'b00;

    #8;
    tb_sel = 2'b11;
    tb_pin_i = 4'b1101;
    
    #9;
    tb_sel = 2'b01;
    tb_slin_i = 1'b1;

    #30;
    tb_sel = 2'b10;
    tb_srin_i = 1'b1;

    #1;
    tb_sel = 2'b00;
    
    #10;
    tb_sel = 2'b10;

    #50;
    tb_sel = 2'b01;
    tb_srin_i = 1'b0;

end

endmodule: tb_top
