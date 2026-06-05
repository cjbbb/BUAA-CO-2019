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
	input blez,
	input bgez,
	input bgtz,
	input bltz,
	input [4:0] PC_sel,
	input [31:0] PC,
	input [31:0] PC4,
	input [31:0] PC_beq,
	input [31:0] PC_j,
	input [31:0] PC_jr,
	output [31:0] next_pc
    );
	assign next_pc = (PC_sel == 0)		   ? PC4:
						  (PC_sel == 1 & Equal) ? PC_beq: //beq
						  (PC_sel == 1 & ~Equal)? PC4:
						  (PC_sel == 2)		   ? PC_jr:
						  (PC_sel == 3)		   ? PC_j:
						  (PC_sel == 4 & ~Equal)? PC_beq: //bne
						  (PC_sel == 4 & Equal) ? PC4:
						  (PC_sel == 5 & blez)  ? PC_beq:  //blez
						  (PC_sel == 5 & ~blez) ? PC4:
						  (PC_sel == 6 & bgez)  ? PC_beq:  //bgez
						  (PC_sel == 6 & ~bgez) ? PC4:
						  (PC_sel == 7 & bgtz)  ? PC_beq:  //bgtz
						  (PC_sel == 7 & ~bgtz) ? PC4:
						  (PC_sel == 8 & bltz)  ? PC_beq:  //bltz
						  (PC_sel == 8 & ~bltz) ? PC4:
												        PC4;

endmodule
