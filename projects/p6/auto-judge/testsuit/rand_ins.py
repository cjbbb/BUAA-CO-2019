from random import choice, randint, shuffle

instr = 280

ins_set = [
	('r', 'add {0}, {1}, {2}', 'reg', 'reg', 'reg'),
	('r', 'addu {0}, {1}, {2}', 'reg', 'reg', 'reg'),
	('r', 'sub {0}, {1}, {2}', 'reg', 'reg', 'reg'),
	('r', 'subu {0}, {1}, {2}', 'reg', 'reg', 'reg'),
	('r', 'and {0}, {1}, {2}', 'reg', 'reg', 'reg'),
	('r', 'or {0}, {1}, {2}', 'reg', 'reg', 'reg'),
	('r', 'xor {0}, {1}, {2}', 'reg', 'reg', 'reg'),
	('r', 'nor {0}, {1}, {2}', 'reg', 'reg', 'reg'),
	('r', 'sllv {0}, {1}, {2}', 'reg', 'reg', 'reg'),
	('r', 'srlv {0}, {1}, {2}', 'reg', 'reg', 'reg'),
	('r', 'srav {0}, {1}, {2}', 'reg', 'reg', 'reg'),
	('r', 'slt {0}, {1}, {2}', 'reg', 'reg', 'reg'),
	('r', 'sltu {0}, {1}, {2}', 'reg', 'reg', 'reg'),

	('i', 'addiu {0}, {1}, {2}', 'reg', 'reg', 'imm16'),
	('i', 'addi {0}, {1}, {2}', 'reg', 'reg', 'simm16'),
	('i', 'andi {0}, {1}, {2}', 'reg', 'reg', 'imm16'),
	('i', 'ori {0}, {1}, {2}', 'reg', 'reg', 'imm16'),
	('i', 'xori {0}, {1}, {2}', 'reg', 'reg', 'imm16'),
	('i', 'sll {0}, {1}, {2}', 'reg', 'reg', 'imm5'),
	('i', 'srl {0}, {1}, {2}', 'reg', 'reg', 'imm5'),
	('i', 'sra {0}, {1}, {2}', 'reg', 'reg', 'imm5'),
	('i', 'lui {0}, {1}', 'reg', 'imm16'),
	('i', 'slti {0}, {1}, {2}', 'reg', 'reg', 'simm16'),
	('i', 'sltiu {0}, {1}, {2}', 'reg', 'reg', 'simm16'),

	('i', 'srl {0}, {0}, 28\naddi {0}, {0}, 64\nandi {0}, {0}, 0xfffffffc\nlw {1}, {2}({0})', 'reg', 'reg', 'woff'),
	('i', 'sra {0}, {0}, 28\nandi {0}, {0}, 0xfffffffc\nlw {1}, {2}({0})', 'reg', 'reg', 'uwoff'),
	('i', 'srl {0}, {0}, 28\naddi {0}, {0}, 64\nlb {1}, {2}({0})', 'reg', 'reg', 'boff'),
	('i', 'sra {0}, {0}, 28\nlb {1}, {2}({0})', 'reg', 'reg', 'uboff'),
	('i', 'srl {0}, {0}, 28\naddi {0}, {0}, 64\nlbu {1}, {2}({0})', 'reg', 'reg', 'boff'),
	('i', 'sra {0}, {0}, 28\nlbu {1}, {2}({0})', 'reg', 'reg', 'uboff'),
	('i', 'srl {0}, {0}, 28\naddi {0}, {0}, 64\nandi {0}, {0}, 0xfffffffe\nlh {1}, {2}({0})', 'reg', 'reg', 'hoff'),
	('i', 'sra {0}, {0}, 28\nandi {0}, {0}, 0xfffffffe\nlh {1}, {2}({0})', 'reg', 'reg', 'uhoff'),
	('i', 'srl {0}, {0}, 28\naddi {0}, {0}, 64\nandi {0}, {0}, 0xfffffffe\nlhu {1}, {2}({0})', 'reg', 'reg', 'hoff'),
	('i', 'sra {0}, {0}, 28\nandi {0}, {0}, 0xfffffffe\nlhu {1}, {2}({0})', 'reg', 'reg', 'uhoff'),
	('i', 'srl {0}, {0}, 28\naddi {0}, {0}, 64\nandi {0}, {0}, 0xfffffffc\nsw {1}, {2}({0})', 'reg', 'reg', 'woff'),
	('i', 'sra {0}, {0}, 28\nandi {0}, {0}, 0xfffffffc\nsw {1}, {2}({0})', 'reg', 'reg', 'uwoff'),
	('i', 'srl {0}, {0}, 28\naddi {0}, {0}, 64\nsb {1}, {2}({0})', 'reg', 'reg', 'boff'),
	('i', 'sra {0}, {0}, 28\nsb {1}, {2}({0})', 'reg', 'reg', 'uboff'),
	('i', 'srl {0}, {0}, 28\naddi {0}, {0}, 64\nandi {0}, {0}, 0xfffffffe\nsh {1}, {2}({0})', 'reg', 'reg', 'hoff'),
	('i', 'sra {0}, {0}, 28\nandi {0}, {0}, 0xfffffffe\nsh {1}, {2}({0})', 'reg', 'reg', 'uhoff'),

	('m', 'mult {0}, {1}', 'reg', 'reg'),
	('m', 'multu {0}, {1}', 'reg', 'reg'),
#	('m', 'madd {0}, {1}', 'reg', 'reg'),
	('m', 'ori {1}, {1}, 1\ndiv {0}, {1}', 'reg', 'reg_no_zero'),
	('m', 'ori {1}, {1}, 1\ndivu {0}, {1}', 'reg', 'reg_no_zero'),

	('m', 'mfhi {0}', 'reg'),
	('m', 'mflo {0}', 'reg'),
	('m', 'mthi {0}', 'reg'),
	('m', 'mtlo {0}', 'reg'),
	('n', 'nop'),

	('b', 'beq {0}, {1}, {2}', 'reg', 'reg', 'taddr'),
	('b', 'bne {0}, {1}, {2}', 'reg', 'reg', 'taddr'),
	('b', 'bgez {0}, {1}', 'reg', 'taddr'),
	('b', 'bgtz {0}, {1}', 'reg', 'taddr'),
	('b', 'blez {0}, {1}', 'reg', 'taddr'),
	('b', 'bltz {0}, {1}', 'reg', 'taddr'),
	('j', 'j {0}', 'taddr'),
	('j', 'jal {0}', 'taddr'),
	('j', 'la $ra, {0}\njr $ra', 'taddr'),
	('j', 'la {1}, {0}\njr {1}', 'taddr', 'reg_no_zero'),
	('j', 'la $ra, {0}\njalr {1}, $ra', 'taddr', 'reg'),
#	 ('j', 'la {2}, {0}\njalr {1}, {2}', 'taddr', 'reg', 'reg_no_zero'),
]

