jal QAQ
subu $31, $0, $31
ori $2, 1
QAQ:
ori $1, 1

jal QAQ2
ori $31, 10
QAQ2:

jal QAQ3
lui $31, 10
QAQ3:
ori $10, 4
jal QAQ4
sw $31, 0($10)
QAQ4:
lw $t0, 0($10)

jal QAQ5
lw $t0, 0($10)
QAQ5:
ori $t1, 0

jal QAQ6
addu $0, $31, $31
j end
QAQ6:
jr $ra
end:
