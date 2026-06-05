`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:07:59 11/15/2019 
// Design Name: 
// Module Name:    Controller 
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
module Controller(
    input [5:0] op,
    input [5:0] func,
    output reg [2:0] ALUCtrl,
    output reg [2:0] RegDst,
    output reg [2:0] MemtoReg,
    output reg MemRead,
    output reg MemWrite,
    output reg ALUSrc,
    output reg RegWrite,
    output reg ExtOp,
    output reg [2:0]branch
    );

    always @(*)begin
        case(op)
        6'b000000: begin

            case(func)
                6'b100001: //addu
                begin
                    RegDst <= `Rd;
                    RegWrite <= 1;
                    ALUSrc <= `RD2;
                    MemtoReg <= `alu;
                    ALUCtrl <= `add;
                    MemRead <= 0;
                    MemWrite <= 0;
                    branch <= `pc;
                    ExtOp <= 0;
                end
                6'b100011://subu
                begin
                    RegDst <= `Rd;
                    RegWrite <= 1;
                    ALUSrc <= `RD2;
                    MemtoReg <= `alu;
                    ALUCtrl <= `sub;
                    MemRead <= 0;
                    MemWrite <= 0;
                    branch <= `pc;
                    ExtOp <= 0;
                end
                6'b001000: //jr
                begin
                    RegDst <= `Rd;
                    RegWrite <= 0;
                    ALUSrc <= `RD2;
                    MemtoReg <= `alu;
                    ALUCtrl <= `add;
                    MemRead <= 0;
                    MemWrite <= 0;
                    branch <= `jr;
                    ExtOp <= 0;
                end
					 6'b000000: //nop
                begin
                    RegDst <= `Rt;
						  RegWrite <= 0;
						  ALUSrc <= `imm;
					     MemtoReg <= `alu;
						  ALUCtrl <= `add;
						  MemRead <= 0;
						  MemWrite <= 0;
						  branch <= `pc;
						  ExtOp <= 0;
                end
					 default:
					 begin
                    RegDst <= `Rt;
						  RegWrite <= 0;
						  ALUSrc <= `imm;
					     MemtoReg <= `alu;
						  ALUCtrl <= `add;
						  MemRead <= 0;
						  MemWrite <= 0;
						  branch <= `pc;
						  ExtOp <= 0;
                end
            endcase
            end

        6'b001111: //lui 
        begin
            RegDst <= `Rt;
            RegWrite <= 1;
            ALUSrc <= `imm;
            MemtoReg <= `lui;
            ALUCtrl <= `add;
            MemRead <= 0;
            MemWrite <= 0;
            branch <= `pc;
            ExtOp <= 0;
        end
        6'b001101: //ori
        begin
            RegDst <= `Rt;
            RegWrite <= 1;
            ALUSrc <= `imm;
            MemtoReg <= `alu;
            ALUCtrl <= `or;
            MemRead <= 0;
            MemWrite <= 0;
            branch <= `pc;
            ExtOp <= 1;
        end
        6'b100011: //lw
        begin
            RegDst <= `Rt;
            RegWrite <= 1;
            ALUSrc <= `imm;
            MemtoReg <= `dm;
            ALUCtrl <= `add;
            MemRead <= 1;
            MemWrite <= 0;
            branch <= `pc;
            ExtOp <= 0;
        end
        6'b101011: //sw
        begin
            RegDst <= `Rt;
            RegWrite <= 0;
            ALUSrc <= `imm;
            MemtoReg <= `alu;
            ALUCtrl <= `add;
            MemRead <= 0;
            MemWrite <= 1;
            branch <= `pc;
            ExtOp <= 0;
        end
        6'b000011: //jal
        begin
            RegDst <= `jal;
            RegWrite <= 1;
            ALUSrc <= `imm;
            MemtoReg <= `pc4;
            ALUCtrl <= `add;
            MemRead <= 0;
            MemWrite <= 0;
            branch <= `jal;
            ExtOp <= 0;
        end
        6'b000100: //beq
        begin
            RegDst <= `Rt;
            RegWrite <= 0;
            ALUSrc <= `RD2;
            MemtoReg <= `alu;
            ALUCtrl <= `sub;
            MemRead <= 0;
            MemWrite <= 0;
            branch <= `beq;
            ExtOp <= 0;
        end
        6'b000000: //nop
        begin
            RegDst <= `Rt;
            RegWrite <= 0;
            ALUSrc <= `imm;
            MemtoReg <= `alu;
            ALUCtrl <= `add;
            MemRead <= 0;
            MemWrite <= 0;
            branch <= `pc;
            ExtOp <= 0;
        end
		  default:
		  begin
            RegDst <= `Rt;
				RegWrite <= 0;
				ALUSrc <= `imm;
				MemtoReg <= `alu;
				ALUCtrl <= `add;
				MemRead <= 0;
				MemWrite <= 0;
				branch <= `pc;
				ExtOp <= 0;
        end
        endcase
    end

endmodule
