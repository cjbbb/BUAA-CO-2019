`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////



// RegDst : 0:rt/ 1:rd/ 2:31

// ALUB_sel: 0:RT_E / 1:EXT_E

//MemtoReg: WD =  0: AO_W/  1: DM/  2:PC8_W；

// ALUCtrl: + : 00/ -: 01/ | : 10/ &: 11/ 

//PC_sel: 0: PC4/ 1: PC_beq/  2: PC_jr/jalr / 3: PC_jal/j; 

//ExtOp : 0: signed/ 1: unsigned/ 2:lui
`include"define.v"
`define R_rt 0
`define R_rd 1
`define R_31 2

`define AO 5'b00000
`define DM 1 
`define PC8 2

`define add 0
`define sub 1
`define or 2
`define and 3
`define xor 4
`define nor 5
`define slt 6
`define sltu 7
`define sll 8
`define srl 9
`define srlv 10
`define sllv 11
`define sra 12
`define srav 13

`define PC4 0
`define PC_beq  1
`define PC_jr   2
`define PC_j    3
`define PC_bne  4
`define PC_blez 5
`define PC_bgez 6
`define PC_bgtz 7
`define PC_bltz 8
`define PC_eret  9

`define lw_DM 3'b100
`define lb_DM 3'b000
`define lbu_DM 3'b001
`define lh_DM 3'b010
`define lhu_DM 3'b011

`define signed 0
`define unsigned 1
`define LUI 2
`define mult_op 0
`define multu_op 1
`define div_op 2
`define divu_op 3
`define mthi_op 4
`define mtlo_op 5
////////////p7///////////
//所有控制信号均为2位SS
module controller(
	 input [31:0] IR,
    output reg [4:0] ALUCtrl, //alu功能
    output reg [4:0] RegDst,	//WA地址
 //   output reg ALUA_sel,  	//ALUA_sel 信号
	 output reg [4:0]ALUB_sel, //ALUB选择
    output reg RegWrite,		//Reg写入信号
    output reg MemRead,			//MemRead读取信号
    output reg MemWrite,
    output reg [4:0] MemtoReg,
    output reg [4:0]ExtOp,
    output reg [4:0]PC_sel,
	 output reg [2:0]load_op,
	 output reg [2:0]MD_OP,
	 output reg start,
	 output reg legal,
	 output IntEn
    );
