
.data
.space 64
arr1: .space 64
arr2: .space 64
.space 64


.text

N0: sllv $zero, $a0, $t1
N1: srl $t1, $t1, 28
addi $t1, $t1, 64
andi $t1, $t1, 0xfffffffe
sh $a0, 14($t1)
N2: srl $zero, $t1, 3
N3: blez $s0, N250
N4: srl $t1, $t1, 28
addi $t1, $t1, 64
sb $v0, 9($t1)
N5: mthi $zero
N6: xori $s0, $zero, 10919
N7: subu $s0, $s0, $zero
N8: mult $t0, $a0
N9: slt $zero, $s0, $a0
N10: beq $v0, $t1, N37
N11: nop
N12: mtlo $a0
N13: sra $t0, $t0, 28
sb $zero, 67($t0)
N14: bgez $s0, N186
N15: sra $zero, $zero, 28
lbu $v0, 73($zero)
N16: mtlo $a0
N17: sra $t0, $t0, 28
lb $zero, 65($t0)
N18: la $ra, N241
jr $ra
N19: sra $zero, $zero, 28
andi $zero, $zero, 0xfffffffc
sw $a0, 72($zero)
N20: sra $v0, $a0, 3
N21: sra $t1, $t1, 28
andi $t1, $t1, 0xfffffffe
sh $a0, 74($t1)
N22: mthi $t0
N23: sra $a0, $a0, 1
N24: sra $a0, $a0, 28
andi $a0, $a0, 0xfffffffc
lw $a0, 76($a0)
N25: addiu $zero, $s0, 47177
N26: sra $t1, $t1, 28
andi $t1, $t1, 0xfffffffe
lh $s0, 76($t1)
N27: nop
N28: la $ra, N186
jr $ra
N29: srl $a0, $a0, 28
addi $a0, $a0, 64
andi $a0, $a0, 0xfffffffe
lhu $t0, 14($a0)
N30: ori $t1, $s0, 51950
N31: srl $zero, $zero, 28
addi $zero, $zero, 64
lb $v0, 9($zero)
N32: srav $a0, $t1, $t1
N33: subu $s0, $t1, $t1
N34: srl $t0, $t0, 28
addi $t0, $t0, 64
andi $t0, $t0, 0xfffffffe
sh $v0, 10($t0)
N35: bgez $v0, N183
N36: srl $s0, $s0, 28
addi $s0, $s0, 64
andi $s0, $s0, 0xfffffffc
sw $zero, 8($s0)
N37: mfhi $v0
N38: srl $a0, $a0, 28
addi $a0, $a0, 64
lb $t1, 2($a0)
N39: srl $s0, $s0, 28
addi $s0, $s0, 64
andi $s0, $s0, 0xfffffffe
lh $s0, 12($s0)
N40: srl $a0, $a0, 28
addi $a0, $a0, 64
sb $v0, 5($a0)
N41: la $v0, N71
jr $v0
N42: subu $s0, $t0, $s0
N43: sltu $a0, $zero, $a0
N44: sra $t0, $v0, 2
N45: ori $v0, $zero, 36643
N46: beq $a0, $s0, N195
N47: nop
N48: srl $s0, $s0, 28
addi $s0, $s0, 64
lb $t0, 6($s0)
N49: addu $zero, $v0, $t0
N50: sra $t1, $t1, 28
lb $t0, 68($t1)
N51: sra $t1, $t1, 28
andi $t1, $t1, 0xfffffffc
lw $s0, 68($t1)
N52: la $t1, N196
jr $t1
N53: sra $zero, $a0, 2
N54: sra $a0, $v0, 0
N55: jal N181
N56: or $zero, $s0, $a0
N57: sltu $t1, $t1, $zero
N58: mfhi $t1
N59: nor $t1, $a0, $v0
N60: la $s0, N270
jr $s0
N61: srl $t0, $zero, 0
N62: srl $a0, $a0, 28
addi $a0, $a0, 64
andi $a0, $a0, 0xfffffffe
lh $s0, 2($a0)
N63: sra $s0, $s0, 28
lb $s0, 66($s0)
N64: bgtz $v0, N214
N65: ori $t0, $t0, 1
div $t0, $t0
N66: nop
N67: addu $v0, $a0, $v0
N68: beq $a0, $s0, N224
N69: sra $zero, $zero, 0
N70: nor $s0, $s0, $a0
N71: srl $a0, $a0, 28
addi $a0, $a0, 64
andi $a0, $a0, 0xfffffffe
lh $v0, 2($a0)
N72: sll $t0, $s0, 2
N73: addi $zero, $a0, 13688
N74: jal N135
N75: srl $v0, $v0, 28
addi $v0, $v0, 64
andi $v0, $v0, 0xfffffffe
lhu $t0, 10($v0)
N76: srl $v0, $v0, 28
addi $v0, $v0, 64
lb $t1, 0($v0)
N77: srl $a0, $a0, 28
addi $a0, $a0, 64
andi $a0, $a0, 0xfffffffc
lw $s0, 0($a0)
N78: sra $v0, $v0, 28
lb $a0, 76($v0)
N79: addi $t1, $s0, -13279
N80: srl $t1, $t1, 28
addi $t1, $t1, 64
andi $t1, $t1, 0xfffffffc
lw $a0, 12($t1)
N81: slt $zero, $a0, $t1
N82: lui $v0, 19389
N83: mflo $s0
N84: mtlo $v0
N85: mult $v0, $zero
N86: blez $s0, N230
N87: multu $s0, $t1
N88: mflo $t0
N89: srl $zero, $zero, 28
addi $zero, $zero, 64
andi $zero, $zero, 0xfffffffe
lhu $zero, 10($zero)
N90: sra $t0, $t0, 28
andi $t0, $t0, 0xfffffffc
sw $t0, 76($t0)
N91: sllv $t0, $t0, $a0
N92: ori $t1, $zero, 56548
N93: ori $t0, $t0, 1
div $v0, $t0
N94: xor $t1, $t1, $t0
N95: andi $t1, $s0, 35195
N96: bgtz $t1, N143
N97: mflo $t0
N98: andi $t1, $zero, 60927
N99: sra $t0, $t0, 28
andi $t0, $t0, 0xfffffffe
lhu $t0, 64($t0)
N100: srl $a0, $a0, 28
addi $a0, $a0, 64
andi $a0, $a0, 0xfffffffe
lh $t0, 2($a0)
N101: srl $a0, $a0, 28
addi $a0, $a0, 64
sb $t0, 11($a0)
N102: slt $t1, $zero, $s0
N103: and $s0, $s0, $s0
N104: srl $zero, $zero, 28
addi $zero, $zero, 64
andi $zero, $zero, 0xfffffffe
lhu $v0, 12($zero)
N105: srl $t0, $zero, 3
N106: sra $v0, $v0, 28
andi $v0, $v0, 0xfffffffe
lh $s0, 74($v0)
N107: andi $t1, $zero, 8516
N108: jal N179
N109: sltu $t1, $a0, $t0
N110: la $t0, N164
jr $t0
N111: ori $s0, $s0, 1
divu $a0, $s0
N112: xori $t0, $a0, 45959
N113: sra $zero, $zero, 28
andi $zero, $zero, 0xfffffffc
sw $a0, 76($zero)
N114: sra $s0, $s0, 28
sb $v0, 76($s0)
N115: bgtz $t0, N210
N116: sra $zero, $zero, 28
lb $t1, 69($zero)
N117: slti $t0, $v0, 23622
N118: sra $t0, $t0, 28
sb $a0, 73($t0)
N119: sra $a0, $a0, 28
lb $s0, 79($a0)
N120: sra $v0, $v0, 28
andi $v0, $v0, 0xfffffffc
sw $a0, 68($v0)
N121: j N133
N122: srl $zero, $zero, 28
addi $zero, $zero, 64
andi $zero, $zero, 0xfffffffc
lw $v0, 8($zero)
N123: andi $t1, $t1, 45873
N124: add $zero, $a0, $s0
N125: srav $t0, $t1, $t1
N126: srlv $a0, $s0, $s0
N127: multu $t0, $t1
N128: slt $zero, $t1, $a0
N129: sra $a0, $a0, 28
andi $a0, $a0, 0xfffffffc
sw $t0, 64($a0)
N130: sra $v0, $v0, 28
andi $v0, $v0, 0xfffffffe
sh $zero, 70($v0)
N131: sra $v0, $v0, 28
andi $v0, $v0, 0xfffffffc
sw $zero, 76($v0)
N132: multu $v0, $v0
N133: sra $t1, $t1, 28
sb $t0, 79($t1)
N134: subu $v0, $v0, $zero
N135: and $s0, $zero, $s0
N136: subu $a0, $v0, $v0
N137: sltiu $t0, $a0, -8797
N138: mthi $s0
N139: srl $zero, $t1, 1
N140: srl $a0, $a0, 28
addi $a0, $a0, 64
sb $s0, 6($a0)
N141: xor $a0, $s0, $t1
N142: sra $a0, $a0, 28
andi $a0, $a0, 0xfffffffe
lhu $v0, 68($a0)
N143: sllv $zero, $s0, $v0
N144: sra $s0, $s0, 28
andi $s0, $s0, 0xfffffffe
lh $v0, 66($s0)
N145: addiu $t1, $t0, 53438
N146: ori $v0, $v0, 1
div $v0, $v0
N147: mthi $a0
N148: bgez $a0, N268
N149: srl $a0, $t0, 2
N150: srl $v0, $v0, 28
addi $v0, $v0, 64
lb $v0, 12($v0)
N151: srlv $zero, $s0, $v0
N152: srl $t1, $t1, 28
addi $t1, $t1, 64
lb $zero, 14($t1)
N153: la $ra, N214
jr $ra
N154: srav $a0, $zero, $v0
N155: slti $zero, $s0, 6445
N156: ori $t1, $t1, 1
divu $v0, $t1
N157: sra $t1, $t1, 28
lbu $s0, 78($t1)
N158: sltu $t1, $zero, $a0
N159: multu $zero, $s0
N160: sra $a0, $a0, 28
andi $a0, $a0, 0xfffffffe
lh $t1, 66($a0)
N161: ori $t0, $s0, 31456
N162: srl $v0, $v0, 28
addi $v0, $v0, 64
andi $v0, $v0, 0xfffffffe
sh $a0, 4($v0)
N163: or $v0, $zero, $zero
N164: mfhi $t0
N165: ori $t1, $t1, 1
divu $t1, $t1
N166: srl $zero, $zero, 28
addi $zero, $zero, 64
andi $zero, $zero, 0xfffffffc
sw $v0, 8($zero)
N167: srlv $a0, $s0, $zero
N168: andi $t0, $zero, 63095
N169: mult $zero, $a0
N170: ori $s0, $zero, 20791
N171: sra $v0, $v0, 28
andi $v0, $v0, 0xfffffffe
lh $a0, 72($v0)
N172: sra $v0, $v0, 28
lbu $zero, 77($v0)
N173: la $ra, N251
jalr $t0, $ra
N174: ori $v0, $v0, 1
divu $v0, $v0
N175: sra $t1, $a0, 3
N176: srl $t1, $t1, 28
addi $t1, $t1, 64
lbu $t0, 12($t1)
N177: srl $zero, $zero, 28
addi $zero, $zero, 64
andi $zero, $zero, 0xfffffffc
sw $v0, 12($zero)
N178: nop
N179: sltu $a0, $zero, $s0
N180: bltz $t0, N185
N181: sra $t0, $t0, 28
andi $t0, $t0, 0xfffffffc
sw $a0, 76($t0)
N182: bgtz $s0, N213
N183: sltu $s0, $t1, $t0
N184: mthi $v0
N185: sltiu $s0, $t1, -14648
N186: multu $v0, $t1
N187: srl $zero, $zero, 28
addi $zero, $zero, 64
andi $zero, $zero, 0xfffffffe
lhu $t0, 0($zero)
N188: srl $zero, $zero, 28
addi $zero, $zero, 64
andi $zero, $zero, 0xfffffffe
lhu $zero, 12($zero)
N189: bne $zero, $t1, N215
N190: srav $t0, $zero, $t0
N191: or $t1, $v0, $v0
N192: sub $s0, $t1, $a0
N193: and $s0, $t0, $v0
N194: mfhi $t0
N195: srl $zero, $zero, 28
addi $zero, $zero, 64
andi $zero, $zero, 0xfffffffc
lw $zero, 0($zero)
N196: add $a0, $a0, $a0
N197: sra $a0, $a0, 28
andi $a0, $a0, 0xfffffffe
lh $v0, 76($a0)
N198: and $a0, $s0, $t0
N199: srl $v0, $v0, 28
addi $v0, $v0, 64
lbu $a0, 8($v0)
N200: or $t0, $s0, $v0
N201: sltu $v0, $t0, $t1
N202: srav $a0, $s0, $t1
N203: subu $a0, $t0, $a0
N204: mtlo $a0
N205: sra $t0, $t0, 28
lbu $t1, 67($t0)
N206: sra $s0, $s0, 28
lb $s0, 67($s0)
N207: j N248
N208: subu $t0, $s0, $s0
N209: sra $s0, $s0, 28
andi $s0, $s0, 0xfffffffe
lh $t0, 70($s0)
N210: beq $v0, $zero, N225
N211: addiu $s0, $s0, 13386
N212: la $ra, N226
jalr $v0, $ra
N213: sub $v0, $t0, $v0
N214: addu $t0, $a0, $v0
N215: srl $s0, $s0, 28
addi $s0, $s0, 64
andi $s0, $s0, 0xfffffffe
sh $t1, 4($s0)
N216: bgtz $a0, N239
N217: multu $s0, $zero
N218: blez $zero, N272
N219: sra $t0, $t0, 28
lb $t0, 74($t0)
N220: ori $a0, $a0, 1
divu $t1, $a0
N221: sltiu $t1, $t1, -11482
N222: bgtz $a0, N265
N223: nop
N224: blez $zero, N277
N225: xor $a0, $t1, $t1
N226: ori $a0, $a0, 1
div $v0, $a0
N227: mtlo $v0
N228: ori $a0, $a0, 1
divu $t1, $a0
N229: lui $s0, 30302
N230: addiu $s0, $a0, 60782
N231: srl $t1, $t1, 28
addi $t1, $t1, 64
sb $s0, 13($t1)
N232: sra $s0, $s0, 28
andi $s0, $s0, 0xfffffffe
sh $t1, 78($s0)
N233: ori $t1, $t1, 1
div $v0, $t1
N234: bne $v0, $t1, N236
N235: mthi $v0
N236: xor $zero, $zero, $t0
N237: andi $zero, $v0, 29212
N238: mflo $zero
N239: la $ra, N248
jr $ra
N240: addiu $t0, $v0, 16699
N241: j N257
N242: addiu $zero, $v0, 36359
N243: sra $v0, $v0, 28
andi $v0, $v0, 0xfffffffe
lhu $zero, 66($v0)
N244: addu $s0, $a0, $s0
N245: j N258
N246: addu $v0, $t1, $a0
N247: la $t1, N277
jr $t1
N248: ori $t0, $v0, 63406
N249: sra $t1, $t1, 28
sb $a0, 64($t1)
N250: bgez $s0, N266
N251: srav $a0, $t0, $s0
N252: sll $v0, $t0, 3
N253: nor $t1, $s0, $zero
N254: srl $zero, $zero, 28
addi $zero, $zero, 64
lbu $zero, 14($zero)
N255: slti $t0, $zero, -27071
N256: blez $s0, N263
N257: sltu $a0, $t0, $t1
N258: srav $zero, $t1, $zero
N259: sltu $t1, $a0, $zero
N260: sra $a0, $a0, 28
andi $a0, $a0, 0xfffffffc
lw $zero, 72($a0)
N261: sra $v0, $v0, 28
lb $t0, 69($v0)
N262: add $v0, $t1, $zero
N263: andi $v0, $s0, 27316
N264: lui $s0, 47245
N265: mfhi $zero
N266: srl $zero, $zero, 28
addi $zero, $zero, 64
andi $zero, $zero, 0xfffffffe
lh $t0, 4($zero)
N267: ori $v0, $v0, 1
divu $t1, $v0
N268: nor $zero, $v0, $a0
N269: sllv $t1, $s0, $zero
N270: sra $t1, $t1, 28
andi $t1, $t1, 0xfffffffe
sh $t1, 66($t1)
N271: srl $s0, $s0, 28
addi $s0, $s0, 64
andi $s0, $s0, 0xfffffffe
sh $a0, 2($s0)
N272: bgez $s0, N274
N273: slt $t1, $t0, $zero
N274: sltu $t0, $zero, $t0
N275: srl $v0, $v0, 0
N276: sra $v0, $v0, 28
andi $v0, $v0, 0xfffffffe
lh $zero, 72($v0)
N277: sra $s0, $s0, 28
sb $a0, 71($s0)
N278: srav $t0, $t1, $v0
N279: sra $v0, $v0, 28
andi $v0, $v0, 0xfffffffe
sh $zero, 74($v0)
N280: nop
EXIT:
beq $zero, $zero, EXIT
nop
