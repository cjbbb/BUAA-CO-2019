.data
	sp: .space 1024

.text
	li	$v0, 5 #读入n
	syscall
	
	move $s0, $v0 #s0 = v0
	li	$t0, 100 
	li	$t1, 4
	li	$t2, 400		
	div $s0, $t1	#hi 保存余数
	mfhi $s1		#s1保存余数应为0  （%4）
	div $s0, $t0
	mfhi $s2   	#s2保存余数应为!0 （%100）
	div $s0, $t2
	mfhi $s3 	#s3保存余数应为0 （%400）
	beq $s3,$0, put1
	beq $s1,$0,if
	li $a0, 0
	li $v0, 1
	syscall
	li $v0, 10
	syscall
	
if:
	bne $s2, $0,put1
	li $a0, 0
	li $v0, 1
	syscall
	li $v0, 10
	syscall
	
put1:
	li $a0, 1
	li $v0, 1
	syscall
	li $v0, 10
	syscall
	
	
	