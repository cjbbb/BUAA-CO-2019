.data 
	A: .space 1000
.text
	li $v0, 5
	syscall
	move $s0, $v0 #v0 = n
	li $t0, 0
	for_read:
	beq $t0, $s0, for_read_end
	li $v0,12
	syscall
	sb $v0, A($t0)
	addi $t0,$t0,1
	j for_read
	for_read_end:
	
	li $t0,0 #t0 = i
	addi $t1 ,$s0,-1 #t1 = n -1 
	for:
	slt $t2,$t0,$t1
	beq $t2,$0,for_end
	lb $s1, A($t0)
	lb $s2, A($t1)
	bne $s1,$s2,no
	addi $t0,$t0,1
	addi $t1,$t1,-1
	j for
	for_end:
	li $a0,1
	li $v0,1
	syscall
	li $v0,10
	syscall
	no:
	li $a0,0
	li $v0,1
	syscall
	li $v0,10
	syscall