// RegDst : 0:rt/ 1:rd/ 2:31
// ALUB_sel: 0:RT_E / 1:EXT_E
//MemtoReg: WD =  0: AO_W/  1: DM/  2:PC8_W；
// ALUCtrl: + : 00/ -: 01/ | : 10/ &: 11/ 
//PC_sel: 0: PC4/ 1: PC_beq/  2: PC_jr/jalr / 3: PC_jal/j; 
//ExtOp : 0: signed/ 1: unsigned/ 2:lui
	assign IntEn = (IR[`op]==`cp0 && IR[`func]==`eret);
	always @(*)begin
		ALUCtrl = `and; //初始化默认加法
		RegDst  = `R_rt; //默认 rt
		ALUB_sel = 0; // 默认ALU_Rt
		RegWrite = 0; //默认不可写入
		MemRead = 0;  //默认不可读
		MemWrite = 0; //默认不可写
		MemtoReg = `AO; //默认 AO 的值
		ExtOp = `signed; // 默认 符号扩展
		PC_sel = `PC4;// 默认PC4
		load_op = `lw_DM; //默认Lw
		start = 0;
		MD_OP = `mult_op; 
		legal = 1;//默认合法
		case(IR[`op])
			
			`R: begin
				load_op = `lw_DM;

				case(IR[`func])
					
					`AND:begin
						ALUCtrl = `and; //或
						RegDst  = `R_rd; //rt
						ALUB_sel = 0; //RT
						RegWrite = 1;
						MemRead = 0;
						MemWrite = 0;
						MemtoReg = `AO; //DM
						ExtOp = `signed;
						PC_sel = `PC4;//4
					end
					
					`ADD:begin
						ALUCtrl = `add;
						RegDst  = `R_rd;
						ALUB_sel = 0;
						RegWrite = 1;
						MemRead = 0;
						MemWrite = 0;
						MemtoReg = `AO; //AO_W
						ExtOp = `signed;
						PC_sel = `PC4;
					end
					
					`addu:begin
						ALUCtrl = `add;
						RegDst  = `R_rd;
						ALUB_sel = 0;
						RegWrite = 1;
						MemRead = 0;
						MemWrite = 0;
						MemtoReg = `AO; //AO_W
						ExtOp = `signed;
						PC_sel = `PC4;
					end
					
					`divu:begin
						ALUCtrl  = `and; //或
						RegDst   = `R_rd; //rt
						ALUB_sel = 0; //RT
						RegWrite = 0;
						MemRead  = 0;
						MemWrite = 0;
						MemtoReg = `AO; //DM
						ExtOp    = `signed;
						PC_sel   = `PC4;//4
						MD_OP = `divu_op;
						start 	= 1;
					end
					
					`div:begin
						ALUCtrl  = `and; //或
						RegDst   = `R_rd; //rt
						ALUB_sel = 0; //RT
						RegWrite = 0;
						MemRead  = 0;
						MemWrite = 0;
						MemtoReg = `AO; //DM
						ExtOp    = `signed;
						PC_sel   = `PC4;//4
						MD_OP = `div_op;
						start 	= 1;
					end
					
					`mult:begin
						ALUCtrl  = `and; //或
						RegDst   = `R_rd; //rt
						ALUB_sel = 0; //RT
						RegWrite = 0;
						MemRead  = 0;
						MemWrite = 0;
						MemtoReg = `AO; //DM
						ExtOp    = `signed;
						PC_sel   = `PC4;//4
						MD_OP = `mult_op;
						start 	= 1;
					end
					
					`multu:begin
						ALUCtrl  = `and; //或
						RegDst   = `R_rd; //rt
						ALUB_sel = 0; //RT
						RegWrite = 0;
						MemRead  = 0;
						MemWrite = 0;
						MemtoReg = `AO; //DM
						ExtOp    = `signed;
						PC_sel   = `PC4;//4
						MD_OP = `multu_op;
						start 	= 1;
					end
					
					`mtlo:begin
						ALUCtrl  = `and; //或
						RegDst   = `R_rd; //rt
						ALUB_sel = 0; //RT
						RegWrite = 0;
						MemRead  = 0;
						MemWrite = 0;
						MemtoReg = `AO; //DM
						ExtOp    = `signed;
						PC_sel   = `PC4;//4
						MD_OP = `mtlo_op;
						start 	= 0;
					end
					
					`mthi:begin
						ALUCtrl  = `and; //或
						RegDst   = `R_rd; //rt
						ALUB_sel = 0; //RT
						RegWrite = 0;
						MemRead  = 0;
						MemWrite = 0;
						MemtoReg = `AO; //DM
						ExtOp    = `signed;
						PC_sel   = `PC4;//4
						MD_OP = `mthi_op;
						start 	= 0;
					end
					
					`mflo:begin
						ALUCtrl  = `and; //或
						RegDst   = `R_rd; //rt
						ALUB_sel = 0; //RT
						RegWrite = 1;
						MemRead  = 0;
						MemWrite = 0;
						MemtoReg = `AO; //DM
						ExtOp    = `signed;
						PC_sel   = `PC4;//4
						start 	= 0;
					end
					
					`mfhi:begin
						ALUCtrl  = `and; //或
						RegDst   = `R_rd; //rt
						ALUB_sel = 0; //RT
						RegWrite = 1;
						MemRead  = 0;
						MemWrite = 0;
						MemtoReg = `AO; //DM
						ExtOp    = `signed;
						PC_sel   = `PC4;//4
						start 	= 0;
					end										
					
					`OR:begin
						ALUCtrl = `or; //或
						RegDst  = `R_rd; //rt
						ALUB_sel = 0; //RT
						RegWrite = 1;
						MemRead = 0;
						MemWrite = 0;
						MemtoReg = `AO; //DM
						ExtOp = `signed;
						PC_sel = `PC4;//4
					end
					
					`SLL:begin
						if(IR[`rd]!=0)begin
							ALUCtrl = `sll; //或
							RegDst  = `R_rd; //
							ALUB_sel = 0; //RT
							RegWrite = 1;
							MemRead = 0;
							MemWrite = 0;
							MemtoReg = `AO; //DM
							ExtOp = `signed;
							PC_sel = `PC4;//4
						end
					end	
					
					`SRA:begin
						ALUCtrl = `sra; //或
						RegDst  = `R_rd; //
						ALUB_sel = 0; //RT
						RegWrite = 1;
						MemRead = 0;
						MemWrite = 0;
						MemtoReg = `AO; //DM
						ExtOp = `signed;
						PC_sel = `PC4;//4
					end
					
					`SRAV:begin
						ALUCtrl = `srav; //或
						RegDst  = `R_rd; //
						ALUB_sel = 0; //RT
						RegWrite = 1;
						MemRead = 0;
						MemWrite = 0;
						MemtoReg = `AO; //DM
						ExtOp = `signed;
						PC_sel = `PC4;//4
					end
					
					`SRL:begin
						ALUCtrl = `srl; //或
						RegDst  = `R_rd; //
						ALUB_sel = 0; //RT
						RegWrite = 1;
						MemRead = 0;
						MemWrite = 0;
						MemtoReg = `AO; //DM
						ExtOp = `signed;
						PC_sel = `PC4;//4
					end
					
					`SRLV:begin
						ALUCtrl = `srlv; //或
						RegDst  = `R_rd; //
						ALUB_sel = 0; //RT
						RegWrite = 1;
						MemRead = 0;
						MemWrite = 0;
						MemtoReg = `AO; //DM
						ExtOp = `signed;
						PC_sel = `PC4;//4
					end
					
					`SLLV:begin
						ALUCtrl = `sllv; //或
						RegDst  = `R_rd; //
						ALUB_sel = 0; //RT
						RegWrite = 1;
						MemRead = 0;
						MemWrite = 0;
						MemtoReg = `AO; //DM
						ExtOp = `signed;
						PC_sel = `PC4;//4
					end
					
					`SLT:begin
						ALUCtrl = `slt; //或
						RegDst  = `R_rd; //rt
						ALUB_sel = 0; //RT
						RegWrite = 1;
						MemRead = 0;
						MemWrite = 0;
						MemtoReg = `AO; //DM
						ExtOp = `signed;
						PC_sel = `PC4;//4
					end
					
					`SLTU:begin
						ALUCtrl = `sltu; //或
						RegDst  = `R_rd; //rt
						ALUB_sel = 0; //RT
						RegWrite = 1;
						MemRead = 0;
						MemWrite = 0;
						MemtoReg = `AO; //DM
						ExtOp = `signed;
						PC_sel = `PC4;//4
					end
					
					`NOR:begin
						ALUCtrl = `nor; //或
						RegDst  = `R_rd; //rt
						ALUB_sel = 0; //RT
						RegWrite = 1;
						MemRead = 0;
						MemWrite = 0;
						MemtoReg = `AO; //DM
						ExtOp = `signed;
						PC_sel = `PC4;//4
					end
					
					`XOR:begin
						ALUCtrl = `xor; //或
						RegDst  = `R_rd; //rt
						ALUB_sel = 0; //RT
						RegWrite = 1;
						MemRead = 0;
						MemWrite = 0;
						MemtoReg = `AO; //DM
						ExtOp = `signed;
						PC_sel = `PC4;//4
					end
					
					
					`subu:begin
						ALUCtrl = `sub;
						RegDst  = `R_rd;
						ALUB_sel = 0;
						RegWrite = 1;
						MemRead = 0;
						MemWrite = 0;
						MemtoReg = `AO; //AO_W
						ExtOp = `signed;
						PC_sel = `PC4;//4
					end
					
					`SUB: begin
						ALUCtrl = `sub;
						RegDst  = `R_rd;
						ALUB_sel = 0;
						RegWrite = 1;
						MemRead = 0;
						MemWrite = 0;
						MemtoReg = `AO; //AO_W
						ExtOp = `signed;
						PC_sel = `PC4;//4
					end
					
					`jalr:begin
						ALUCtrl = `add;
						RegDst  = `R_rd;//rd
						ALUB_sel = 0;
						RegWrite = 1;
						MemRead = 0;
						MemWrite = 0;
						MemtoReg = `PC8; //pc8
						ExtOp = `signed;
						PC_sel = `PC_jr;// jalr
					end
					
					`jr:begin
						ALUCtrl = `add;
						RegDst  = `R_31;
						ALUB_sel = 0;
						RegWrite = 0;
						MemRead = 0;
						MemWrite = 0;
						MemtoReg = `AO; //AO_W
						ExtOp = `signed;
						PC_sel = `PC_jr;// jalr
					end
					
					default:begin //nop
					if(IR[25:0]==0)begin
						legal = 1;
						ALUCtrl = 0;
						RegDst  = 0;
						ALUB_sel = 0;
						RegWrite = 0;
						MemRead = 0;
						MemWrite = 0;
						MemtoReg = 0; //AO_W
						ExtOp = 0;
						PC_sel = `PC4;//4
					end
					else begin
						ALUCtrl = 0;
						RegDst  = 0;
						ALUB_sel = 0;
						RegWrite = 0;
						MemRead = 0;
						MemWrite = 0;
						MemtoReg = 0; //AO_W
						ExtOp = 0;
						PC_sel = `PC4;//4
						legal = 0;
					end
					end
				endcase				
			end
// RegDst : 0:rt/ 1:rd/ 2:31
// ALUB_sel: 0:RT_E / 1:EXT_E
//MemtoReg: WD =  0: AO_W/  1: DM/  2:PC8_W；
// ALUCtrl: + : 00/ -: 01/ | : 10/ &: 11/ 
//PC_sel: 0: PC4/ 1: PC_beq/  2: PC_jr/jalr / 3: PC_jal/j; 
//ExtOp : 0: signed/ 1: unsigned/ 2:lui		


//////////////////p7/////////////////////////
			`cp0:begin
				if(IR[`func]==`eret)begin
					PC_sel = `PC_eret;
				end
				else if(IR[25:21]==5'b0)begin //mfc0
					RegWrite = 1;
					RegDst = `R_rt;
					MemtoReg = 3;
				end
			end
/////////////////p7end///////////////////////
			`addi:begin
				ALUCtrl = `add; //或
				RegDst  = `R_rt; //rt
				ALUB_sel = 1; //立即数
				RegWrite = 1;
				MemRead = 0;
				MemWrite = 0;
				MemtoReg = `AO; //
				ExtOp = `signed;
				PC_sel = `PC4;//4
				load_op = `lw_DM;
			end
			
			`addiu:begin
				ALUCtrl = `add; //或
				RegDst  = `R_rt; //rt
				ALUB_sel = 1; //立即数
				RegWrite = 1;
				MemRead = 0;
				MemWrite = 0;
				MemtoReg = `AO; //
				ExtOp = `signed;
				PC_sel = `PC4;//4
				load_op = `lw_DM;
			end
			
			`lui:begin //lui 放入ALU
				ALUCtrl = `add;
				RegDst  = `R_rt;
				ALUB_sel = 1;
				RegWrite = 1;
				MemRead = 0;
				MemWrite = 0;
				MemtoReg = `AO;//AO_W
				ExtOp = `LUI;
				PC_sel = `PC4;// pc4
				load_op = `lw_DM;
			end
			
			`slti:begin //lui 放入ALU
				ALUCtrl = `slt;
				RegDst  = `R_rt;
				ALUB_sel = 1;
				RegWrite = 1;
				MemRead = 0;
				MemWrite = 0;
				MemtoReg = `AO; //AO_W
				ExtOp = `signed;
				PC_sel = `PC4;// pc4
				load_op = `lw_DM;
			end 
			
			`sltiu:begin //lui 放入ALU
				ALUCtrl = `sltu;
				RegDst  = `R_rt;
				ALUB_sel = 1;
				RegWrite = 1;
				MemRead = 0;
				MemWrite = 0;
				MemtoReg = `AO; //AO_W
				ExtOp = `signed;
				PC_sel = `PC4;// pc4
				load_op = `lw_DM;
			end
			
			`andi:begin //lui 放入ALU
				ALUCtrl = `and;
				RegDst  = `R_rt;
				ALUB_sel = 1;
				RegWrite = 1;
				MemRead = 0;
				MemWrite = 0;
				MemtoReg = `AO; //AO_W
				ExtOp = `unsigned;
				PC_sel = `PC4;// pc4
				load_op = `lw_DM;
			end
			
			`xori:begin //lui 放入ALU
				ALUCtrl = `xor;
				RegDst  = `R_rt;
				ALUB_sel = 1;
				RegWrite = 1;
				MemRead = 0;
				MemWrite = 0;
				MemtoReg = `AO; //AO_W
				ExtOp = `unsigned;
				PC_sel = `PC4;// pc4
				load_op = `lw_DM;
			end
			
			
			`bne:begin //lui 放入ALU
				ALUCtrl = `add;
				RegDst  = `R_rt;
				ALUB_sel = 0;
				RegWrite = 0;
				MemRead = 0;
				MemWrite = 0;
				MemtoReg = `AO; //AO_W
				ExtOp = `signed;
				PC_sel = `PC_bne;// pcbeq
				load_op = `lw_DM;
			end
			
			`beq:begin
				ALUCtrl = `add;
				RegDst  = `R_rt;
				ALUB_sel = 0;
				RegWrite = 0;
				MemRead = 0;
				MemWrite = 0;
				MemtoReg = `AO; //AO_W
				ExtOp = `signed;
				PC_sel = `PC_beq;// pcbeq
				load_op = `lw_DM;
			end
			
			`blez:begin
				ALUCtrl = `add;
				RegDst  = `R_rt;
				ALUB_sel = 0;
				RegWrite = 0;
				MemRead = 0;
				MemWrite = 0;
				MemtoReg = `AO; //AO_W
				ExtOp = `signed;
				PC_sel = `PC_blez;// pcbeq
				load_op = `lw_DM;
			end
			
			`bgez_bltz:begin
				if(IR[`rt]==5'b00001)begin //bgez
				ALUCtrl = `add;
				RegDst  = `R_rt;
				ALUB_sel = 0;
				RegWrite = 0;
				MemRead = 0;
				MemWrite = 0;
				MemtoReg = `AO; //AO_W
				ExtOp = `signed;
				PC_sel = `PC_bgez;// pcbeq
				load_op = `lw_DM;
				end
				
				else if(IR[`rt]==5'b00000)begin //bltz
				ALUCtrl = `add;
				RegDst  = `R_rt;
				ALUB_sel = 0;
				RegWrite = 0;
				MemRead = 0;
				MemWrite = 0;
				MemtoReg = `AO; //AO_W
				ExtOp = `signed;
				PC_sel = `PC_bltz;// pcbeq
				load_op = `lw_DM;
				end
				else begin
					legal = 0;
				end
			end
			
			`bgtz:begin
				ALUCtrl = `add;
				RegDst  = `R_rt;
				ALUB_sel = 0;
				RegWrite = 0;
				MemRead = 0;
				MemWrite = 0;
				MemtoReg = `AO; //AO_W
				ExtOp = `signed;
				PC_sel = `PC_bgtz;// pcbeq
				load_op = `lw_DM;
			end
			
			`lw:begin
				ALUCtrl = `add;
				RegDst  = `R_rt;
				ALUB_sel = 1;
				RegWrite = 1;
				MemRead = 1;
				MemWrite = 0;
				MemtoReg = `DM; //DM
				ExtOp = `signed;
				PC_sel = `PC4;//4
				load_op = `lw_DM;
			end
			
			`lb:begin
				ALUCtrl = `add;
				RegDst  = `R_rt;
				ALUB_sel = 1;
				RegWrite = 1;
				MemRead = 1;
				MemWrite = 0;
				MemtoReg = `DM; //DM
				ExtOp = `signed;
				PC_sel = `PC4;//4
				load_op = `lb_DM;
			end
			
			`lbu:begin
				ALUCtrl = `add;
				RegDst  = `R_rt;
				ALUB_sel = 1;
				RegWrite = 1;
				MemRead = 1;
				MemWrite = 0;
				MemtoReg = `DM; //DM
				ExtOp = `signed;
				PC_sel = `PC4;//4
				load_op = `lbu_DM;
			end
			
			`lh:begin
				ALUCtrl = `add;
				RegDst  = `R_rt;
				ALUB_sel = 1;
				RegWrite = 1;
				MemRead = 1;
				MemWrite = 0;
				MemtoReg = `DM; //DM
				ExtOp = `signed;
				PC_sel = `PC4;//4
				load_op = `lh_DM;
			end
			
			`lhu:begin
				ALUCtrl = `add;
				RegDst  = `R_rt;
				ALUB_sel = 1;
				RegWrite = 1;
				MemRead = 1;
				MemWrite = 0;
				MemtoReg = `DM; //DM
				ExtOp = `signed;
				PC_sel = `PC4;//4
				load_op = `lhu_DM;
			end
			
			`sw:begin
				ALUCtrl = `add;
				RegDst  = `R_rt;
				ALUB_sel = 1; //立即数
				RegWrite = 0;
				MemRead = 0;
				MemWrite = 1;
				MemtoReg = `AO; 
				ExtOp = `signed;
				PC_sel = `PC4;//4
				load_op = `lw_DM;
			end
			
			`sb:begin
				ALUCtrl = `add;
				RegDst  = `R_rt;
				ALUB_sel = 1; //立即数
				RegWrite = 0;
				MemRead = 0;
				MemWrite = 1;
				MemtoReg = `AO; 
				ExtOp = `signed;
				PC_sel = `PC4;//4
				load_op = `lw_DM;
			end
			
			`sh:begin
				ALUCtrl = `add;
				RegDst  = `R_rt;
				ALUB_sel = 1; //立即数
				RegWrite = 0;
				MemRead = 0;
				MemWrite = 1;
				MemtoReg = `AO; 
				ExtOp = `signed;
				PC_sel = `PC4;//4
				load_op = `lw_DM;
			end
			
			`ori:begin
				ALUCtrl = `or; //或
				RegDst  = `R_rt; //rt
				ALUB_sel = 1; //立即数
				RegWrite = 1;
				MemRead = 0;
				MemWrite = 0;
				MemtoReg = `AO; //
				ExtOp = `unsigned;
				PC_sel = `PC4;//4
				load_op = `lw_DM;
			end
			
			
			
			`jal:begin
				ALUCtrl = `add; //加
				RegDst  = `R_31; //31
				ALUB_sel = 0; //
				RegWrite = 1;
				MemRead = 1; //pc8
				MemWrite = 0;
				MemtoReg = `PC8; //PC8
				ExtOp = `signed;
				PC_sel = `PC_j;//
				load_op = `lw_DM;
			end
			
			`j:begin
				ALUCtrl = `add; //
				RegDst  = `R_rt; //
				ALUB_sel = 0; //
				RegWrite = 0;
				MemRead = 0; //
				MemWrite = 0;
				MemtoReg = `AO; //
				ExtOp = `signed;
				PC_sel = `PC_j;//4
				load_op = `lw_DM;
			end
			
			default:begin //非法
				legal = 0;
				ALUCtrl = 0; //
				RegDst  = 0; //
				ALUB_sel = 0; //
				RegWrite = 0;
				MemRead = 0; //
				MemWrite = 0;
				MemtoReg = 0; //
				ExtOp = 0;
				PC_sel = `PC4;//4
				load_op = `lw_DM;
			end
			
		endcase
	end
endmodule
