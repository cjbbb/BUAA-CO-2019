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
module DM(
    input clk,
    input reset,
    input MemWrite,
    input MemRead,
    input [31:0] MemAddr,
    input [31:0] MemData,
    input [31:0] PC,
    output [31:0] ReadData
    );
    reg [31:0] dm [0:1023];
    integer i;
    initial begin
        for(i=0;i<1024;i=i+1)begin
            dm[i] <= 0;
        end
    end
    assign ReadData = MemRead?dm[MemAddr[11:2]]:0;
    always @(posedge clk)begin
        if(reset==1)begin
            for(i=0;i<1024;i=i+1)begin
                dm[i] <= 0;
            end
        end
        else begin
				if(MemWrite == 1) begin
            dm[MemAddr[11:2]] <= MemData;
            $display("%d@%h: *%h <= %h",$time,PC,MemAddr,MemData);
				end
        end 
    end
 
endmodule
