// testbench code for structural and
// timescale -- time unit/time precision

`timescale 1ns/1ns

module tb_top;

reg tb_clk;
reg tb_rst;
wire tb_detect;

reg [1:0] tb_sel;
reg [31:0] tb_pin_i;
wire [31:0] tb_pout_o;

universal_shift_reg #(.DWIDTH(32)) driver (
    .clk(tb_clk),
    .slin_i(0'b0),
    .srin_i(0'b0),
    .sel(tb_sel),
    .pin_i(tb_pin_i),
    .pout_o(tb_pout_o)
);

pattern_detection_moore dut (
    .clk(tb_clk),
    .rst(tb_rst),
    .in_i(tb_pout_o[0]),
    .detect(tb_detect)
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
    tb_clk = 0;
    tb_rst = 1;
    forever #10 tb_clk = ~tb_clk;
end

initial begin
    $dumpfile(`VCD_FILE_LOC);
    $dumpvars;
end

initial begin
    tb_clk = 1'b0;
    tb_rst = 1'b1;
    tb_sel = 2'b11;
    tb_pin_i = 32'hFDCAE398;

    #5;
    tb_rst = 1'b0;
    
    #60;
    tb_sel = 2'b01;

end

endmodule: tb_top
