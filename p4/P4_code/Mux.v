`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:31:22 11/15/2019 
// Design Name: 
// Module Name:    Mux 
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
`include "cjbdefine.v"
module Mux(
    input [4:0] Rt,
    input [4:0] Rd,
	input [31:0] RD1,
    input [31:0] RD2,
    input [31:0] imm32,
    input [31:0] Result,
    input [15:0] imm16,
	input [31:0] ReadData,
	input [2:0] RegDst,
	input ALUSrc,
	input [2:0] MemToReg,
	input [31:0] PC4,
	input [31:0] PCbeq,
	input [31:0] PCjal,
	input zero,
    input [2:0] branch,
    output reg[4:0] WA,
	output reg[31:0] B,
	output reg[31:0] WD,
	output reg[31:0] next_pc
    );

    always @(*)begin

        case (RegDst)
            `Rt : WA<=Rt;
            `Rd : WA<=Rd;
            `jal: WA<=5'b11111;
        endcase

        case(ALUSrc)
            `RD2: B <= RD2;
            `imm: B <= imm32;
        endcase

        case(MemToReg)
            `alu: WD<=Result;
            `dm: WD<=ReadData;
            `lui: WD<={imm16,{16{1'b0}}};
            `pc4: WD<=PC4;
        endcase

        case(branch)
            `pc: next_pc <= PC4;
            `jal:next_pc <= PCjal;
            `jr :next_pc <= Result;
            `beq: begin
                if(zero == 1)begin
                    next_pc <= PCbeq;
                end
                else begin
                    next_pc <= PC4;
                end
            end
        endcase
    end

endmodule
