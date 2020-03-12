`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:58:39 11/09/2019 
// Design Name: 
// Module Name:    DM 
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
`include "define.v"
module DM(
	 input [31:0] IR_M,
	 input DM_Write_En,
    input clk,
    input reset,
    input MemWrite,
    input MemRead,
    input [31:0] MemAddr,
    input [31:0] MemData,
    input [31:0] PC,
    output [31:0] ReadData
    );
	 wire[1:0]A;
	 wire[3:0]BE; 
    reg [31:0] dm [0:4095];
	 wire[31:0]store_Data;
    integer i;
	 `define DM dm[MemAddr[13:2]] 
	 assign A = MemAddr[1:0];
	 assign BE = ((IR_M[`op]==`sh )&& A[1]==0) ?4'b0011:
					 ((IR_M[`op]==`sh )&& A[1]==1) ?4'b1100:
					 ((IR_M[`op]==`sb )&& A==2'b00)?4'b0001:
					 ((IR_M[`op]==`sb )&& A==2'b01)?4'b0010:
					 ((IR_M[`op]==`sb )&& A==2'b10)?4'b0100:
					 ((IR_M[`op]==`sb )&& A==2'b11)?4'b1000:
															  4'b1111; //其余情况是lw/sw 所有位置都写入	 
	
	 assign store_Data = BE==4'b1111 ?  MemData:
								BE==4'b0001 ? {`DM[31:8],MemData[7:0]}:
								BE==4'b0010 ? {`DM[31:16],MemData[7:0],`DM[7:0]}:
								BE==4'b0100 ? {`DM[31:24],MemData[7:0],`DM[15:0]}:
								BE==4'b1000 ? {MemData[7:0],`DM[23:0]}:
								BE==4'b0011 ? {`DM[31:16],MemData[15:0]}:
								BE==4'b1100 ? {MemData[15:0],`DM[15:0]}:
											     MemData;
												  
	 initial begin 
        for(i=0;i<4096;i=i+1)begin
            dm[i] <= 0;
        end
    end
	 
	 
    assign ReadData = MemRead?dm[MemAddr[13:2]]:0;
    always @(posedge clk)begin
        if(reset==1)begin
            for(i=0;i<4096;i=i+1)begin
                dm[i] <= 0;
            end
        end
        else begin
				if(MemWrite == 1 && DM_Write_En) begin
					`DM <= store_Data;
					//$display("@%h: *%h <= %h", PC, {MemAddr[31:2], 2'b0}, store_Data);
				//	if(DM_Write_En)begin
					$display("%d@%h: *%h <= %h", $time, PC, {MemAddr[31:2], 2'b0}, store_Data);
					//end
				end
        end 
    end
 
endmodule
