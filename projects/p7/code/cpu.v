`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:30:04 12/15/2019 
// Design Name: 
// Module Name:    cpu 
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
module cpu(
    input clk,
    input reset,
	 input interrupt,
	 input [31:0] PrRD,
	 input [7:2]  HWInt,
	 output PrWE,
	 output [31:0] PrAddr,//PrAddr
	 output [31:0] PrWD, //PrWD
	 output [31:0] addr
    );
	assign addr = PC_M;
	assign PrWE = MemWrite&&(~IntReg)&&((AO_M>=32'h0000_7F00&&AO_M<=32'h0000_7F0B)||(AO_M>=32'h0000_7F10&&AO_M<=32'h0000_7F1B));
	assign PrAddr = AO_M;
	assign PrWD = RT_M;
	 //ï¿½ï¿½ï¿½ï¿½
	 wire temp_D;
	 wire temp_F;
	 wire temp_E;
	 wire temp_M;
	 wire temp_W;
	//×ªï¿½ï¿½
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
	//4ï¿½ï¿½Í£
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
	wire [31:0] IR_B1;
	wire [31:0] IR_B2;
	wire [31:0] IR_B3;
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
	wire blez;
	wire bgez;
	wire bgtz;
	wire bltz;
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
	wire [4:0] sa;
	wire start;
	wire busy;
	wire [31:0] hi;
	wire [31:0] lo;
	
	//DM
	wire [31:0] DR_M;
	wire [31:0] DR_W;
	wire [2:0] load_op;
	wire [31:0] Dout;
	//controller
	wire [4:0] ALUCtrl;
	wire [4:0] RegDst;
	wire [4:0] ALUB_sel;
	wire RegWrite;
	wire MemRead;
	wire MemWrite;
	wire [4:0] MemtoReg;
	wire [4:0] ExtOp;
	wire [4:0] PC_sel;
	wire [2:0] MD_OP;
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
	assign sa = IR_E[`shamt];
	assign ALU_A = RS_E;
	//DM
	//conflict
	assign PC_En = ~stall | IntReg;
	assign F_D_En = ~stall;
	assign D_E_Clr = stall;
	
	///////////////////////////p7/////////////////
	wire [31:0] EPC;
	wire IntReg;
	wire IntEn;
	wire [4:0] ExcCode_D_in;
	wire [4:0] ExcCode_E_in;
	wire [4:0] ExcCode_M_in;
	wire [4:0] ExcCode_D;
	wire [4:0] ExcCode_E;
	wire [4:0] ExcCode_M;
	wire [4:0] ExcCode_cp0;
	wire overflow; //alu
	wire overflow_DM;
	wire overflow_DM_M;
	wire returnHILO;
	wire stopMD;
	wire MD_E;
	wire MD_M;
	wire MT_M; // alu
	wire cp0_WE;
	wire [31:0] cp0_Din;
	wire Pr_WE;
	wire [31:0] cp0_M;
	wire [31:0] cp0_W;
	wire [31:0] Dout2;
	wire [31:0] cp0_PC;
	wire delay;
	/////////////////////////////////////////////p7_End////////////////////////////////////////
	
	
	// F
	PC cjbPC(clk,reset,PC_En,next_pc,PC);
	assign ExcCode_D_in = ((PC[1:0] == 2'b0 && 32'h0000_3000 <= PC  && PC <= 32'h0000_4ffc) ? 5'b0 : `AdEL);
	IM cjbIM(PC,IR_F);
	wire eret_D;
	assign eret_D = (IR_D == 32'h4200_0018);
	assign temp_F = ((!IntReg)&&(!stall) && (IR_D[`op]==`beq ||IR_D[`op]==`bne || IR_D[`op]==`blez || IR_D[`op]==`bgez_bltz || IR_D[`op]==`bgtz ||
                    IR_D[`op]==`j || IR_D[`op]==`jal || (IR_D[`func]==`jalr && IR_D[`op]==`R) || (IR_D[`func]==`jr && IR_D[`op]==`R)) ); /*||(
						  (IR_D==0 && IR_F!=0)&&(!IntReg) && (IR_E[`op]==`beq ||IR_E[`op]==`bne || IR_E[`op]==`blez || IR_E[`op]==`bgez_bltz || IR_E[`op]==`bgtz ||
                    IR_E[`op]==`j || IR_E[`op]==`jal || (IR_E[`func]==`jalr && IR_E[`op]==`R) || (IR_E[`func]==`jr && IR_E[`op]==`R)) )|| (
						  (IR_E==0 && IR_D==0 && IR_F!=0)&&(!IntReg) && (IR_M[`op]==`beq ||IR_M[`op]==`bne || IR_M[`op]==`blez || IR_M[`op]==`bgez_bltz || IR_M[`op]==`bgtz ||
                    IR_M[`op]==`j || IR_M[`op]==`jal || (IR_M[`func]==`jalr && IR_M[`op]==`R) || (IR_M[`func]==`jr && IR_M[`op]==`R)))|| (
						  (IR_M==0&&IR_E==0 && IR_D==0 && IR_F!=0)&&(!IntReg) && (IR_W[`op]==`beq ||IR_W[`op]==`bne || IR_W[`op]==`blez || IR_W[`op]==`bgez_bltz || IR_W[`op]==`bgtz ||
                    IR_W[`op]==`j || IR_W[`op]==`jal || (IR_W[`func]==`jalr && IR_W[`op]==`R) || (IR_W[`func]==`jr && IR_W[`op]==`R)));*/
						  
	F_D_Register cjbF_D(
		.clk(clk),
		.stall(stall),
		.eret_D(eret_D),
		.reset(reset),
		.ExcCode_D_in(ExcCode_D_in),
		.En(F_D_En),
		.next_pc(next_pc),
		.IntReg(IntReg),
		.Instr(IR_F),
		.PC(PC),
		.temp_F(temp_F),
		.IR_D(IR_D),
		.PC_D(PC_D),
		.PC8_D(PC8_D),
		.temp_D(temp_D),
		.ExcCode_D(ExcCode_D)
		);
	
	//D
	
	wire legal_D;
	LEGAL cjblegal(IR_D,legal_D);
	controller controller_D(.IR(IR_D),.ExtOp(ExtOp),.PC_sel(PC_sel),.legal(legal));
	NPC cjbNPC(
				  .IntReg(IntReg),
				  .Equal(Equal),
				  .blez(blez),
				  .bgez(bgez),
				  .bgtz(bgtz),
				  .bltz(bltz),
				  .PC_sel(PC_sel),
				  .EPC(EPC),
				  .PC(PC),
				  .PC4(PC4),
				  .PC_beq(PC_beq),
				  .PC_j(PC_j),
				  .PC_jr(PC_jr),
				  .next_pc(next_pc));
	CMP cjbCMP(CMP_A,CMP_B,Equal,blez,bgez,bgtz,bltz);
	GRF cjbGRF(IR_W,IR_B1,IR_B2,IR_B3,clk,reset,RA1,RA2,WA,WD,RegWrite,PC_W,RF_RD1,RF_RD2);
	EXT cjbEXT(imm16,ExtOp,imm32);
	D_E_Register cjbD_E(.clk(clk),
							  .IntReg(IntReg),
							  .reset(reset),
							  .D_E_Clr(D_E_Clr),
							  .IR_D(IR_D),
							  .PC_D(PC_D),
							  .PC8_D(PC8_D),
							  .RF_RD1(RF_RD1),
							  .RF_RD2(RF_RD2),
							  .EXT_D(EXT_D),
							  .ExcCode_E_in(ExcCode_E_in),
							  .temp_D(temp_D),
							  .IR_E(IR_E),
							  .PC_E(PC_E),
							  .PC8_E(PC8_E),
							  .RS_E(RS_E_in),
							  .RT_E(RT_E_in),
							  .EXT_E(EXT_E),
							  .temp_E(temp_E),
							  .ExcCode_E(ExcCode_E)
							  );//RS_E_in, RT_E_in
							  
	 assign ExcCode_E_in = (!legal && ExcCode_D == 5'b0) ? `RI : ExcCode_D;
	
	//E///////////////////////////////////////////////////////////////////////////////////////////////////
	controller controller_E(.IR(IR_E),.ALUCtrl(ALUCtrl),.ALUB_sel(ALUB_sel),.MD_OP(MD_OP),.start(start));
	ALU cjbALU(IR_E,sa,ALU_A,ALU_B,ALUCtrl,AO_E,overflow,overflow_DM);
	MULT_DIV cjbMULT_DIV(clk,reset,start,stopMD,returnHILO,ALU_A,ALU_B,MD_OP,busy,hi,lo);
	E_M_Register cjbE_M(
								.clk(clk),
								.reset(reset),
								.ExcCode_M_in(ExcCode_M_in),
								.IntReg(IntReg),
								.IR_E(IR_E),
								.overflow_DM(overflow_DM),
								.PC_E(PC_E),
								.PC8_E(PC8_E),
								.RT_E(RT_E),
								.AO_E(AO_E),
								.hi(hi),
								.lo(lo),
								.temp_E(temp_E),
								.IR_M(IR_M),
								.PC_M(PC_M),
								.PC8_M(PC8_M),
								.AO_M(AO_M),
								.overflow_DM_M(overflow_DM_M),
								.ExcCode_M(ExcCode_M),
								.RT_M(RT_M_in),
								.temp_M(temp_M)
								); //RT_M_in
	assign MD_E = (IR_E[`op]==`R &&(IR_E[`func]==`mult ||IR_E[`func]==`multu||IR_E[`func]==`div||IR_E[`func]==`divu));
	assign MD_M = (IR_M[`op]==`R &&(IR_M[`func]==`mult ||IR_M[`func]==`multu||IR_M[`func]==`div||IR_M[`func]==`divu));
	assign MT_M = (IR_E[`op]==`R &&(IR_E[`func]==`mthi ||IR_E[`func]==`mtlo));
	assign ExcCode_M_in = (overflow&& ExcCode_E == 5'b0) ? `OV : ExcCode_E;
	assign stopMD = IntReg && (MD_E||MD_M);
	assign returnHILO = IntReg && MT_M;
	//M //////////////////////////////////////M//////////////////////////////////////////////////////
	wire DM_Write_En;
	assign DM_Write_En = (AO_M >= 0 && AO_M <= 32'h0000_2FFF);
	controller controller_M(.IR(IR_M),.MemRead(MemRead),.MemWrite(MemWrite),.load_op(load_op),.IntEn(IntEn));
	DM cjbDM(.IR_M(IR_M),
				.clk(clk),
				.reset(reset),
				.DM_Write_En(DM_Write_En),
				.MemWrite(MemWrite&~IntReg),
				.MemRead(MemRead),
				.MemAddr(AO_M),
				.MemData(RT_M),
				.PC(PC_M),
				.ReadData(DR_M));
	DMEXT cjbDMEXT(AO_M[1:0],load_op,DR_M,Dout);
	//p7///////////////

	assign Dout2 = (AO_M >= 0 && AO_M <= 32'h2ffc) ? Dout : PrRD; //ï¿½Ð¶Ïµï¿½Ö·
	assign cp0_WE = (IR_M[`op]==`cp0 && IR_M[25:21] ==`mt)&~IntReg; //ï¿½Ð¶ï¿½ï¿½Ç²ï¿½ï¿½ï¿½mtc0
	assign cp0_Din = RT_M; ///DMï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½														
	`define addr_DEV0 (32'h7f00 <= AO_M && AO_M <= 32'h7f0b)
   `define addr_DEV1 (32'h7f10 <= AO_M && AO_M <= 32'h7f1b)
	assign ExcCode_cp0 =  (ExcCode_M == 5'b0) && (
											(MemWrite &&~IntReg && overflow_DM_M)|| //·Ç·¨µØÖ·
                                (IR_M[`op]==`sh && AO_M[0]) || (IR_M[`op]==`sw && AO_M[1:0] != 2'b0) ||  //µØÖ·Î´¶ÔÆä
                                ((IR_M[`op]==`sh || IR_M[`op]==`sb) && (`addr_DEV0 || `addr_DEV1)) ||	  //´ætimerµÄÖµ
                                 (MemWrite && ( !(AO_M >= 0 && AO_M <= 32'h0000_2FFF) && !`addr_DEV0 && !`addr_DEV1) ) ||
											(MemWrite && AO_M[3:2]==2'b10 &&( (AO_M == 32'h00007f00 || AO_M == 32'h00007f04 || AO_M == 32'h00007f08 || AO_M == 32'h00007f0b||AO_M == 32'h00007f10 || AO_M == 32'h00007f14 || AO_M == 32'h00007f18 || AO_M == 32'h00007f1b)))//´æÊýµØÖ·³¬·¶Î§
                            ) ? `AdES: ///ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ö·ï¿½ï¿½ï¿½ï¿½
                            (ExcCode_M == 5'b0) && (
											(MemRead && overflow_DM_M)|| //·Ç·¨È¡Ö¸
                                ((IR_M[`op]==`lh || IR_M[`op]==`lhu) && AO_M[0]) || (IR_M[`op]==`lw && AO_M[1:0] != 2'b0) || //È¡Öµ¶ÔÆä
                                ((IR_M[`op]==`lh || IR_M[`op]==`lhu || IR_M[`op]==`lb || IR_M[`op]==`lbu) && (`addr_DEV0 || `addr_DEV1)) || //·Ç·¨¶ÁÈë
										  ((IR_M[`op]==`lw || IR_M[`op]==`lh || IR_M[`op]==`lhu || IR_M[`op]==`lb || IR_M[`op]==`lbu) && !((AO_M >= 0 && AO_M <= 32'h0000_2FFF) || `addr_DEV0 || `addr_DEV1))//³¬·¶Î§
                            ) ? `AdEL:
                                ExcCode_M; 
	//////////////////////////////////////cp0///////////////////////////////////
   assign cp0_PC = (PC_M!=0)?PC_M:
						 (PC_E!=0)?PC_E:
						 (PC_D!=0)?PC_D:
										 PC;
										 
	assign delay = (PC_M!=0&&temp_M)?1:
						(PC_M!=0&&~temp_M)?0:
						 (PC_M!=0&&temp_E)?1:
						(PC_M!=0&&~temp_E)?0:
						(PC_M!=0&&temp_D)?1:
						(PC_M!=0&&~temp_D)?0:
												0;									 
	CP0 cjbcp0(
				  .clk(clk),
				  .reset(reset),
				  .interrupt(interrupt),
				  .IR_M(IR_M),
				  .temp_M(temp_M),
				  .A1(IR_M[`rd]),
				  .A2(IR_M[`rd]),
				  .IR_W(IR_W),
				  .Din(cp0_Din),
				  .PC(cp0_PC),
				  .ExcCode( ExcCode_cp0), //ï¿½è±¸ï¿½Ç·ï¿½ï¿½Ð¶ï¿½
				  .HWInt(HWInt),
				  .WE(cp0_WE),
				  .EXLSet(IntReg),
				  .EXLClr(IntEn),
				  .IntReg(IntReg),
				  .EPC(EPC),
				  .Dout(cp0_M)
					);									  
	M_W_Register cjbM_W(
								.cp0_M(cp0_M),
								.clk(clk),
								.reset(reset),
								.IntReg(IntReg),
								.IR_M(IR_M),
								.PC_M(PC_M),
								.PC8_M(PC8_M),
								.AO_M(AO_M),
								.DR_M(Dout2), //Ä§ï¿½ï¿½DMï¿½ï¿½ï¿½ï¿½
								.temp_M(temp_M),
								.IR_W(IR_W),
								.PC_W(PC_W),
								.PC8_W(PC8_W),
								.AO_W(AO_W),
								.DR_W(DR_W),
								.cp0_W(cp0_W),
								.temp_W(temp_W)
								);
								
								
	//W ï¿½Ú²ï¿½×ªï¿½ï¿½/////////////////////////////////////////////////////////////////////////////////
	controller controller_W(.IR(IR_W),.RegDst(RegDst),.MemtoReg(MemtoReg),.RegWrite(RegWrite));
	
	//Mux/////////////////////////////////////////////////////////////////////////////////////
	MUX cjbMUX(IR_E,RT_E,EXT_E,ALUB_sel,IR_W,RegDst,MemtoReg,PC8_W,AO_W,DR_W,cp0_W,ALU_B,WA,WD);
	conflict cjbconflict(.lui_E(EXT_E),
								.IntReg(IntReg),
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
								.start(start),
								.busy(busy),
								.RS_D(RS_D),
								.RT_D(RT_D),
								.RS_E(RS_E),
								.RT_E(RT_E),
								.RT_M(RT_M),
								.stall(stall)
								);
	beifen mybeifen(clk,IR_W,IR_B1,IR_B2,IR_B3);
endmodule
