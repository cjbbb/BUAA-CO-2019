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
	input IntReg,
	input Equal,
	input blez,
	input bgez,
	input bgtz,
	input bltz,
	input [4:0] PC_sel,
	input [31:0] EPC,
	input [31:0] PC,
	input [31:0] PC4,
	input [31:0] PC_beq,
	input [31:0] PC_j,
	input [31:0] PC_jr,
	output [31:0] next_pc
    );
	assign next_pc = (IntReg) 							   ? 32'h0000_4180:
						  (PC_sel == 0& ~IntReg)		   ? PC4:
						  (PC_sel == 1 & Equal& ~IntReg) ? PC_beq: //beq
						  (PC_sel == 1 & ~Equal& ~IntReg)? PC4:
						  (PC_sel == 2& ~IntReg)		   ? PC_jr:
						  (PC_sel == 3& ~IntReg)		   ? PC_j:
						  (PC_sel == 4 & ~Equal& ~IntReg)? PC_beq: //bne
						  (PC_sel == 4 & Equal& ~IntReg) ? PC4:
						  (PC_sel == 5 & blez& ~IntReg)  ? PC_beq:  //blez
						  (PC_sel == 5 & ~blez& ~IntReg) ? PC4:
						  (PC_sel == 6 & bgez& ~IntReg)  ? PC_beq:  //bgez
						  (PC_sel == 6 & ~bgez& ~IntReg) ? PC4:
						  (PC_sel == 7 & bgtz& ~IntReg)  ? PC_beq:  //bgtz
						  (PC_sel == 7 & ~bgtz& ~IntReg) ? PC4:
						  (PC_sel == 8 & bltz& ~IntReg)  ? PC_beq:  //bltz
						  (PC_sel == 8 & ~bltz& ~IntReg) ? PC4:
						  (PC_sel == 9& ~IntReg)		   ? EPC:
												        PC4;

endmodule
