////////////////////////////////////////////////////////////////////////////////////////
// Tyler Anderson Wed, Sat Apr 11 08:19:56 EDT 2015
//
// rs232_if.v
// "RS232 Interface Module"
// A custom Verilog HDL module
//
// Full duplex RS-232 communication with buffering
//   No flow control
//   No parity
//   1 stop bit
//
// Deseralize receive (rx) packets and converts the hexadecimal characters to their
// binary equivalent command (cmd).
//
// Converts binary equivalent response (rsp) packets to their hexadecimal character
// equivalent and transmits the resulting packet (tx).   
//
/////////////////////////////////////////////////////////////////////////////////////////

module rs232_if
  (
   input 	 clk,            // clock frequency
   input 	 rst_n,          // active low reset
   input 	 rx,             // incoming rs232 data
   output 	 tx,             // outgoing rx232 data
   output [31:0] cmd_fifo_dout,  // command fifo data out
   input  	 cmd_fifo_rd_en, // command fifo read enable
   output 	 cmd_fifo_empty, // command fifo empty
   input [31:0]  rsp_fifo_din,   // response fifo data in
   input 	 rsp_fifo_wr_en, // response fifo write enable
   output	 rsp_fifo_full   // response fifo full
   );

   
   //////////////////////////////////////////////////////////////////////////////////
   // RS232 receiver
  
   // Deserializer
   wire [7:0] rx_fifo_data;
   wire       rx_fifo_wr_en;
   wire       rx_fifo_full;
   defparam RS232_DES0.P_CLK_FREQ_HZ = 100000000;
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
   defparam RS232_SER0.P_CLK_FREQ_HZ = 100000000;
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

   //////////////////////////////////////////////////////////////////////////////////
   // The command fifo
   
   reg [31:0] cmd_fifo_din;
   wire       cmd_fifo_wr_en;
   wire       cmd_fifo_full;
   fifo_16_32_dis CMD_FIFO_16_32_DIS0
     (
      .clk(clk),
      .rst(!rst_n),
      .din(cmd_fifo_din),
      .wr_en(cmd_fifo_wr_en),
      .rd_en(cmd_fifo_rd_en),
      .dout(cmd_fifo_dout),
      .full(cmd_fifo_full),
      .empty(cmd_fifo_empty)
      );
   
   ////////////////////////////////////////////////////////////////////////////////
   // The response fifo
   
   wire [31:0] rsp_fifo_dout;
   wire        rsp_fifo_rd_en;
   wire        rsp_fifo_empty;
   fifo_16_32_dis RSP_FIFO_16_32_DIS0
     (
      .clk(clk),
      .rst(!rst_n),
      .din(rsp_fifo_din),
      .wr_en(rsp_fifo_wr_en),
      .rd_en(rsp_fifo_rd_en),
      .dout(rsp_fifo_dout),
      .full(rsp_fifo_full),
      .empty(rsp_fifo_empty)
      );
   
   //////////////////////////////////////////////////////////////////////////////////
   // Picoblaze character to binary converter
   
   // KCPSM3
   wire [9:0]  kcpsm3_address;
   wire [17:0] kcpsm3_instruction;
   wire [7:0]  kcpsm3_port_id;
   wire        kcpsm3_write_strobe;
   wire        kcpsm3_read_strobe;
   wire        kcpsm3_interrupt_ack;
   wire [7:0]  kcpsm3_out_port;
   wire        kcpsm3_interrupt;
   reg [7:0]   kcpsm3_in_port;
   
   // Picoblaze
   kcpsm3 KCPSM30
     (
      .address(kcpsm3_address),
      .instruction(kcpsm3_instruction),
      .port_id(kcpsm3_port_id),
      .write_strobe(kcpsm3_write_strobe),
      .out_port(kcpsm3_out_port),
      .read_strobe(kcpsm3_read_strobe),
      .in_port(kcpsm3_in_port),
      .interrupt(kcpsm3_interrupt),
      .interrupt_ack(kcpsm3_interrput_ack),
      .reset(!rst_n),
      .clk(clk)
      );

   // Program memory
   khex2bin KHEX2BIN0
     (
      .address(kcpsm3_address),
      .clk(clk),
      .instruction(kcpsm3_instruction)
      );

   // Some port id declarations
   localparam RX_FIFO_EMPTY  = 8'h00;
   localparam TX_FIFO_FULL   = 8'h01;
   localparam CMD_FIFO_FULL  = 8'h02;
   localparam RSP_FIFO_EMPTY = 8'h03;
   localparam RSP_FIFO_DATA0 = 8'h04;
   localparam RSP_FIFO_DATA1 = 8'h05;
   localparam RSP_FIFO_DATA2 = 8'h06;
   localparam RSP_FIFO_DATA3 = 8'h07;
   localparam RSP_FIFO_DATA4 = 8'h08;
   localparam RSP_FIFO_DATA5 = 8'h09;
   localparam RSP_FIFO_DATA6 = 8'h0A;
   localparam RSP_FIFO_DATA7 = 8'h0B;
   localparam RX_FIFO_READ   = 8'h0C;
   localparam TX_FIFO_WRITE  = 8'h0D;
   localparam CMD_FIFO_WRITE = 8'h0E;
   localparam RSP_FIFO_READ  = 8'h0F;
   localparam CMD_FIFO_DATA0 = 8'h10;
   localparam CMD_FIFO_DATA1 = 8'h11;
   localparam CMD_FIFO_DATA2 = 8'h12;
   localparam CMD_FIFO_DATA3 = 8'h13;
   localparam CMD_FIFO_DATA4 = 8'h14;
   localparam CMD_FIFO_DATA5 = 8'h15;
   localparam CMD_FIFO_DATA6 = 8'h16;
   localparam CMD_FIFO_DATA7 = 8'h17;
   localparam RX_FIFO_DATA   = 8'h18;
      
   // Picoblaze support logic 
   assign rx_fifo_rd_en  = (kcpsm3_port_id == RX_FIFO_READ)   && kcpsm3_read_strobe;
   assign cmd_fifo_wr_en = (kcpsm3_port_id == CMD_FIFO_WRITE) && kcpsm3_write_strobe;
   assign rsp_fifo_rd_en = (kcpsm3_port_id == RSP_FIFO_READ)  && kcpsm3_read_strobe;
   assign tx_fifo_wr_en  = (kcpsm3_port_id == TX_FIFO_WRITE)  && kcpsm3_write_strobe;    
   assign tx_fifo_din    = kcpsm3_out_port;
             
   always @(posedge clk)
     if( kcpsm3_write_strobe )
       begin
	  case( kcpsm3_port_id[4:0] )
	    CMD_FIFO_DATA0: cmd_fifo_din[3:0]    <= kcpsm3_out_port[3:0];
	    CMD_FIFO_DATA1: cmd_fifo_din[7:4]    <= kcpsm3_out_port[3:0];
	    CMD_FIFO_DATA2: cmd_fifo_din[11:8]   <= kcpsm3_out_port[3:0];
	    CMD_FIFO_DATA3: cmd_fifo_din[15:12]  <= kcpsm3_out_port[3:0];
	    CMD_FIFO_DATA4: cmd_fifo_din[19:16]  <= kcpsm3_out_port[3:0];
	    CMD_FIFO_DATA5: cmd_fifo_din[23:20]  <= kcpsm3_out_port[3:0];
	    CMD_FIFO_DATA6: cmd_fifo_din[27:24]  <= kcpsm3_out_port[3:0];
	    CMD_FIFO_DATA7: cmd_fifo_din[31:28]  <= kcpsm3_out_port[3:0];
	  endcase 
       end 

   always @(*)
     case( kcpsm3_port_id[4:0] )
       RX_FIFO_DATA  : kcpsm3_in_port <= rx_fifo_dout;
       RX_FIFO_EMPTY : kcpsm3_in_port <= {7'b0,rx_fifo_empty};
       TX_FIFO_FULL  : kcpsm3_in_port <= {7'b0,tx_fifo_full};
       CMD_FIFO_FULL : kcpsm3_in_port <= {7'b0,cmd_fifo_full};
       RSP_FIFO_EMPTY: kcpsm3_in_port <= {7'b0,rsp_fifo_empty};
       RSP_FIFO_DATA0: kcpsm3_in_port <= {4'b0,rsp_fifo_dout[3:0]};
       RSP_FIFO_DATA1: kcpsm3_in_port <= {4'b0,rsp_fifo_dout[7:4]};
       RSP_FIFO_DATA2: kcpsm3_in_port <= {4'b0,rsp_fifo_dout[11:8]};
       RSP_FIFO_DATA3: kcpsm3_in_port <= {4'b0,rsp_fifo_dout[15:12]};
       RSP_FIFO_DATA4: kcpsm3_in_port <= {4'b0,rsp_fifo_dout[19:16]};
       RSP_FIFO_DATA5: kcpsm3_in_port <= {4'b0,rsp_fifo_dout[23:20]};
       RSP_FIFO_DATA6: kcpsm3_in_port <= {4'b0,rsp_fifo_dout[27:24]};
       RSP_FIFO_DATA7: kcpsm3_in_port <= {4'b0,rsp_fifo_dout[31:28]};
       default       : kcpsm3_in_port <= 8'b0;
     endcase
	    
endmodule
