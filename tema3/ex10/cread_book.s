cread:
    movq  (%rdi), %rax
    movl  $0, %edx
    testq %rdi, %rdi
    cmove %rdx, %rax
    ret