`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:33:48 11/20/2019 
// Design Name: 
// Module Name:    conflict 
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
module conflict(
	 input [31:0] lui_E,
	 input [31:0] PC8_E,
	 input [31:0] PC8_M,
	 input [31:0] AO_M,
	 input [31:0] WD,
	 input [31:0] IR_D,
	 input [31:0] IR_E,
	 input [31:0] IR_M,
	 input [31:0] IR_W,
	 input [31:0] RS_D_in,
	 input [31:0] RT_D_in,
	 input [31:0] RS_E_in,
	 input [31:0] RT_E_in,
	 input [31:0] RT_M_in,
	 input start,
	 input IntReg,
	 input busy,
	 output [31:0] RS_D, 
	 output [31:0] RT_D,
	 output [31:0] RS_E,
	 output [31:0] RT_E,
	 output [31:0] RT_M,
	 output stall
    );
	 
	`define cal_r_D (IR_D[`op]==`R && IR_D[`func]!=`jalr && IR_D[`func]!=`jr && IR_D!=0)
	`define cal_i_D (IR_D[`op]==`lui||IR_D[`op]==`ori||IR_D[`op]==`addi || IR_D[`op]==`addiu ||IR_D[`op]==`andi || IR_D[`op]==`xori || IR_D[`op]==`slti || IR_D[`op]==`sltiu)
	`define load_D (IR_D[`op]==`lw || IR_D[`op]==`lb || IR_D[`op]==`lbu || IR_D[`op]==`lh || IR_D[`op]==`lhu)
	`define store_D (IR_D[`op]==`sw ||IR_D[`op]==`sb || IR_D[`op]==`sh)
	`define beq_D (IR_D[`op]==`beq)
	`define jr_D (IR_D[`op]==`R&&IR_D[`func]==`jr)
	`define jalr_D (IR_D[`op]==`R&&IR_D[`func]==`jalr)
	`define bne_D (IR_D[`op]==`bne)
	`define blez_D (IR_D[`op]==`blez)
	`define bgez_bltz_D (IR_D[`op]==`bgez_bltz)
	`define bgtz_D (IR_D[`op]==`bgtz)
	`define mtc0_D (IR_D[`op]==`cp0&&IR_D[25:21] == 5'b00100 && IR_D[10:3] == 8'b0)
	`define mfc0_D (IR_D[`op]==`cp0&&IR_D[25:21]==5'b00000 && IR_D[10:3] == 8'b0)

	wire En_Write_E ;
	wire En_Write_M;
	wire 	En_Write_W;
	wire [4:0]WriteReg_E, WriteReg_M, WriteReg_W;
	wire [31:0] WriteData_E;
   wire [31:0] WriteData_M;
	wire [31:0]	WriteData_W;
	//Tuse
	reg [2:0]Tuse_RS;
	reg [2:0]Tuse_RT;
	//Tnew
	wire mfc0_E,mfc0_M;
	assign mfc0_E = IR_E[`op]==`cp0 && IR_E[25:21]==5'b00000 && IR_E[10:3]==8'b0;
	assign mfc0_M = IR_M[`op]==`cp0 && IR_M[25:21]==5'b00000 && IR_M[10:3]==8'b0;
	wire [1:0]Tnew_E;
	wire [1:0]Tnew_M;
	wire [1:0]Tnew_W;
	//stall
	wire stall_RS_E;//RS ,Eï¿½×¶ï¿½,Tuse = 0
	wire stall_RS_M;//RS Mï¿½×¶ï¿½ Tuse = 0;
	wire stall_RT_E;//RT Eï¿½×¶ï¿½ Tuse = 0;
	wire stall_RT_M;//RT Tuse= 2Ê±ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½×ªï¿½ï¿½
	wire stall_md;
	wire md_D;
	
	wire [31:0]RS_EE;
	wire [31:0]RT_EE;
	//Êµï¿½ï¿½ï¿½ï¿½
	instr_decoder decoder_E(lui_E,PC8_E,PC8_M,AO_M,WD,2'b00,IR_E,WriteReg_E,En_Write_E,WriteData_E,Tnew_E); //0,1,2ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Tnew
	instr_decoder decoder_M(lui_E,PC8_E,PC8_M,AO_M,WD,2'b01,IR_M,WriteReg_M,En_Write_M,WriteData_M,Tnew_M);
	instr_decoder decoder_W(lui_E,PC8_E,PC8_M,AO_M,WD,2'b10,IR_W,WriteReg_W,En_Write_W,WriteData_W,Tnew_W);
	

	//Tuse
	//Tuse_RS
	always @(*)begin
		if(`beq_D | `jr_D| `jalr_D |`bne_D|`blez_D |`bgtz_D |`bgez_bltz_D)begin	
			Tuse_RS = 0;
		end
		else if(`cal_i_D | `cal_r_D | `store_D | `load_D)begin
			Tuse_RS = 1;
		end
		else begin
			Tuse_RS = 4;
		end
	end
	//Tuse_RT
	always @(*)begin
		if( `beq_D | `bne_D)begin
			Tuse_RT = 0;
		end
		else if(`cal_r_D)begin
			Tuse_RT = 1;
		end
		else if(`store_D | `mtc0_D)begin
			Tuse_RT = 2;
		end
		else begin
			Tuse_RT = 4;
		end 
	end
		
	/////////////////p7////////////////////
	wire stall_eret;
	wire eret_D;
	wire mtc0_E;
	wire mtc0_M;
	assign eret_D = IR_D[`op]==`cp0&&IR_D[`func]==`eret&&IR_D[25:6]==20'h80000;
	assign mtc0_E = IR_E[`op]==`cp0 && IR_E[25:21]==5'b00100 && IR_E[10:0]==11'b0;
	assign mtc0_M = IR_M[`op]==`cp0 && IR_M[25:21]==5'b00100 && IR_M[10:0]==11'b0;
	assign stall_eret = eret_D &&((mtc0_E && IR_E[`rd]==5'd14)||(mtc0_M && IR_M[`rd]==5'd14));
	/////////////////p7end////////////////////////////////////////////////////
	assign md_D = IR_D[`op]==6'b0&&(IR_D[`func]==`mult || IR_D[`func]==`multu || IR_D[`func]==`div || IR_D[`func]==`divu || IR_D[`func]==`mflo || IR_D[`func]==`mfhi || IR_D[`func]==`mthi || IR_D[`func]==`mtlo);
	//stall 
	assign stall_RS_E = ((Tuse_RS < Tnew_E) && (IR_D[`rs] == WriteReg_E) && En_Write_E && WriteReg_E!=0)?1:0; //E½×¶ÎÓëRSµÄ³åÍ»
	assign stall_RS_M = ((Tuse_RS < Tnew_M) && (IR_D[`rs] == WriteReg_M) && En_Write_M && WriteReg_M!=0)?1:0;//M½×¶ÎÓëRSµÄ³åÍ»
	assign stall_RT_E = ((Tuse_RT < Tnew_E) && (IR_D[`rt] == WriteReg_E) && En_Write_E && WriteReg_E!=0)?1:0;//E-¡·RT
	assign stall_RT_M = ((Tuse_RT < Tnew_M) && (IR_D[`rt] == WriteReg_M) && En_Write_M && WriteReg_M!=0)?1:0;//M-¡·RT
	
	assign stall_md = (start||busy) && md_D;
	
	assign stall = !IntReg && (stall_RS_E | stall_RS_M | stall_RT_E | stall_RT_M | stall_md | stall_eret | mfc0_E | mfc0_M)? 1: 0; //ÔÝÍ£²»ÇåD
	
//	assign stall = stall_RS_E | stall_RS_M | stall_RT_E | stall_RT_M;
	//assign stall = 1;
	
			//zhuanfa  // Ö±½Ó×ªÈëËùÓÐÊý¾Ý
	assign RS_D = (En_Write_E && WriteReg_E!=0 && WriteReg_E==IR_D[`rs] && Tnew_E==0)? WriteData_E:
					  (En_Write_M && WriteReg_M!=0 && WriteReg_M==IR_D[`rs] && Tnew_M==0)? WriteData_M:
																													RS_D_in; //ï¿½Ú²ï¿½×ªï¿½ï¿½
								
	assign RT_D = (En_Write_E && WriteReg_E!=0 && WriteReg_E==IR_D[`rt] && Tnew_E==0)? WriteData_E:
					  (En_Write_M && WriteReg_M!=0 && WriteReg_M==IR_D[`rt] && Tnew_M==0)? WriteData_M:
																													RT_D_in; //ï¿½Ú²ï¿½×ªï¿½ï¿½

	assign RS_E = (En_Write_M && WriteReg_M!=0 && WriteReg_M==IR_E[`rs] && Tnew_M==0)? WriteData_M:
					  (En_Write_W && WriteReg_W!=0 && WriteReg_W==IR_E[`rs] && Tnew_W==0)? WriteData_W:
																													RS_E_in;
	
	assign RT_E = (En_Write_M && WriteReg_M!=0 && WriteReg_M==IR_E[`rt] && Tnew_M==0)? WriteData_M:
					  (En_Write_W && WriteReg_W!=0 && WriteReg_W==IR_E[`rt] && Tnew_W==0)? WriteData_W:
																													RT_E_in;
	
	assign RT_M = (En_Write_W && WriteReg_W!=0 && WriteReg_W==IR_M[`rt] && Tnew_W==0)? WriteData_W:
																													RT_M_in;
								

endmodule
