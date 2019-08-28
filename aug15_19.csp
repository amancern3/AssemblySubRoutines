	.equ array_size,4

	lda# $0
	ldx# $0

loop:	cmx	max
	jgt end
	ada+ ones
	adx#	1
	jmp loop

end:	sta result
	hlt

ones:	.blkw array_size,1
max:	.word array_size - 1
result:	.word 0