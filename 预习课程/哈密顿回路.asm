#s0 = n, s1 = m, s2 = current , s3 = v
#s4 递归中的current s5 递归中的v
.data
	path:  .space, 32#path数组 path[8]
	visited: .space,32#visited数组 path[8]
	graph: 	.space, 256#graph双数组
.macro getindex(%ans,%x,%y)
	sll %ans, %x, 3 #ans = x * 8
	add %ans, %ans, %y
	sll %ans, %ans, 2 #ans = ans * 4j
.end_macro 
.text
	#读入m,n
	li $v0, 5
	syscall
	move $s0, $v0 #s0 = n
	li $v0, 5
	syscall
	move $s1, $v0 #s1 = m
	#数组读入图
	li $t0, 0
  for_in:
	beq $t0, $s1,for_in_end
	li $v0, 5
	syscall
	addi $t4, $v0, -1
	li $v0, 5
	syscall
	addi $t5, $v0, -1
	getindex($t6,$t4,$t5) #graph(x,y)
	li $t7, 1
	sw $t7,	graph($t6) #graph(x,y) = 1
	getindex($t8,$t5,$t4) 
	sw $t7, graph($t8) #graph(y,x) = 1
	addi $t0,$t0,1
	j for_in
  for_in_end:	
  	li $t0, 0
  	li $t1, 0
  	li $t2, 0
  	li $t4, 0
  	li $t5, 0
  	li $t6, 0 
  	li $s2, 0 #current 
  	
  	move $s3, $s0	 # v= n
  for_initial:# for(i=0;i<v_max;i++)path[i]=-1;
  	beq $t0, 9, for_initial_end
  	sll $t2, $t0, 2 #t2 = t0 * 4
  	li $t1, -1
  	sw $t1, path($t2)
  	addi $t0, $t0, 1
  	j for_initial
  for_initial_end:
  	li $t1, 0
  	li $t2, 0
  	li $t0, 0#初始化结束
  	sw $t1, path($s2)# path[current]=0;
  	li $t1, 1
  	sw $t1, visited($s2)# visited[current]=1; 因为s2 = 0所以不用 *4
  	addi $s2, $s2, 1#current ++
  	#s2 为current s3 为 v
  	#下面是递归
  	move $a0, $s2
  	move $a1, $s3
  	jal cycle#jal 可以保存pc+4 到$31
  	beq $v0, 0, put0
  #输出1
  	li $a0, 1
  	li $v0, 1
  	syscall
  	li $v0, 10
  	syscall
  	#输出0
  put0:
  	li $a0, 0
  	li $v0, 1
  	syscall
  	li $v0, 10
  	syscall
  	
  cycle: #递归函数名
  	subi $sp, $sp, 20
  	sw $ra, 0($sp)
  	sw $s4, 4($sp)
  	sw $s5, 8($sp)
  	sw $t0, 12($sp)
  	sw $s7, 16($sp)
  	
	bne $a0, $a1, work 
	#if current == v
	addi $t6, $a0, -1
	sll $t9, $t6, 2
	lw $t8, path($t9) #t 8 =path[current - 1]
	
	getindex($t9, $t8, $0) #[current - 1][0]
	lw $t6, graph($t9)
	bne $t6, 1, else  #if(graph[path[current-1]][0]==1)
	
	li $a0,1
	li $v0,1
	syscall 
	li $v0, 10 #结束
	syscall
	
  else :# if(graph[path[current-1]][0]==0)
  	li $v0, 0
  	lw $ra, 0($sp)
  	lw $s4, 4($sp)
  	lw $s5, 8($sp)
  	lw $t0, 12($sp)
  	lw $s7, 16($sp)
  	addi $sp, $sp, 20
  	jr $ra
  	
  work:
  	move $s4, $a0 #s4 = a0 = s2 = current
  	move $s5, $a1 #s5 = a1 = s3 = v
  	
  	
  	li $t0, 0 #初始化i;
  for_digui:
  	slt $t9, $t0, $s5
  	beq $t9, $0, for_digui_end  # t0 < v  
  	sll $t9, $t0, 2   # t9 = t0 * 4
  	lw $t1, visited($t9) #t1 = visited[i]
  	addi $t2, $s4, -1 # t2 = current - 1
  	sll $t9, $t2, 2
  	lw $t3, path($t9)  #t3 = path[current - 1];
  	getindex($t4, $t3, $t0)  #t4 = [path[current - 1]][i];
  	lw $t5, graph($t4)	 #t5 = graph[path[current-1]][i]
  	beq $t1, 0, if #visited[i] = 0
#else  
  for_digui_next:
  	addi $t0, $t0, 1
  	j for_digui
  	
  if:
  	bne $t5, 1, for_digui_next #if if(visited[i]==0&&graph[path[current-1]][i]==1)//找到合适的相连的点
  	sll $t9, $s4, 2 
  	sw $t0, path($t9) #path[current]= i 
  	li $t7, 1
  	sll $t9, $t0, 2
  	sw $t7, visited($t9) #visited[i] = 1
  	addi $a0, $s4, 1 #a0 = current + 1
  	move $a1, $s5 # s5 = v
  	
  	jal cycle #result=hamcycle(current+1,v);
  	#递归返回
  	
  	move $s7, $v0 #s7 = result （递归返回值）
  	beq  $s7, 0, tepan
  	
  	lw $ra, 0($sp)
  	lw $s4, 4($sp)
  	lw $s5, 8($sp)
  	lw $t0, 12($sp)
  	lw $s7, 16($sp)
  	addi $sp, $sp, 20
  	li $v0, 1
  	jr $31 #return 1
  tepan:
  	sll $t9, $s4, 2
  	sw $0, path($t9)
  	sll $t9, $t0, 2
  	sw $0, visited($t9)
  	
  	j for_digui_next
  for_digui_end:
  
  	lw $ra, 0($sp)
  	lw $s4, 4($sp)
  	lw $s5, 8($sp)
  	lw $t0, 12($sp)
  	lw $s7, 16($sp)
  	addi $sp, $sp, 20
  	li $v0, 0 #return 0
  	jr $31
