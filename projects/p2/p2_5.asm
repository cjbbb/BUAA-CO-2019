.data
	symbol: .space 56
	array: .space 56
	space: .asciiz " "
	nextline: .asciiz "\n"
.text
	li $v0,5
	syscall 
	move $s0, $v0
	li $a0, 0
	jal fullarray
	li $v0, 10
	syscall
	
fullarray:
	move $s1, $a0 #S1 = index
	li $t0, 0
	slt $t1,$s1,$s0
	beq $t1, $0, return
	#else 
	for :
	beq $t0, $s0, for_end
	sll $t7,$t0,2
	lw $t2, symbol($t7)

	beq $t2,$0,for_continue
	#else
	addi $t0,$t0,1
	j for
	for_end:
	jr $31
	
	for_continue:
	addi $t2, $t0, 1
	sll $t3,$s1,2
	sw $t2, array($t3)
	li $t2,1
	sll $t3, $t0,2
	sw $t2, symbol($t3)
	subi $sp, $sp,12
	sw $t0, 0($sp)
	sw $s1,4($sp)
	sw $ra,8($sp)
	addi $a0, $s1,1
	jal fullarray
	
	#·µ»Ø
	lw $t0, 0($sp)
	lw $s1,4($sp)
	lw $ra,8($sp)
	addi $sp,$sp,12
	
	sll $t7, $t0,2
	sw $0, symbol($t7)
	addi $t0,$t0,1
	j for
	
	return:
	li $t2, 0#t2= i 
	for_return:
		beq $t2, $s0, for_return_end
			sll $t7,$t2,2
			lw $a0, array($t7)
			li $v0, 1
			syscall
			la $a0, space
			li $v0, 4
			syscall
		addi $t2,$t2,1
		j for_return
		for_return_end:
			la $a0, nextline
			li $v0, 4
			syscall
			jr $31
		
		
