`timescale 1ns / 1ps
///////////////////p7///////////
`define Int    5'd0
`define AdEL   5'd4
`define AdES    5'd5
`define RI       5'b01010
`define OV        5'b01100

`define cp0 	6'b010000
`define mt 	 5'b00100
`define eret 6'b011000
/////////////////p6///////////
`define new  	6'b111111

`define ADD 	6'b100000
`define AND 	6'b100100
`define addi 	6'b001000
`define addiu  6'b001001
`define andi   6'b001100
`define addu	6'b100001

`define bne 	6'b000101
`define blez 	6'b000110
`define bgez_bltz 	6'b000001
`define bgtz 	6'b000111
`define beq 	6'b000100

`define R 		6'b000000
`define lw 		6'b100011
`define sw 		6'b101011
`define lui	 	6'b001111
`define ori 	6'b001101

`define jal 	6'b000011
`define jr 		6'b001000
`define jalr	6'b001001
`define j 		6'b000010

`define subu 	6'b100011
`define OR 		6'b100101
`define SUB 	6'b100010
`define xori 	6'b001110
`define XOR  	6'b100110
`define NOR    6'b100111
`define SLT 	6'b101010
`define SLTU 	6'b101011
`define slti   6'b001010
`define sltiu  6'b001011
`define SLL 	6'b000000 
`define SRL 	6'b000010 
`define SRLV 	6'b000110 
`define SLLV  	6'b000100
`define SRA 	6'b000011
`define SRAV   6'b000111
`define sb 	   6'b101000
`define sh 		6'b101001
`define lb 	   6'b100000
`define lbu		6'b100100
`define lh 	 	6'b100001
`define lhu	 	6'b100101
`define div 	6'b011010
`define divu 	6'b011011
`define mult 	6'b011000
`define multu 	6'b011001
`define mthi 	6'b010001
`define mtlo 	6'b010011
`define mfhi	6'b010000
`define mflo	6'b010010

`define op 31:26
`define rs 25:21
`define rt 20:16	
`define rd 15:11
`define shamt 10:6
`define func 5:0
`define imm16 15:0