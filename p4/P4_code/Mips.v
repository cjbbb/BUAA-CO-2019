`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:34:19 11/15/2019 
// Design Name: 
// Module Name:    mips 
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
module mips(
    input clk,
    input reset
    );
    //寄存器
    wire [31:0] RD1;
    wire [31:0] RD2;
    wire [4:0] WA;
    wire [31:0]WD;
	 wire [4:0]RA1;
	 wire [4:0] RA2;
	 
    //控制信号
    wire ALUSrc;
    wire MemRead;
    wire MemWrite; 
    wire RegWrite;
    wire ExtOp;
    wire [2:0]RegDst;
    wire [2:0] MemtoReg;
    wire [2:0] branch;
    wire [2:0] ALUCtrl;

    //ALU
    wire [31:0] A;
    wire [31:0] B;
    wire [31:0] Result;
	 wire zero;
	 
    //PC
    wire [31:0] PC4;
   wire [31:0] PCbeq;
	wire [31:0] PCjal;
    wire [31:0] PC;
    wire [31:0] next_pc;
    
    //DM
    wire [31:0] MemData;
    wire [31:0] MemAddr; 
	 wire [31:0] ReadData;
	
    //IM
    wire [31:0] Instr;
    wire [5:0] op;
    wire [5:0] func;
	 wire [15:0] imm16;
	 wire [31:0] imm32;
    wire [4:0] Rs;
    wire [4:0] Rt;
    wire [4:0] Rd;

    //连线
    assign op = Instr[31:26];
	 assign Rs = Instr[25:21];
	 assign Rt = Instr[20:16];
	 assign Rd = Instr[15:11];
	 assign func = Instr[5:0];
	 assign imm16 = Instr[15:0];
	  
	 assign RA1 = Rs;
	 assign RA2 = Rt;
	 assign A = RD1; 
	 assign MemAddr = Result;
	 assign MemData = RD2;
	 //PC的连线
	 assign PC4 =PC +4;
	 assign PCbeq = PC + 4 + {{14{imm16[15]}},imm16,2'b00};
	 assign PCjal = {PC[31:28],Instr[25:0],2'b00};
	 
	 CMP cjbCMP(A,B,zero); 
	 PC cjbPC(clk,reset,next_pc,PC);
	 IM cjbIM(PC,Instr);
	 Controller cjbController(op,func,ALUCtrl,RegDst,MemtoReg,MemRead,MemWrite,ALUSrc,RegWrite,ExtOp,branch);
	 Mux cjbMux(Rt,Rd,RD1,RD2,imm32,Result,imm16,ReadData,RegDst,ALUSrc,MemtoReg, PC4,PCbeq,PCjal,zero,branch,WA,B,WD,next_pc);
	 GRF cjbGRF(clk,reset,RA1,RA2,WA,WD,RD1,RD2,RegWrite,PC);
	 DM cjbDM(clk,reset,MemWrite,MemRead,MemAddr,MemData,PC,ReadData);
	 EXT cjbEXT(imm16,imm32,ExtOp);
	 ALU cjbALU(A,B,ALUCtrl,Result);
endmodule
