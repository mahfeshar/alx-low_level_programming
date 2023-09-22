extern printf

section .data
	hello db 'Hello, Holberton', 0
	format db '%s', 10, 0

section .text
	global main

main:
	push rbp
	mov rbp, rsp

	mov rdi, format
	mov rsi, hello
	xor eax, eax
	call printf

	mov eax, 0
	pop rbp
	ret
