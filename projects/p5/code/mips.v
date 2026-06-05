`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:57:36 11/22/2019 
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
`include"define.v"
module mips(
    input clk,
    input reset
    );
	 //备用
	 wire temp_D;
	 wire temp_F;
	 wire temp_E;
	 wire temp_W;
	//转发
	wire [31:0] RS_D_in;
	wire [31:0] RT_D_in;
	wire [31:0] RS_E_in;
	wire [31:0] RT_E_in;
	wire [31:0] RT_M_in;
	wire [31:0] RS_D;
	wire [31:0] RT_D;
	wire [31:0] RS_E;
	wire [31:0] RT_E;
	wire [31:0] RT_M;
	//4暂停
	wire PC_En;
	wire F_D_En;
	wire D_E_Clr;
	wire stall;
	//IM
	wire [31:0] IR_F;
	wire [31:0] IR_D;
	wire [31:0] IR_E;
	wire [31:0] IR_M;
	wire [31:0] IR_W;

	//PC+NPC
	wire [31:0] PC;
	wire [31:0] next_pc;
	wire [31:0] PC4;
	wire [31:0] PC_beq;
	wire [31:0] PC_j;
	wire [31:0] PC_jr;
	
	wire [31:0] PC8_D;
	wire [31:0] PC8_E;
	wire [31:0] PC8_M;
	wire [31:0] PC8_W;
	wire [31:0] PC_D;
	wire [31:0] PC_E;
	wire [31:0] PC_M;
	wire [31:0] PC_W;
	// EXT
	wire [15:0] imm16;
	wire [31:0] imm32;
	wire [31:0] EXT_D;
	wire [31:0] EXT_E;
	//CMP
	wire [31:0] CMP_A;
	wire [31:0] CMP_B;
	wire Equal;
	
	//GRF
	wire [4:0] RA1;
	wire [4:0] RA2;
	wire [4:0] WA;
	wire [31:0] WD;
   wire [31:0] RF_RD1;
   wire [31:0] RF_RD2;
	//ALU
	wire [31:0] ALU_A;
   wire [31:0] ALU_B;
	wire [31:0] AO_E;
	wire [31:0] AO_M;
	wire [31:0] AO_W;
	
	//DM
	wire [31:0] DR_M;
	wire [31:0] DR_W;
	//controller
	wire [2:0] ALUCtrl;
	wire [2:0] RegDst;
	wire [2:0] ALUB_sel;
	wire RegWrite;
	wire MemRead;
	wire MemWrite;
	wire [2:0] MemtoReg;
	wire [2:0] ExtOp;
	wire [2:0] PC_sel;
	//conflict
	
	//NPC
	assign PC4 = PC+4;
	assign PC_beq = PC_D + 4 + {{14{IR_D[15]}},IR_D[15:0],2'b00};
	assign PC_j = {PC_D[31:28],IR_D[25:0],2'b00};
	assign PC_jr = RS_D;
	//GRF
	assign RA1 = IR_D[`rs];
	assign RA2 = IR_D[`rt];
	assign RS_D_in = RF_RD1;
	assign RT_D_in = RF_RD2;
	//CMP
	assign CMP_A = RS_D;
	assign CMP_B = RT_D; 
	//EXT
	assign imm16 = IR_D[`imm16];
	assign EXT_D = imm32;
	//ALU
	assign ALU_A = RS_E;
	//DM
	//conflict
	assign PC_En = ~stall;
	assign F_D_En = ~stall;
	assign D_E_Clr = stall;
	
	// F
	PC cjbPC(clk,reset,PC_En,next_pc,PC);
	IM cjbIM(PC,IR_F);
	F_D_Register cjbF_D(
		.clk(clk),
		.reset(reset),
		.En(F_D_En),
		.Instr(IR_F),
		.PC(PC),
		.temp_F(temp_F),
		.IR_D(IR_D),
		.PC_D(PC_D),
		.PC8_D(PC8_D),
		.temp_D(temp_D)
		);
	
	//D
	controller controller_D(.IR(IR_D),.ExtOp(ExtOp),.PC_sel(PC_sel));
	NPC cjbNPC(Equal,PC_sel,PC,PC4,PC_beq,PC_j,PC_jr,next_pc);
	CMP cjbCMP(CMP_A,CMP_B,Equal);
	GRF cjbGRF(clk,reset,RA1,RA2,WA,WD,RegWrite,PC_W,RF_RD1,RF_RD2);
	EXT cjbEXT(imm16,ExtOp,imm32);
	D_E_Register cjbD_E(.clk(clk),
							  .reset(reset|D_E_Clr),
							  .IR_D(IR_D),
							  .PC_D(PC_D),
							  .PC8_D(PC8_D),
							  .RF_RD1(RF_RD1),
							  .RF_RD2(RF_RD2),
							  .EXT_D(EXT_D),
							  .temp_D(temp_D),
							  .IR_E(IR_E),
							  .PC_E(PC_E),
							  .PC8_E(PC8_E),
							  .RS_E(RS_E_in),
							  .RT_E(RT_E_in),
							  .EXT_E(EXT_E),
							  .temp_E(temp_E)
							  );//RS_E_in, RT_E_in
	
	//E
	controller controller_E(.IR(IR_E),.ALUCtrl(ALUCtrl),.ALUB_sel(ALUB_sel));
	ALU cjbALU(ALU_A,ALU_B,ALUCtrl,AO_E);
	E_M_Register cjbE_M(
								.clk(clk),
								.reset(reset),
								.IR_E(IR_E),
								.PC_E(PC_E),
								.PC8_E(PC8_E),
								.RT_E(RT_E),
								.AO_E(AO_E),
								.temp_E(temp_E),
								.IR_M(IR_M),
								.PC_M(PC_M),
								.PC8_M(PC8_M),
								.AO_M(AO_M),
								.RT_M(RT_M_in),
								.temp_M(temp_M)
								); //RT_M_in
	
	//M 
	controller controller_M(.IR(IR_M),.MemRead(MemRead),.MemWrite(MemWrite));
	DM cjbDM(clk,reset,MemWrite,MemRead,AO_M,RT_M,PC_M,DR_M);
	M_W_Register cjbM_W(
								.clk(clk),
								.reset(reset),
								.IR_M(IR_M),
								.PC_M(PC_M),
								.PC8_M(PC8_M),
								.AO_M(AO_M),
								.DR_M(DR_M),
								.temp_M(temp_M),
								.IR_W(IR_W),
								.PC_W(PC_W),
								.PC8_W(PC8_W),
								.AO_W(AO_W),
								.DR_W(DR_W),
								.temp_W(temp_W)
								);
	//W 内部转发
	controller controller_W(.IR(IR_W),.RegDst(RegDst),.MemtoReg(MemtoReg),.RegWrite(RegWrite));
	//Mux
	MUX cjbMUX(IR_E,RT_E,EXT_E,ALUB_sel,IR_W,RegDst,MemtoReg,PC8_W,AO_W,DR_W,ALU_B,WA,WD);
	conflict cjbconflict(.lui_E(EXT_E),
								.PC8_E(PC8_E),
								.PC8_M(PC8_M),
								.AO_M(AO_M),
								.WD(WD),
								.IR_D(IR_D),
								.IR_E(IR_E),
								.IR_M(IR_M),
								.IR_W(IR_W),
								.RS_D_in(RS_D_in),
								.RT_D_in(RT_D_in),
								.RS_E_in(RS_E_in),
								.RT_E_in(RT_E_in),
								.RT_M_in(RT_M_in),
								.RS_D(RS_D),
								.RT_D(RT_D),
								.RS_E(RS_E),
								.RT_E(RT_E),
								.RT_M(RT_M),
								.stall(stall)
								);
endmodule
