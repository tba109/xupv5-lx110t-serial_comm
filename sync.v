//////////////////////////////////////////////////////////////////////////////////////
// Tyler Anderson Wed, Apr 01, 2015 11:32:44 AM
// An N (a least two) flip-flop synchronizer
//////////////////////////////////////////////////////////////////////////////////////
module sync
  (
   ////////// inputs //////////
   input      clk, // clock
   input      rst_n, // active low reset
   input      a, // input to be synchronized
   
   ////////// outputs //////////
   output y
   ); 
   
   parameter P_DEFVAL = 1'b0;
   parameter P_NFF = 2;
   localparam NFF = (P_NFF > 1) ? P_NFF : 2; 

   reg [NFF-1:0] ff; // synthesis attribute shreg_extract of ff is no;
         
   always @(posedge clk or negedge rst_n)
     begin
	if( !rst_n ) ff <= {NFF{P_DEFVAL}};
	else ff <= {ff[NFF-2:0],a};
     end

   assign y = ff[NFF-1];

endmodule // sync