shuffle(ins_set)

reg_set = [
	'$zero',
	'$t0', '$t1',
	 '$s0', 
	 '$a0', '$v0'
]

ds_set = [
	'arr1', 'arr2'
]

ts_set = ['N%d' % i for i in range(instr + 1)] + ['EXIT']

rand_func = {
	'reg': lambda line: choice(reg_set),
	'reg_no_zero': lambda line: choice(reg_set[1:]),
	'imm16': lambda line: randint(0, 2 ** 16 - 1),
	'simm16': lambda line: randint(- 2 ** 15, 2 ** 15 - 1),
	'woff': lambda line: randint(0, 2 ** 2 - 1) * 4,
	'hoff': lambda line: randint(0, 2 ** 3 - 1) * 2,
	'boff': lambda line: randint(0, 2 ** 4 - 1),
	'uwoff': lambda line: randint(0, 2 ** 2 - 1) * 4 + 64,
	'uhoff': lambda line: randint(0, 2 ** 3 - 1) * 2 + 64,
	'uboff': lambda line: randint(0, 2 ** 4 - 1) + 64,
	'taddr': lambda line: ts_set[randint(line + 2, instr + 1)],
	'daddr': lambda line: choice(ds_set),
	'imm5': lambda line: randint(0, 2 ** 2 - 1),
	'simm5': lambda line: randint(- 2 ** 4, 2 ** 4 - 1),
}

print('''
.data
.space 64
arr1: .space 64
arr2: .space 64
.space 64
''')

print('''
.text
''')

prev = ''
for i in range(instr):
	u = choice(ins_set)
	while u[0][0] in 'bj' and prev in 'bj':
		u = choice(ins_set)
	prev = u[0][0]
	if len(u) <= 2:
		ins = u[1]
	else:
		if u[0] == 'jalr':
			ins, arg = u[1], u[2:]
			args = list(map(lambda x: rand_func[x](i), arg))
			while args[-1] == args[-2]:
				args = list(map(lambda x: rand_func[x](i), arg))
			ins = ins.format(*args)
		else:
			ins, arg = u[1], u[2:]
			ins = ins.format(*map(lambda x: rand_func[x](i), arg))
	print('%s: %s' % (ts_set[i], ins))

print('%s: nop' % ts_set[instr])
print('%s:' % ts_set[-1])
print('beq $zero, $zero, %s\nnop' % ts_set[-1])
