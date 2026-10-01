section .data
	msg    db  "Hello, ALX", 10
	msglen equ $ - msg

section .text
	global main

main:
	push    rbp
	mov     rbp, rsp
	mov     rdi, msg
	mov     rsi, msglen
	mov     rdx, 1
	mov     eax, 0
	call    printf
	pop     rbp
	ret
