`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:13:54 11/09/2019 
// Design Name: 
// Module Name:    GRF 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module GRF(
    input clk,
    input reset,
    input [4:0] RA1,
    input [4:0] RA2,
    input [4:0] WA,
    input [31:0] WD,
    input RegWrite,
    input [31:0] PC,
    output [31:0] RD1,
    output [31:0] RD2
    );
    reg [31:0]Register[0:31];
    integer i;

	 assign RD1 = (RA1==0)		    			  ?  0:
					  (WA==RA1&&WA!=0&&RegWrite) ?  WD:
															Register[RA1];
												
	 assign RD2 = (RA2==0)		   			  ?  0:
					  (WA==RA2&&WA!=0&&RegWrite) ?  WD:
															Register[RA2];
    initial begin
        for(i=0;i<32;i=i+1)begin
            Register[i]<=0;
        end
    end
     
    always @(posedge clk)begin
        if(reset == 1)begin
            for(i=0;i<32;i=i+1)begin
                Register[i]<=0;
            end
        end
        else if(RegWrite==1&&WA!=5'b00000)begin
            Register[WA] <= WD;
            $display("%d@%h: $%d <= %h",$time,PC,WA,WD);
        end
    end

endmodule
