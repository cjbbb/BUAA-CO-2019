init:
addu $28,$0,$0
addu $29,$0,$0
addu $30,$0,$0
addu $31,$0,$0
ori $28,$28, 4
#
#
#
block_0:
lui $1, 0xffff
ori $1,$1, 0xaa99
lui $2, 0x0000
ori $2,$2, 0x787f
#
#
#
addu $26,$1,$2
#
#
#
sw $26, 0($29)
addu $29,$29,$28
j block_1
#

block_1:
lui $4, 0xffff
ori $4,$4, 0x85dc
lui $5, 0xffff
ori $5,$5, 0x83d3
#
#
#
addu $0,$4,$5
#
#
#
sw $0, 0($29)
addu $29,$29,$28
j block_2
#

block_2:
lui $16, 0xffff
ori $16,$16, 0xd9ef
lui $17, 0xffff
ori $17,$17, 0x8dcd
#
#
#
subu $27,$16,$17
#
#
#
sw $27, 0($29)
addu $29,$29,$28
j block_15
#

block_15:
lui $2, 0xffff
ori $2,$2, 0xf12e
#
#
#
ori $19,$2, 0xf0ad
#
#
#
sw $19, 0($29)
addu $29,$29,$28
j block_16
#

block_16:
lui $26, 0xffff
ori $26,$26, 0xe2b7
#
#
#
ori $0,$26, 0xd416
#
#
#
sw $0, 0($29)
addu $29,$29,$28
j block_17
#

block_17:
lui $14, 0xffff
ori $14,$14, 0xe504
#
#
#
ori $15,$0, 2141
#
#
#
lb $14, -2117($15)
#
#
#
sw $14, 0($29)
addu $29,$29,$28
sw $15, 0($29)
addu $29,$29,$28
j block_18
#

block_18:
lui $19, 0xffff
ori $19,$19, 0xd257
#
#
#
ori $8,$0, 30066
subu $8,$0,$8
#
#
#
lb $19, 30127($8)
#
#
#
sw $19, 0($29)
addu $29,$29,$28
sw $8, 0($29)
addu $29,$29,$28
j block_19
#

block_19:
lui $23, 0xffff
ori $23,$23, 0x8395
#
#
#
ori $24,$0, 13769
subu $24,$0,$24
#
#
#
lb $23, 13799($24)
#
#
#
sw $23, 0($29)
addu $29,$29,$28
sw $24, 0($29)
addu $29,$29,$28
j block_20
#

block_20:
lui $12, 0x0000
ori $12,$12, 0x1733
#
#
#
ori $4,$0, 24393
#
#
#
lb $12, -24326($4)
#
#
#
sw $12, 0($29)
addu $29,$29,$28
sw $4, 0($29)
addu $29,$29,$28
j block_21
#

block_21:
lui $27, 0xffff
ori $27,$27, 0x98f4
#
#
#
ori $11,$0, 16440
subu $11,$0,$11
#
#
#
lbu $27, 16468($11)
#
#
#
sw $27, 0($29)
addu $29,$29,$28
sw $11, 0($29)
addu $29,$29,$28
j block_28
#

block_28:
lui $2, 0x0000
ori $2,$2, 0x2e29
#
#
#
ori $21,$0, 22215
#
#
#
lhu $2, -22129($21)
#
#
#
sw $2, 0($29)
addu $29,$29,$28
sw $21, 0($29)
addu $29,$29,$28
j block_29
#

block_29:
lui $22, 0xffff
ori $22,$22, 0xdb7e
#
#
#
ori $5,$0, 713
subu $5,$0,$5
#
#
#
sb $22, 757($5)
#
#
#
sw $22, 0($29)
addu $29,$29,$28
sw $5, 0($29)
addu $29,$29,$28
j block_30
#

block_30:
lui $25, 0x0000
ori $25,$25, 0x1bac
#
#
#
ori $17,$0, 27745
subu $17,$0,$17
#
#
#
sb $25, 27866($17)
#
#
#
sw $25, 0($29)
addu $29,$29,$28
sw $17, 0($29)
addu $29,$29,$28
j block_31
#

