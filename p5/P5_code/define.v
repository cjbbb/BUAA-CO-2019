`timescale 1ns / 1ps

`define R 6'b000000
`define lw 6'b100011
`define sw 6'b101011
`define lui 6'b001111
`define ori 6'b001101
`define beq 6'b000100
`define jal 6'b000011
`define addu 6'b100001
`define subu 6'b100011
`define jr 6'b001000
`define jalr 6'b001001
`define j 6'b000010

`define op 31:26
`define rs 25:21
`define rt 20:16
`define rd 15:11
`define shamt 10:6
`define func 5:0
`define imm16 15:0