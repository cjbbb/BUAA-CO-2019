`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:54:58 11/21/2019 
// Design Name: 
// Module Name:    instr_decoder 
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
module instr_decoder(
	 input [31:0] lui_E,
	 input [31:0] PC8_E,
	 input [31:0] PC8_M,
	 input [31:0] AO_M,
	 input [31:0] WD,
	 input [1:0] Time,
    input [31:0] IR,
	 output [4:0]WriteReg,
	 output En_Write,
	 output [31:0] WriteData,
	 output reg [1:0] Tnew
    );
	 
	//分类
	wire addu = (IR[`op] == `R)&&(IR[`func]==`addu);
	wire subu = (IR[`op] == `R)&&(IR[`func]==`subu);
	wire jr = (IR[`op] == `R)&&(IR[`func]==`jr);
	wire jalr = (IR[`op] == `R)&&(IR[`func]==`jalr);
	wire OR = (IR[`op]==`R)&&(IR[`func]==`OR);

	wire lw = (IR[`op] == `lw);
	wire lb = (IR[`op] == `lb);
	wire lbu = (IR[`op]==`lbu);
	wire lh = (IR[`op] == `lh);
	wire lhu = (IR[`op]==`lhu);

	wire sw = (IR[`op] == `sw);
	wire beq = (IR[`op] == `beq);
	wire ori = (IR[`op] == `ori);
	wire jal = (IR[`op] == `jal);
	wire lui = (IR[`op] == `lui);
	wire addi = (IR[`op]==`addi);
	wire cal_r, cal_i,load, store;
	wire addiu = (IR[`op]==`addiu);
	wire andi = (IR[`op] == `andi);
	wire xori = (IR[`op] == `xori);
	wire slti = (IR[`op] == `slti);
	wire sltiu = (IR[`op] == `sltiu);
	wire sb = (IR[`op]==`sb);
	wire sh = (IR[`op]==`sh);
	wire mfc0 = IR[`op]==`cp0 && IR[25:21]==5'b00000 && IR[10:3]==8'b0;
	assign cal_r = (IR[`op]==`R && IR[`func]!=`jalr && IR[`func]!=`jr && IR!=0 && IR[`func]!=`mult && IR[`func]!=`multu && IR[`func]!=`div && IR[`func]!=`divu && IR[`func]!=`mtlo && IR[`func]!=`mthi);
	assign cal_i = ori | lui | addi | addiu | andi | xori | slti | sltiu;
	assign store = sw | sb | sh;
	assign load = lw | lb | lbu | lh | lhu; 
	
	
	//En_Write
	assign En_Write = cal_r | cal_i | load | jalr |jal | mfc0;
	
	
	//WriteReg
	assign WriteReg = (cal_r|jalr) ? IR[`rd]:
							(cal_i|load|mfc0) ? IR[`rt]:
							jal 			 ? 5'b11111:
												5'b0;
												
	//WriteData: 
	assign WriteData = (Time==0 & lui)			  ? lui_E://E级
							 (Time==0 & (jalr|jal))   ? PC8_E:
							 (Time==1 & (jalr|jal))	  ? PC8_M://M级
							 (Time==1 & (cal_r|cal_i))? AO_M : //M级
							 (Time==2)                ? WD   :
																	  0;
	//Tnew
	always @(*)begin
		if(cal_r|cal_i)begin
			case(Time)
				0: Tnew = 1;
				1: Tnew = 0;
				2: Tnew = 0;
				default: Tnew = 0;
			endcase
		end
		else if(load | mfc0)begin
			case(Time)
				0: Tnew = 2;
				1: Tnew = 1;
				2: Tnew = 0;
				default: Tnew = 0;
			endcase
		end
		else begin
			Tnew = 0; 	//0个周期
		end
	end


							 
endmodule
