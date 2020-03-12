.data
	A:.space 256
	B:.space 256
	space :.asciiz " "
	nextline: .asciiz "\n"
	
.macro getindex(%ans,%x,%y)
	li $t8, 8
	mult %x,$t8
	mflo %ans
	add %ans,%ans,%y
	sll %ans,%ans,2
.end_macro

.text
	li $v0, 5
	syscall
	move $s0, $v0 #s0 = n
	li $t0, 0#t0 = i 
	li $t1, 0 #t1 = i
	for_1:
	beq $t0, $s0, for_1_end #t0为行,t1为列
	for_2:
	beq $t1, $s0, for_2_end
	li $v0, 5
	syscall 
	getindex($t2,$t0,$t1)
	sw $v0, A($t2)
	addi $t1,$t1,1
	j for_2
	for_2_end:
	addi $t0, $t0, 1
	li $t1, 0
	j for_1
	for_1_end:

	li $t0, 0#t0 = i 
	li $t1, 0 #t1 = i
	for_11:
	beq $t0, $s0, for_11_end #t0为行,t1为列
	for_22:
	beq $t1, $s0, for_22_end
	li $v0, 5
	syscall 
	getindex($t2,$t0,$t1)
	sw $v0, B($t2)
	addi $t1,$t1,1
	j for_22
	for_22_end:
	addi $t0, $t0, 1
	li $t1, 0
	j for_11
	for_11_end:
	
	li $s1,0#s1=temp
	li $t0,0#t0 = i 
	li $t1,0#t1 = j
	li $t2, 0 #t2 = k
	for_111:
		beq $t0, $s0, for_111_end
		for_222:
		beq $t1, $s0, for_222_end
			for_333:
				beq $t2,$s0,for_333_end
				getindex($t3,$t0,$t2)
				getindex($t4,$t2,$t1)
				lw $t5, A($t3)
				lw $t6, B($t4)
				mult $t5,$t6
				mflo $t5
				add $s1,$s1,$t5
				addi $t2,$t2,1
				j for_333
			for_333_end:
			li $t2, 0
			addi $t1, $t1, 1
			move $a0, $s1
			li $v0,1
			syscall
			
			la $a0,space
			li $v0,4
			syscall
			
			li $s1, 0
			j for_222
		for_222_end:
		li $t1, 0
		addi $t0,$t0,1
		
		la $a0,nextline
		li $v0,4
		syscall
		
		j for_111
	for_111_end:
	li $v0,10
	syscall
	