`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:33:37 11/09/2019 
// Design Name: 
// Module Name:    IM 
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
module IM(
    input [31:0] PC,
    output [31:0] Instruction
    );
	 wire [31:0] pc;
    reg [31:0]im [0:4095];
	 integer i;
    initial begin
	 for(i=0;i<4096;i=i+1)begin
		im[i]=0;
	 end
        $readmemh("code.txt", im);
        $readmemh("code_handler.txt", im, 1120, 2047);
    end
	 assign pc = PC - 32'h00003000;
   // assign Instruction = im[pc[13:2]];
    assign Instruction=(PC[1:0]==2'b0 && PC>=32'h3000 && PC <=32'h4ffc) ? im[pc[13:2]] : 32'h00000000;

endmodule
