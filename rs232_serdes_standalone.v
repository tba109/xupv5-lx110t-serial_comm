////////////////////////////////////////////////////////////////////////////////////////
// Tyler Anderson Wed, Mon Apr  6 22:33:24 EDT 2015
//
// rs232_serdes.v
// "RS-232 Serializer/Deserializer"
// A custom Verilog HDL module
//
// Full duplex RS-232 communication with buffering
//   No flow control
//   No parity
//   1 stop bit
//
/////////////////////////////////////////////////////////////////////////////////////////

module rs232_serdes
  (
   
   // For intermediate debugging
   input 	tx_fifo_wr_en_in,
   output 	tx_fifo_full_out,
   output [7:0] tx_fifo_dout_out,
   input [7:0] 	tx_fifo_data_in,
   input 	rx_fifo_rd_en_in,
   output 	rx_fifo_empty_out,
   output [7:0] rx_fifo_dout_out,

   // These stick around   
   input 	clk, // clock frequency
   input 	rst_n, // active low reset
   input 	rx, // incoming rs232 data
   output 	tx     // outgoing rs232 data
   );
   
   //////////////////////////////////////////////////////////////////////////////////
   // RS232 receiver
  
   // Deserializer
   wire [7:0] rx_fifo_data;
   wire       rx_fifo_wr_en;
   wire       rx_fifo_full;
   defparam RS232_DES0.P_CLK_FREQ_HZ = 33000000;
   defparam RS232_DES0.P_BAUD_RATE = 9600;
   rs232_des RS232_DES0
     (
      .clk(clk),
      .rst_n(rst_n),
      .rx(rx),
      .rx_fifo_data(rx_fifo_data),
      .rx_fifo_wr_en(rx_fifo_wr_en),
      .rx_fifo_full(rx_fifo_full)
      );

   // Receiver FIFO
   wire       rx_fifo_rd_en;
   wire [7:0] rx_fifo_dout;
   wire       rx_fifo_empty;
   fifo_16_8_dis RX_FIFO_16_8 
     (
      .clk(clk),
      .rst(!rst_n),
      .din(rx_fifo_data),
      .wr_en(rx_fifo_wr_en),
      .rd_en(rx_fifo_rd_en),
      .dout(rx_fifo_dout),
      .full(rx_fifo_full),
      .empty(rx_fifo_empty)
      );
   
   
   //////////////////////////////////////////////////////////////////////////////////
   // RS232 transmitter

   // Serializer
   wire [7:0] tx_fifo_data;
   wire       tx_fifo_rd_en;
   wire       tx_fifo_empty;
   defparam RS232_SER0.P_CLK_FREQ_HZ = 33000000;
   defparam RS232_SER0.P_BAUD_RATE = 9600;
   rs232_ser RS232_SER0
     (
      .clk(clk),
      .rst_n(rst_n),
      .tx(tx),
      .tx_fifo_data(tx_fifo_data),
      .tx_fifo_rd_en(tx_fifo_rd_en),
      .tx_fifo_empty(tx_fifo_empty)
      );

   // Transmitter FIFO
   wire       tx_fifo_wr_en;
   wire [7:0] tx_fifo_dout;
   wire       tx_fifo_full;
   fifo_16_8_dis TX_FIFO_16_8 
     (
      .clk(clk),
      .rst(!rst_n),
      .din(tx_fifo_data),
      .wr_en(tx_fifo_wr_en),
      .rd_en(tx_fifo_rd_en),
      .dout(tx_fifo_dout),
      .full(tx_fifo_full),
      .empty(tx_fifo_empty)
      );
   

   // For testing
   assign tx_fifo_wr_en = tx_fifo_wr_en_in;
   assign tx_fifo_full_out = tx_fifo_full;
   assign tx_fifo_dout_out = tx_fifo_dout;
   assign tx_fifo_data = tx_fifo_data_in;
   assign rx_fifo_rd_en = rx_fifo_rd_en_in;
   assign rx_fifo_empty_out = rx_fifo_empty;
   assign rx_fifo_dout_out = rx_fifo_dout;
   
endmodule
