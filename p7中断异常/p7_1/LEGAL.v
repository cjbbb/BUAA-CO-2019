`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:12:53 12/18/2019 
// Design Name: 
// Module Name:    LEGAL 
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
        `include "define.v"
module LEGAL(
        input [31:0] IR,
        output legal_D
        );

        `define rs IR[25:21]
        `define rt IR[20:16]
		  wire nop;
        wire add,addu,sub,subu,sll,srl,sra,sllv,srlv,srav,cal_and,cal_or,cal_xor,cal_nor,slt,sltu;
        wire addi,addiu,andi,ori,xori,lui,slti,sltiu;
        wire lb,lbu,lh,lhu,lw;
        wire sb,sh,sw;
        wire mfc0,mtc0,eret;
        wire mfhi,mflo,mthi,mtlo;
        wire mult,multu,div,divu;
        wire beq,bne,blez,bgtz,bltz,bgez,j,jal,jalr,jr;
        //nop 指令
        //cal_r指令
		  assign nop = (IR == 0) ?1:0;
        assign add=    (IR[`op]==0)&&(IR[`func]==6'b100000);
        assign addu=   (IR[`op]==0)&&(IR[`func]==6'b100001);
        assign sub=    (IR[`op]==0)&&(IR[`func]==6'b100010);
        assign subu=   (IR[`op]==0)&&(IR[`func]==6'b100011);
        assign sll=    (IR[`op]==0)&&(IR[`func]==6'b000000&&IR[`rd]!=0);
        assign srl=    (IR[`op]==0)&&(IR[`func]==6'b000010);
        assign sra=    (IR[`op]==0)&&(IR[`func]==6'b000011);
        assign sllv=   (IR[`op]==0)&&(IR[`func]==6'b000100);
        assign srlv=   (IR[`op]==0)&&(IR[`func]==6'b000110);
        assign srav=   (IR[`op]==0)&&(IR[`func]==6'b000111);
        assign cal_and=(IR[`op]==0)&&(IR[`func]==6'b100100);
        assign cal_or= (IR[`op]==0)&&(IR[`func]==6'b100101);
        assign cal_xor=(IR[`op]==0)&&(IR[`func]==6'b100110);
        assign cal_nor=(IR[`op]==0)&&(IR[`func]==6'b100111);
        assign slt=    (IR[`op]==0)&&(IR[`func]==6'b101010);
        assign sltu=   (IR[`op]==0)&&(IR[`func]==6'b101011);

        //cal_i指令

        assign addi=   (IR[`op]==6'b001000)?1:0;
        assign addiu=  (IR[`op]==6'b001001)?1:0;
        assign andi=   (IR[`op]==6'b001100)?1:0;
        assign ori=    (IR[`op]==6'b001101)?1:0;
        assign xori=   (IR[`op]==6'b001110)?1:0;
        assign lui=    (IR[`op]==6'b001111)?1:0;
        assign slti=   (IR[`op]==6'b001010)?1:0;
        assign sltiu=  (IR[`op]==6'b001011)?1:0;

        //load指令

        assign lb=     (IR[`op]==6'b100000)?1:0;
        assign lbu=    (IR[`op]==6'b100100)?1:0;
        assign lh=     (IR[`op]==6'b100001)?1:0;
        assign lhu=    (IR[`op]==6'b100101)?1:0;
        assign lw=     (IR[`op]==6'b100011)?1:0;

        //save指令

        assign sb=(IR[`op]==6'b101000)?1:0;
        assign sh=(IR[`op]==6'b101001)?1:0;
        assign sw=(IR[`op]==6'b101011)?1:0;



        assign mfc0=(IR[`op]==6'b010000)&&(`rs==0)?1:0;
        assign mtc0=(IR[`op]==6'b010000)&&(`rs==5'b00100)?1:0;
        assign eret=(IR[`op]==6'b010000)&&(IR[`func]==6'b011000) ?1:0;
        //乘除转移类指令

        assign mfhi=(IR[`op]==6'b000000)&&(IR[`func]==6'b010000)?1:0;
        assign mflo=(IR[`op]==6'b000000)&&(IR[`func]==6'b010010)?1:0;
        assign mthi=(IR[`op]==6'b000000)&&(IR[`func]==6'b010001)?1:0;
        assign mtlo=(IR[`op]==6'b000000)&&(IR[`func]==6'b010011)?1:0;
        //branch类指令
        assign beq=  (IR[`op]==6'b000100)?1:0;
        assign bne=  (IR[`op]==6'b000101)?1:0;
        assign blez= (IR[`op]==6'b000110)?1:0;
        assign bgtz= (IR[`op]==6'b000111)?1:0;
        assign bltz= (IR[`op]==6'b000001)&&(`rt==5'b00000)?1:0;
        assign bgez= (IR[`op]==6'b000001)&&(`rt==5'b00001)?1:0;
        assign j=    (IR[`op]==6'b000010)?1:0;
        assign jal=  (IR[`op]==6'b000011)?1:0;
        assign jalr= (IR[`op]==6'b000000)&&(IR[`func]==6'b001001)?1:0;
        assign jr=   (IR[`op]==6'b000000)&&(IR[`func]==6'b001000)?1:0;


        //乘除计算类指令

        assign mult=(IR[`op]==6'b000000)&&(IR[`func]==6'b011000)?1:0;
        assign multu=(IR[`op]==6'b000000)&&(IR[`func]==6'b011001)?1:0;
        assign div=(IR[`op]==6'b000000)&&(IR[`func]==6'b011010)?1:0;
        assign divu=(IR[`op]==6'b000000)&&(IR[`func]==6'b011011)?1:0;	 // load LB, LBU, LH, LHU, LW  5
	/*	wire Exc;
	 assign Exc=(mfc0|mtc0|eret) ?	1:0;
	 wire move_MAD;
	 assign move_MAD=(mfhi|mflo|mthi|mtlo) ?1:0;
	 wire cal_MAD;
	 assign cal_MAD=(mult|multu|div|divu)?1:0;
	 wire branch;
	 assign branch=(beq|bne|blez|bgtz|bltz|bgez|j|jal|jalr|jr) ?1:0;
	  wire load;
	 assign load=(lb|lbu|lh|lhu|lw)?1:0;
	 wire save;
	 assign save=(sb|sh|sw)?1:0;
	 	 wire cal_i;
	 assign cal_i=(addi|addiu|andi|ori|xori|lui|slti|sltiu)? 1:0;
	wire cal_r;
	 assign cal_r=(add|addu|sub|subu|sll|srl|sra|sllv|srlv|srav|cal_and|cal_or|cal_xor|cal_nor|slt|sltu)?1:0;
			assign legal_D=(nop|cal_r|cal_i|save|load|branch|cal_MAD|move_MAD|Exc) ?1:0;*/
        assign legal_D = ( nop| lw | lb | lbu | lhu | lh |
        sw  | sh | sb|
        ori | lui | addiu | addi | andi |xori|
        beq | bne | blez |bgtz |bltz |bgez |
        jal | j|
        add | addu | sub | subu | cal_and | cal_or | cal_xor | cal_nor|
        jr  | jalr | slt | sltu | slti | sltiu |
        sll | srl | sra | sllv | srlv | srav |
        mult | multu | div | divu |
        mfhi | mflo | mthi |mtlo|
        eret | mfc0 |mtc0
        );
        endmodule