block_31:
lui $7, 0x0000
ori $7,$7, 0x2290
#
#
#
ori $3,$0, 6465
#
#
#
sb $7, -6299($3)
#
#
#
sw $7, 0($29)
addu $29,$29,$28
sw $3, 0($29)
addu $29,$29,$28
j block_32
#

block_32:
lui $17, 0x0000
ori $17,$17, 0x0f93
#
#
#
ori $20,$0, 4826
#
#
#
sb $17, -4659($20)
#
#
#
sw $17, 0($29)
addu $29,$29,$28
sw $20, 0($29)
addu $29,$29,$28
j block_33
#

block_33:
lui $10, 0x0000
ori $10,$10, 0x4cb4
#
#
#
ori $13,$0, 3571
#
#
#
sh $10, -3447($13)
#
#
#
sw $10, 0($29)
addu $29,$29,$28
sw $13, 0($29)
addu $29,$29,$28
j block_34
#

block_34:
lui $9, 0x0000
ori $9,$9, 0x64ed
#
#
#
ori $11,$0, 14172
#
#
#
sh $9, -13970($11)
#
#
#
sw $9, 0($29)
addu $29,$29,$28
sw $11, 0($29)
addu $29,$29,$28
j block_35
#

block_35:
lui $5, 0x0000
ori $5,$5, 0x2a25
lui $22, 0xffff
ori $22,$22, 0x9df5
#
#
#
add $15,$5,$22
#
#
#
sw $15, 0($29)
addu $29,$29,$28
j block_36
#

block_36:
lui $19, 0x0000
ori $19,$19, 0x5ab2
lui $4, 0x0000
ori $4,$4, 0x5fe4
#
#
#
add $0,$19,$4
#
#
#
sw $0, 0($29)
addu $29,$29,$28
j block_37
#

block_37:
lui $3, 0x0000
ori $3,$3, 0x0595
lui $18, 0xffff
ori $18,$18, 0xd204
#
#
#
sub $2,$3,$18
#
#
#
sw $2, 0($29)
addu $29,$29,$28
j block_38
#

block_38:
lui $15, 0x0000
ori $15,$15, 0x07ce
lui $6, 0x0000
ori $6,$6, 0x6c89
#
#
#
sub $0,$15,$6
#
#
#
sw $0, 0($29)
addu $29,$29,$28
j block_39
#

block_39:
lui $21, 0xffff
ori $21,$21, 0x8675
lui $8, 0xffff
ori $8,$8, 0xaa15
#
#
#
sll $1,$8, 1
#
#
#
sw $1, 0($29)
addu $29,$29,$28
j block_40
#

block_40:
lui $20, 0xffff
ori $20,$20, 0x8b2c
lui $10, 0xffff
ori $10,$10, 0x952b
#
#
#
sll $0,$10, 28
#
#
#
sw $0, 0($29)
addu $29,$29,$28
j block_41
#

block_41:
lui $24, 0xffff
ori $24,$24, 0xc528
lui $27, 0xffff
ori $27,$27, 0x8a3e
#
#
#
srl $3,$27, 25
#
#
#
sw $3, 0($29)
addu $29,$29,$28
j block_50
#

block_50:
lui $21, 0x0000
ori $21,$21, 0x0b42
lui $22, 0x0000
ori $22,$22, 0x0656
#
#
#
srav $0,$21,$22
#
#
#
sw $0, 0($29)
addu $29,$29,$28
j block_51
#

block_51:
lui $27, 0x0000
ori $27,$27, 0x1c84
lui $20, 0x0000
ori $20,$20, 0x1652
#
#
#
and $23,$27,$20
#
#
#
sw $23, 0($29)
addu $29,$29,$28
j block_52
#

block_52:
lui $5, 0xffff
ori $5,$5, 0x91d1
lui $7, 0x0000
ori $7,$7, 0x14a2
#
#
#
and $0,$5,$7
#
#
#
sw $0, 0($29)
addu $29,$29,$28
j block_53
#

