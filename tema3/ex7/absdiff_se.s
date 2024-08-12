	.file	"absdiff_se.c"
	.text
	.globl	absdiff_se
	.type	absdiff_se, @function
absdiff_se:
.LFB0:
	.cfi_startproc
	endbr64
	cmpq	%rsi, %rdi
	jge	.L2
	addq	$1, lt_cnt(%rip)
	movq	%rsi, %rax
	subq	%rdi, %rax
	ret
.L2:
	addq	$1, ge_cnt(%rip)
	movq	%rdi, %rax
	subq	%rsi, %rax
	ret
	.cfi_endproc
.LFE0:
	.size	absdiff_se, .-absdiff_se
	.globl	ge_cnt
	.bss
	.align 8
	.type	ge_cnt, @object
	.size	ge_cnt, 8
ge_cnt:
	.zero	8
	.globl	lt_cnt
	.align 8
	.type	lt_cnt, @object
	.size	lt_cnt, 8
lt_cnt:
	.zero	8
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
