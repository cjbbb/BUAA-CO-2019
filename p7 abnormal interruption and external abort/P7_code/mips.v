`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:28:33 12/15/2019 
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
module mips(
    input clk,
    input reset,
	 input interrupt,
	 output [31:0] addr
    );
	wire [31:0] IR_B1;
	wire [31:0] IR_B2;
	wire [31:0] IR_B3;
	wire [31:0] PrAddr;
   wire [31:0] PrRD, PrWD;
   wire [7:2] HWInt;
	wire [31:0] AO_M;
   wire PrWE;
	wire [31:0] DEV0_RD, DEV1_RD, DEV_WD;
   wire [31:0] DEV_Addr;
   wire DEV0_WE, DEV1_WE, data_sel;
	wire Stop0,Stop1;
	assign HWInt[7:5] = 4'b0;
	assign HWInt[4]  	= interrupt;
	assign HWInt[3]  	= Stop1;
	assign HWInt[2]  	= Stop0;
	cpu cjbcpu(
					.clk(clk),
					.reset(reset),
					.interrupt(interrupt),
					.PrRD(PrRD),
					.HWInt(HWInt),
					.PrWE(PrWE),
					.PrAddr(PrAddr),
					.PrWD(PrWD),
					.addr(addr)
					);
	
	bridge cjbbridge(
						  .PrAddr(PrAddr),
						  .PrWD(PrWD),
						  .DEV0_RD(DEV0_RD),
						  .DEV1_RD(DEV1_RD),
						  .PrWE(PrWE),
						  .DEV0_WE(DEV0_WE),
						  .DEV1_WE(DEV1_WE),
						  .PrRD(PrRD),
						  .DEV_Addr(DEV_Addr),
						  .DEV_WD(DEV_WD)
						 );

	TC cjbTC0(
				.clk(clk),
				.reset(reset),
				.Addr(DEV_Addr[31:2]),
				.WE(DEV0_WE),
				.Din(DEV_WD),
				.Dout(DEV0_RD),
				.IRQ(Stop0)
				);
	TC cjbTC1(
				.clk(clk),
				.reset(reset),
				.Addr(DEV_Addr[31:2]),
				.WE(DEV1_WE),
				.Din(DEV_WD),
				.Dout(DEV1_RD),
				.IRQ(Stop1)
				);
endmodule
