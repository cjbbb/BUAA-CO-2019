.data
	A: .space 4000
	B: .space 4000
	nextline:	.asciiz "\n"
	space:	.asciiz " "
.macro getindex(%ans,%i,%j)
	mul %ans, %i,13
	add %ans,%ans,%j
	sll %ans,%ans,2	
.end_macro
.text
	li $v0, 5
	syscall
	move $s0,$v0
	li $v0, 5
	syscall
	move $s1,$v0
	li $v0, 5
	syscall
	move $s2,$v0
	li $v0, 5
	syscall
	move $s3,$v0
	li $t0,0
	li $t1,0
	for_A:
	beq $t0,$s0,for_A_end
		for_A_:
		beq $t1,$s1,for_A_end_
		 li $v0,5
		 syscall
		 getindex($t3,$t0,$t1)
		 sw $v0, A($t3)
		 addi $t1,$t1,1
		 j for_A_
		for_A_end_:
	addi $t0,$t0,1
	li $t1,0
	j for_A
	for_A_end:
	li $t0,0
	li $t1,0
	
	for_B:
	beq $t0,$s2,for_B_end
		for_B_:
		beq $t1,$s3, for_B_end_
		li $v0, 5
		syscall
		getindex($t3,$t0,$t1)
		sw $v0, B($t3)
		addi $t1,$t1,1
		j for_B_
		for_B_end_:
	addi $t0,$t0,1
	li $t1, 0

	li $s4,0
	j for_B
	for_B_end:
	#t0,1,2,3
	li $t0,0
	li $t1,0
	li $t2, 0
	li $t3, 0
	sub $t4,$s0,$s2
	addi $t4,$t4,1
	for_1:
	beq $t0,$t4,for_1_end
		li $t1, 0
		sub $t5,$s1,$s3
		addi $t5,$t5,1
		for_2:
		li $s4,0
		beq $t1,$t5,for_2_end
			move $t2,$t0
			add $t6,$t0,$s2
			for_3:
			beq $t2,$t6,for_3_end
				move $t3,$t1
				add $t7, $t1,$s3
				for_4:
					beq $t7,$t3,for_4_end
					
					getindex($s5,$t2,$t3)
					lw $s5 A($s5)
					sub $t8,$t2,$t0
					sub $t9,$t3,$t1
					getindex($s6,$t8,$t9)
					lw $s6 B($s6)
					mul $s7,$s5,$s6
					add $s4,$s4,$s7
					
				addi $t3,$t3,1
				j for_4
				for_4_end:
			addi $t2,$t2,1
			move $t3,$t1
			j for_3
			for_3_end:
		move $a0,$s4
		li $v0,1
		syscall
		la $a0,space
		li $v0,4
		syscall
		addi $t1,$t1,1
		move $t2,$t0
		j for_2
		for_2_end:
	la $a0, nextline
	li $v0,4
	syscall
	addi $t0,$t0,1
	li $t1,0
	j for_1
	for_1_end:
	li $v0,10
	syscall
