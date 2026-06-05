`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////



// RegDst : 0:rt/ 1:rd/ 2:31

// ALUB_sel: 0:RT_E / 1:EXT_E

//MemtoReg: WD =  0: AO_W/  1: DM/  2:PC8_W；

// ALUCtrl: + : 00/ -: 01/ | : 10/ &: 11/ 

//PC_sel: 0: PC4/ 1: PC_beq/  2: PC_jr/jalr / 3: PC_jal/j; 

//ExtOp : 0: signed/ 1: unsigned/ 2:lui
`include"define.v"
//所有控制信号均为2位
module controller(
	 input [31:0] IR,
    output reg [2:0] ALUCtrl, //alu功能
    output reg [2:0] RegDst,	//WA地址
 //   output reg ALUA_sel,  	//ALUA_sel 信号
	 output reg [2:0]ALUB_sel, //ALUB选择
    output reg RegWrite,		//Reg写入信号
    output reg MemRead,			//MemRead读取信号
    output reg MemWrite,
    output reg [2:0] MemtoReg,
    output reg [2:0]ExtOp,
    output reg [2:0]PC_sel
    );
// RegDst : 0:rt/ 1:rd/ 2:31
// ALUB_sel: 0:RT_E / 1:EXT_E
//MemtoReg: WD =  0: AO_W/  1: DM/  2:PC8_W；
// ALUCtrl: + : 00/ -: 01/ | : 10/ &: 11/ 
//PC_sel: 0: PC4/ 1: PC_beq/  2: PC_jr/jalr / 3: PC_jal/j; 
//ExtOp : 0: signed/ 1: unsigned/ 2:lui
	always @(*)begin
		case(IR[`op])
			
			`R: begin
			
				case(IR[`func])
					
					`addu:begin
						ALUCtrl = 0;
						RegDst  = 1;
						ALUB_sel = 0;
						RegWrite = 1;
						MemRead = 0;
						MemWrite = 0;
						MemtoReg = 0; //AO_W
						ExtOp = 0;
						PC_sel = 0;
					end
					
					`subu:begin
						ALUCtrl = 1;
						RegDst  = 1;
						ALUB_sel = 0;
						RegWrite = 1;
						MemRead = 0;
						MemWrite = 0;
						MemtoReg = 0; //AO_W
						ExtOp = 0;
						PC_sel = 0;//4
					end
					
					`jalr:begin
						ALUCtrl = 0;
						RegDst  = 1;//rd
						ALUB_sel = 0;
						RegWrite = 1;
						MemRead = 0;
						MemWrite = 0;
						MemtoReg = 2; //pc8
						ExtOp = 0;
						PC_sel = 2;// jalr
					end
					
					`jr:begin
						ALUCtrl = 0;
						RegDst  = 2;
						ALUB_sel = 0;
						RegWrite = 0;
						MemRead = 0;
						MemWrite = 0;
						MemtoReg = 0; //AO_W
						ExtOp = 0;
						PC_sel = 2;// jalr
					end
					
					default:begin //nop
						ALUCtrl = 0;
						RegDst  = 0;
						ALUB_sel = 0;
						RegWrite = 0;
						MemRead = 0;
						MemWrite = 0;
						MemtoReg = 0; //AO_W
						ExtOp = 0;
						PC_sel = 0;//4
					end
				endcase				
			end
// RegDst : 0:rt/ 1:rd/ 2:31
// ALUB_sel: 0:RT_E / 1:EXT_E
//MemtoReg: WD =  0: AO_W/  1: DM/  2:PC8_W；
// ALUCtrl: + : 00/ -: 01/ | : 10/ &: 11/ 
//PC_sel: 0: PC4/ 1: PC_beq/  2: PC_jr/jalr / 3: PC_jal/j; 
//ExtOp : 0: signed/ 1: unsigned/ 2:lui		
			`lui:begin //lui 放入ALU
				ALUCtrl = 0;
				RegDst  = 0;
				ALUB_sel = 1;
				RegWrite = 1;
				MemRead = 0;
				MemWrite = 0;
				MemtoReg = 0; //AO_W
				ExtOp = 2;
				PC_sel = 0;// pc4
			end
			
			`beq:begin
				ALUCtrl = 0;
				RegDst  = 0;
				ALUB_sel = 0;
				RegWrite = 0;
				MemRead = 0;
				MemWrite = 0;
				MemtoReg = 0; //AO_W
				ExtOp = 0;
				PC_sel = 1;// pcbeq
			end
			
			`lw:begin
				ALUCtrl = 0;
				RegDst  = 0;
				ALUB_sel = 1;
				RegWrite = 1;
				MemRead = 1;
				MemWrite = 0;
				MemtoReg = 1; //DM
				ExtOp = 0;
				PC_sel = 0;//4
			end
			
			`sw:begin
				ALUCtrl = 0;
				RegDst  = 0;
				ALUB_sel = 1; //立即数
				RegWrite = 0;
				MemRead = 0;
				MemWrite = 1;
				MemtoReg = 0; //DM
				ExtOp = 0;
				PC_sel = 0;//4
			end
			
			`ori:begin
				ALUCtrl = 2; //或
				RegDst  = 0; //rt
				ALUB_sel = 1; //立即数
				RegWrite = 1;
				MemRead = 0;
				MemWrite = 0;
				MemtoReg = 0; //DM
				ExtOp = 1;
				PC_sel = 0;//4
			end
			
			`jal:begin
				ALUCtrl = 0; //加
				RegDst  = 2; //31
				ALUB_sel = 0; //
				RegWrite = 1;
				MemRead = 1; //pc8
				MemWrite = 0;
				MemtoReg = 2; //DM
				ExtOp = 0;
				PC_sel = 3;//4
			end
			`j:begin
				ALUCtrl = 0; //
				RegDst  = 0; //
				ALUB_sel = 0; //
				RegWrite = 0;
				MemRead = 0; //
				MemWrite = 0;
				MemtoReg = 0; //
				ExtOp = 0;
				PC_sel = 3;//4
			end
			default:begin //nop
				ALUCtrl = 0; //
				RegDst  = 0; //
				ALUB_sel = 0; //
				RegWrite = 0;
				MemRead = 0; //
				MemWrite = 0;
				MemtoReg = 0; //
				ExtOp = 0;
				PC_sel = 0;//4
			end
		endcase
	end
endmodule
