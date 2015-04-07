`timescale 1ns / 1ns

////////////////////////////////////////////////////////////////////////////////
// Tyler Anderson Tue, Apr 07, 2015  9:11:53 AM
//
// Testbench for the rs232_serdes.v module
////////////////////////////////////////////////////////////////////////////////

module rs232_serdes_tb;
   
   // Inputs
   reg tx_fifo_wr_en_in;
   reg [7:0] tx_fifo_data_in;
   reg 	     rx_fifo_rd_en_in;
   reg 	     clk;
   reg 	     rst_n;
   reg 	     rx;
   
   // Outputs
   wire      tx_fifo_full_out;
   wire [7:0] tx_fifo_dout_out;
   wire       rx_fifo_empty_out;
   wire [7:0] rx_fifo_dout_out;
   wire       tx;
   
   // Instantiate the Unit Under Test (UUT)
   rs232_serdes uut (
		     .tx_fifo_wr_en_in(tx_fifo_wr_en_in), 
		     .tx_fifo_full_out(tx_fifo_full_out), 
		     .tx_fifo_dout_out(tx_fifo_dout_out), 
		     .tx_fifo_data_in(tx_fifo_data_in), 
		     .rx_fifo_rd_en_in(rx_fifo_rd_en_in), 
		     .rx_fifo_empty_out(rx_fifo_empty_out), 
		     .rx_fifo_dout_out(rx_fifo_dout_out), 
		     .clk(clk), 
		     .rst_n(rst_n), 
		     .rx(rx), 
		     .tx(tx)
		     );
   
   // module clock generator
   localparam PERIOD = 30;
   always #(PERIOD/2) clk = ~clk;

   // RS232 clock period
   localparam BAUD_RATE = 9600;
   localparam RS232_PERIOD = 1000000000/BAUD_RATE;   
   
   initial begin
      // Initialize Inputs
      tx_fifo_wr_en_in = 0;
      tx_fifo_data_in = 0;
      rx_fifo_rd_en_in = 0;
      clk = 0;
      rst_n = 0;
      rx =1'b1;

      // Wait 100 ns for global reset to finish
      #100;
      rst_n = 1'b1;
      
      ///////////////////////////////////////////
      // Here is the receiver section
      
      // Data word 0xAA
      #(RS232_PERIOD) rx = 1'b0; // Start bit
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b0;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b0;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b0;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b0;
      #(RS232_PERIOD) rx = 1'b1; // Stop bit
            
      // Data word 0x55
      #(RS232_PERIOD) rx = 1'b0; // Start bit
      #(RS232_PERIOD) rx = 1'b0;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b0;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b0;
      #(RS232_PERIOD) rx = 1'b1;
      #(RS232_PERIOD) rx = 1'b0;
      #(RS232_PERIOD) rx = 1'b1; 
      #(RS232_PERIOD) rx = 1'b1; // Stop bit
      
      ///////////////////////////////////////
      // Read out the FIFO

      #(1*PERIOD) rx_fifo_rd_en_in = 1'b1;
      #(1*PERIOD) rx_fifo_rd_en_in = 1'b0;
      #(10000*PERIOD)
      #(1*PERIOD) rx_fifo_rd_en_in = 1'b1;
      #(1*PERIOD) rx_fifo_rd_en_in = 1'b0;
      #(10000*PERIOD)
      
      ///////////////////////////////////////
      // Write to the FIFO
      #(1*PERIOD) tx_fifo_wr_en_in = 1'b1; tx_fifo_data_in = 8'haa;
      #(1*PERIOD) tx_fifo_wr_en_in = 1'b0;
      #(10000*PERIOD)
      #(1*PERIOD) tx_fifo_wr_en_in = 1'b1; tx_fifo_data_in = 8'h55;
      #(1*PERIOD) tx_fifo_wr_en_in = 1'b0;
      #(10000*PERIOD)
      
      
      // Let the dust settle
      #(3*RS232_PERIOD)


      
      
      $finish;
      
      // Add stimulus here
      
   end
      
endmodule

