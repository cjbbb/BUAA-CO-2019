`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:09:50 11/19/2019 
// Design Name: 
// Module Name:    CMP 
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
module CMP(
	input [31:0] Data1,
	input [31:0] Data2,
	output Equal,
	output blez,
	output bgez,
	output bgtz,
	output bltz
    );

	assign Equal = (Data1==Data2)?1:0;
	assign blez  = (Data1[31]==1||Data1==0)?1:0;
	assign bgez  = (Data1[31]==0)?1:0;
	assign bgtz  = (Data1[31]==0&&Data1!=0)?1:0;
	assign bltz  = (Data1[31]==1)?1:0;
	
endmodule
