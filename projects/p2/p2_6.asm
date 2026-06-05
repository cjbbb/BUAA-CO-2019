.data
	map: .space  400
	flag: .space 400
	X: .space 24
	Y: .space 24
.macro index(%ans, %i, %j, %n)#i 为行, j 为列
	mul %ans, %i,10
	add %ans, %ans, %j
	sll %ans, %ans, 2
.end_macro

.text
#初始化数组
	li $s1,4
	li $s2,8
	li $s3,12
	li $s0,0
	li $t0, 0
	sw $t0, X($s2)
	sw $t0, X($s3)
	sw $t0, Y($s0)
	sw $t0, Y($s1)
	li $t0, 1
	sw $t0, X($s1)
	sw $t0, Y($s3)
	li $t0, -1
	sw $t0, X($s0)
	sw $t0, Y($s2)
	li $s0, 0 #s0 = n
	li $s1, 0 #s1 = m
	li $s2, 0#x0
	li $s3, 0 #y0
	li $s4, 0 #x1
	li $s5, 0 #y1
	li $s6, 0#count 
	li $t8, 0#x
	li $t9, 0#y
	li $t0, 0#i
	li $t1, 0#j
	
	li $v0, 5
	syscall
	move $s0, $v0
	li $v0, 5
	syscall 
	move $s1, $v0

  li $t0,1
  addi $t2,$s0,1
  addi $t3,$s1,1
  li $t1,1
  for_1_read:
  beq $t0, $t2,for_1_read_end
  	for_2_read:
  	beq $t1, $t3, for_2_read_end
  	li $v0, 5
  	syscall
  	index($t4,$t0,$t1,$s0)
  	sw $v0, map($t4)
  	addi $t1, $t1, 1
  	j for_2_read
  	for_2_read_end:
  	addi $t0, $t0,1
  	li $t1,1
  	j for_1_read
  for_1_read_end:
  	li $v0, 5
  	syscall
  	move $s2, $v0
  	li $v0, 5
  	syscall
  	move $s3, $v0
  	li $v0, 5
  	syscall
  	move $s4, $v0
  	li $v0, 5
  	syscall
  	move $s5, $v0
  	
  	li $t4,1
  	index($t5,$s2,$s3,$s0)
  	sw $t4, flag($t5)
  	move $a0, $s2
  	move $a1, $s3
  	jal dfs
  	move $a0, $s6
  	li $v0,1
  	syscall
  	li $v0,10
  	syscall
  	
  	
  	
  	
  	
  dfs:
  move $t8, $a0 #t8 = x
  move $t9, $a1 #t9 = y
  bne $t8, $s4,else
  bne $t9, $s5, else
  addi $s6,$s6,1
  jr $31
  
  else:
  	li $t0,0
  	for:
  	beq $t0, 4 ,for_end
  	#超长的if
  	sll $t5, $t0,2
	lw $t1, X($t5)
	lw $t2, Y($t5)
	add $t1,$t1,$t8 #t1 = x+X[i]
	add $t2,$t2,$t9 #t2 = y+Y[i]
	index($t3,$t1,$t2,$s0) #t3=[t1][t2]
	lw $t4, map($t3)
	bne $t4,$0,for_next
	lw $t5, flag($t3)
	bne $t5,$0,for_next
	li $t6,1
	slt $t5, $s0, $t1 #n<x+X[i]
	beq $t5, $t6, for_next 
	slt $t5, $t1, $t6  # x+X[i]<1
	beq $t5,$t6,for_next
	slt $t5,$s1, $t2,  #m<Y+y[i]
	beq $t5, $t6,for_next
	slt $t5,$t2,$t6 #y+Y[i] <1
	beq $t5,$t6,for_next
	#if内容
		sw $t6,flag($t3)
		subi $sp,$sp,20
		sw $t0, 0($sp)
		sw $t8,4($sp)
		sw $t9, 8($sp)
		sw $t3,12($sp)
		sw $ra,16($sp)
		move $a0, $t1
		move $a1, $t2
		jal dfs
		#返回
		lw $t0, 0($sp)
		lw $t8,4($sp)
		lw $t9, 8($sp)
		lw $t3,12($sp)
		lw $ra,16($sp)
		addi $sp,$sp, 20
		sw $0, flag($t3)
		j for_next
	for_next:	
  	addi $t0,$t0,1
  	j for
  	for_end:
  	jr $31
  	
  	
  	
  	
  	
  	
  	
