`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:33:16 11/22/2019 
// Design Name: 
// Module Name:    NPC 
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
module NPC(
	input Equal,
	input [2:0] PC_sel,
	input [31:0] PC,
	input [31:0] PC4,
	input [31:0] PC_beq,
	input [31:0] PC_j,
	input [31:0] PC_jr,
	output [31:0] next_pc
    );
	assign next_pc = (PC_sel == 0)		   ? PC4:
						  (PC_sel == 1 & Equal) ? PC_beq:
						  (PC_sel == 1 & ~Equal)? PC4:
						  (PC_sel == 2)		   ? PC_jr:
						  (PC_sel == 3)		   ? PC_j:
												        PC4;

endmodule
