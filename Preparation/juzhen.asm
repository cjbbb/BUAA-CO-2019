.data
	kj:	.space,	10000
	space: .asciiz, " "
	nextline: .asciiz, "\n"
.macro getindex(%ans,%i,%j) #i Ϊ�У� jΪ��
	li $t8, 50
	mult	 %i, $t8
	mflo $t7
	add %ans, $t7, %j
	sll %ans, %ans, 2
.end_macro

.text
	li $v0, 5
	syscall
	move $s0,$v0 #����n
	li $v0, 5
	syscall 
	move $s1, $v0 #����m

	li $t0, 0 #ѭ������
	li $s5, -1
in_i:
	beq $t0,$s0,in_i_end 
	li $t1, 0
in_j:
	beq $t1, $s1, in_j_end
	li $v0, 5
	syscall
	getindex($t2,$t0,$t1)
	sw $v0, kj($t2)
	addi $t1, $t1, 1
	j in_j
in_j_end:
	addi $t0,$t0,1
	j 	in_i
in_i_end:
	li $t0, 0 #ѭ������
	li $t1, 0
	li $t2, 0
	
	move $t0, $s0
	addi $t0, $t0, -1
out_i:
	beq $t0,$s5, out_i_end
	move $t1, $s1
	addi $t1, $t1, -1
out_j:
	
	beq $t1,$s5, out_j_end
	getindex($t2,$t0,$t1)
	lw $s2, kj($t2)
	bne $s2, $0, print
	
	add $t1, $t1, -1
	j out_j
	
print:
	
	addi $a0, $t0, 1 #��
	li $v0, 1
	syscall
	la $a0, space #�ո�
	li  $v0, 4
	syscall
	add $a0, $t1, 1 #��
	li $v0, 1
	syscall
	la $a0, space #�ո�
	li  $v0, 4
	syscall
	move $a0, $s2 #��ֵ
	li 	$v0, 1
	syscall
	la $a0, nextline#$t����
	li $v0, 4
	syscall
	
	add $t1, $t1, -1
	j out_j
	
out_j_end:
	add $t0, $t0, -1
	j out_i
	
out_i_end:
	li $v0, 10
	syscall
	