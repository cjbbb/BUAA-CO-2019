.text
	lui $2, 1
	lui $3,1
	lui $5, 10
  for:
  	beq $2,$5,end
  	addu $4,$4,$2
  	addu $2,$2,$3 
  	beq $0,$0,for
  end :