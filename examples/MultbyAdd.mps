	lda n ;load n into ACC 
	cma zero ; compare n to zeros , i.e product == 0
	


m:	.word $100
n:	.word $101
result:	.word $102
product:	.word $001
zero:	.word $000