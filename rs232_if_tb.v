`timescale 1ns / 1ns

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:35:31 04/12/2015
// Design Name:   rs232_if
// Module Name:   /home/tyler/sat_erp/firmware/xupv5-lx110t-serial_comm/rs232_if_tb.v
// Project Name:  xupv5-lx110t-serial_comm
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: rs232_if
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module rs232_if_tb;
   
   // Inputs
   reg         clk;
   reg 	       rst_n;
   reg 	       rx;
   reg 	       cmd_fifo_rd_en;
   reg [31:0]  rsp_fifo_din;
   reg 	       rsp_fifo_wr_en;
   
   // Outputs
   wire        tx;
   wire [31:0] cmd_fifo_dout;
   wire        cmd_fifo_empty;
   wire        rsp_fifo_full;
   
   // Instantiate the Unit Under Test (UUT)
   rs232_if uut (
		 .clk(clk), 
		 .rst_n(rst_n), 
		 .rx(rx), 
		 .tx(tx), 
		 .cmd_fifo_dout(cmd_fifo_dout), 
		 .cmd_fifo_rd_en(cmd_fifo_rd_en), 
		 .cmd_fifo_empty(cmd_fifo_empty), 
		 .rsp_fifo_din(rsp_fifo_din), 
		 .rsp_fifo_wr_en(rsp_fifo_wr_en), 
		 .rsp_fifo_full(rsp_fifo_full)
		 );
   
   // module clock generator
   localparam PERIOD = 10;
   always #(PERIOD/2) clk = ~clk;

   // RS232 clock period
   localparam BAUD_RATE = 9600;
   localparam RS232_PERIOD = 1000000000/BAUD_RATE;
   
   initial begin
      // Initialize Inputs
      clk = 0;
      rst_n = 0;
      rx = 1;
      cmd_fifo_rd_en = 0;
      rsp_fifo_din = 0;
      rsp_fifo_wr_en = 0;
      
      // Wait 100 ns for global reset to finish
      #100;
      rst_n = 1'b1;
      
      ///////////////////////////////////////////
      // Here is the receiver section
      
      // Data word 0x78 ('x')
      #(RS232_PERIOD) rx = 1'b0; // Start bit
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b0;
      #(RS232_PERIOD) rx = 1'b0;
      #(RS232_PERIOD) rx = 1'b0;
      #(RS232_PERIOD) rx = 1'b0;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1; // Stop bit

      // Data word 0x30 ('0')
      #(RS232_PERIOD) rx = 1'b0; // Start bit
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b0;
      #(RS232_PERIOD) rx = 1'b0;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1; // Stop bit

      
      // Data word 0x30 ('0')
      #(RS232_PERIOD) rx = 1'b0; // Start bit
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b0;
      #(RS232_PERIOD) rx = 1'b0;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1; // Stop bit

      // Data word 0x30 ('0')
      #(RS232_PERIOD) rx = 1'b0; // Start bit
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b0;
      #(RS232_PERIOD) rx = 1'b0;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1; // Stop bit

      // Data word 0x30 ('0')
      #(RS232_PERIOD) rx = 1'b0; // Start bit
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b0;
      #(RS232_PERIOD) rx = 1'b0;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1; // Stop bit

      // Data word 0x30 ('0')
      #(RS232_PERIOD) rx = 1'b0; // Start bit
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b0;
      #(RS232_PERIOD) rx = 1'b0;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1; // Stop bit

      // Data word 0x30 ('0')
      #(RS232_PERIOD) rx = 1'b0; // Start bit
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b0;
      #(RS232_PERIOD) rx = 1'b0;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1; // Stop bit

      // Data word 0x30 ('0')
      #(RS232_PERIOD) rx = 1'b0; // Start bit
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b0;
      #(RS232_PERIOD) rx = 1'b0;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1; // Stop bit

      // Data word 0x30 ('0')
      #(RS232_PERIOD) rx = 1'b0; // Start bit
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b0;
      #(RS232_PERIOD) rx = 1'b0;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1; // Stop bit

      // Data word 0x0A ('linefeed')
      #(RS232_PERIOD) rx = 1'b0; // Start bit
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b0;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b0;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b1; // Stop bit
      
      // #(3*RS232_PERIOD) cmd_fifo_rd_en = 1'b1;
      // #(PERIOD)         cmd_fifo_rd_en = 1'b0;
      
      // Let the dust settle
      #(3*RS232_PERIOD);

      $finish;
      
   end
   
endmodule