block_53:
lui $6, 0x0000
ori $6,$6, 0x2195
lui $3, 0x0000
ori $3,$3, 0x3204
#
#
#
or $19,$6,$3
#
#
#
sw $19, 0($29)
addu $29,$29,$28
j block_63
#

block_63:
lui $21, 0x0000
ori $21,$21, 0x3bcd
#
#
#
addiu $15,$21, -0x1db9
#
#
#
sw $15, 0($29)
addu $29,$29,$28
j block_64
#

block_64:
lui $1, 0xffff
ori $1,$1, 0xdcaa
#
#
#
addiu $0,$1, -0x1d20
#
#
#
sw $0, 0($29)
addu $29,$29,$28
j block_65
#

block_65:
lui $27, 0xffff
ori $27,$27, 0xe46b
#
#
#
andi $1,$27, 0x702d
#
#
#
sw $1, 0($29)
addu $29,$29,$28
j block_66
#

block_66:
lui $16, 0xffff
ori $16,$16, 0xa2ef
#
#
#
andi $27,$16, 0x809d
#
#
#
sw $27, 0($29)
addu $29,$29,$28
j block_67
#

block_67:
lui $2, 0xffff
ori $2,$2, 0x9c8e
#
#
#
andi $0,$2, 0xebda
#
#
#
sw $0, 0($29)
addu $29,$29,$28
j block_68
#

block_68:
lui $11, 0x0000
ori $11,$11, 0x3226
#
#
#
xori $1,$11, 0x4913
#
#
#
sw $1, 0($29)
addu $29,$29,$28
j block_72
#

block_72:
lui $14, 0x0000
ori $14,$14, 0x2cb5
lui $5, 0xffff
ori $5,$5, 0xafef
#
#
#
slt $0,$14,$5
#
#
#
sw $0, 0($29)
addu $29,$29,$28
j block_73
#

block_73:
lui $16, 0xffff
ori $16,$16, 0x92f5
#
#
#
slti $17,$16, 0x3100
#
#
#
sw $17, 0($29)
addu $29,$29,$28
j block_76
#

block_76:
lui $6, 0xffff
ori $6,$6, 0x997e
#
#
#
sltiu $15,$6, 0x7cd5
#
#
#
sw $15, 0($29)
addu $29,$29,$28
j block_77

block_77:
lui $9, 0xffff
ori $9,$9, 0x9783
sltiu $3,$9, -0x2c64
sw $3, 0($29)
addu $29,$29,$28
j block_78

block_78:
lui $21, 0x0000
ori $21,$21, 0x0c7a
sltiu $0,$21, -0x211d

sw $0, 0($29)
addu $29,$29,$28
j block_79

block_79:
lui $5, 0xffff
ori $5,$5, 0xe441
lui $14, 0x0000
ori $14,$14, 0x1876

sltu $21,$5,$14

sw $21, 0($29)
addu $29,$29,$28
j block_80

block_80:
lui $13, 0xffff
ori $13,$13, 0x97eb
lui $7, 0x0000
ori $7,$7, 0x0adb

sltu $0,$13,$7

sw $0, 0($29)
addu $29,$29,$28
j block_81

block_81:
lui $9, 0x0000
ori $9,$9, 0x1227
lui $24, 0x0000
ori $24,$24, 0x6e19

bne $9,$24, jump_block_5

jump_back_5:

sw $9, 0($29)
addu $29,$29,$28
sw $24, 0($29)
addu $29,$29,$28
j block_82

jump_block_5:

j jump_back_5

block_82:
lui $11, 0x0000
ori $11,$11, 0x10e0
lui $11, 0xffff
ori $11,$11, 0xaf57

bne $11,$11, jump_block_6

jump_back_6:

sw $11, 0($29)
addu $29,$29,$28
sw $11, 0($29)
addu $29,$29,$28
j block_83

jump_block_6:

ori $30,$0, 8
j jump_back_6

