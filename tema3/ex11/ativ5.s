	.file	"ativ5.c"
	.text
	.globl	cond
	.type	cond, @function
cond:
.LFB0:
	.cfi_startproc
	endbr64
	leal	-65(%rdi), %eax
	cmpb	$25, %al
	jbe	.L3
	ret
.L3:
	leal	32(%rdi), %eax
	ret
	.cfi_endproc
.LFE0:
	.size	cond, .-cond
	.globl	cond1
	.type	cond1, @function
cond1:
.LFB1:
	.cfi_startproc
	endbr64
	testl	%edi, %edi
	setg	%cl
	testl	%esi, %esi
	setg	%al
	testb	%al, %cl
	jne	.L6
	ret
.L6:
	leal	(%rdi,%rsi), %eax
	movl	%eax, (%rdx)
	ret
	.cfi_endproc
.LFE1:
	.size	cond1, .-cond1
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
