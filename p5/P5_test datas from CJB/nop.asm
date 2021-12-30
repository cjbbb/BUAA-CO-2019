ori $t0,$0,12
sw $t0, 0($t0)
lw $t1,0($t0)
nop
beq $t1,$t0, next
nop
ori $2,$0,123
next:
ori $4,$0,123