block_83:
lui $27, 0x0000
ori $27,$27, 0x5a2e

blez $27, jump_block_7

jump_back_7:

sw $27, 0($29)
addu $29,$29,$28
j block_84

jump_block_7:

j jump_back_7

block_84:
lui $27, 0xffff
ori $27,$27, 0x992f

blez $27, jump_block_8

jump_back_8:

sw $27, 0($29)
addu $29,$29,$28
j block_85

jump_block_8:

ori $30,$0, 8
j jump_back_8

block_85:
lui $0, 0x0000
ori $0,$0, 0x7f6e

blez $0, jump_block_9

jump_back_9:

sw $0, 0($29)
addu $29,$29,$28
j block_86

jump_block_9:

ori $30,$0, 8
j jump_back_9

block_86:
lui $20, 0x0000
ori $20,$20, 0x4b0d

bgtz $20, jump_block_10

jump_back_10:

sw $20, 0($29)
addu $29,$29,$28
j block_87

jump_block_10:

j jump_back_10

block_87:
lui $20, 0xffff
ori $20,$20, 0x9907

bgtz $20, jump_block_11

jump_back_11:

sw $20, 0($29)
addu $29,$29,$28
j block_88

jump_block_11:

ori $30,$0, 8
j jump_back_11

block_88:
lui $0, 0x0000
ori $0,$0, 0x5e4d

bgtz $0, jump_block_12

jump_back_12:

sw $0, 0($29)
addu $29,$29,$28
j block_89

jump_block_12:

j jump_back_12

block_89:
lui $23, 0x0000
ori $23,$23, 0x6bda

bltz $23, jump_block_13

jump_back_13:

sw $23, 0($29)
addu $29,$29,$28
j block_90

jump_block_13:

j jump_back_13

block_90:
lui $23, 0xffff
ori $23,$23, 0xeb69

bltz $23, jump_block_14

jump_back_14:

sw $23, 0($29)
addu $29,$29,$28
j block_91

jump_block_14:

ori $30,$0, 8
j jump_back_14

block_91:
lui $0, 0x0000
ori $0,$0, 0x784a

bltz $0, jump_block_15

jump_back_15:

sw $0, 0($29)
addu $29,$29,$28
j block_92

jump_block_15:

ori $30,$0, 8
j jump_back_15

block_92:
lui $26, 0x0000
ori $26,$26, 0x2c79

bgez $26, jump_block_16

jump_back_16:

sw $26, 0($29)
addu $29,$29,$28
j block_93

jump_block_16:

ori $30,$0, 8
j jump_back_16

block_93:
lui $26, 0xffff
ori $26,$26, 0xf4aa

bgez $26, jump_block_17

jump_back_17:

sw $26, 0($29)
addu $29,$29,$28
j block_94

jump_block_17:

j jump_back_17

block_94:
lui $0, 0x0000
ori $0,$0, 0x77a5

bgez $0, jump_block_18

jump_back_18:

sw $0, 0($29)
addu $29,$29,$28
j block_95

jump_block_18:
ori $30,$0, 8
j jump_back_18

block_95:
j jump_block_19

jr_back_19:
addu $13,$0,$31
jalr $12,$13
jump_back_19:

j block_96

jump_block_19:
jal jr_back_19
ori $30,$0, 8
j jump_back_19

block_96:
lui $1, 0x24f6
ori $1,$1, 0xc67f
lui $27, 0x01d5
ori $27,$27, 0xd30e
mult $1,$27
j block_97

block_97:
lui $15, 0x08bd
ori $15,$15, 0xb6ce
lui $25, 0xdea9
ori $25,$25, 0x89cc
multu $15,$25
j block_102

block_102:
lui $2, 0xa524
ori $2,$2, 0xabdb
lui $0, 0x86c9
ori $0,$0, 0x941e
mthi $2
j block_103

block_103:
lui $10, 0x9730
ori $10,$10, 0xc54b
lui $0, 0x5f99
ori $0,$0, 0xc14a
mtlo $10
j block_104

block_104:
beq $0,$0, block_104