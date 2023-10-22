	SECTION .text

	global main
	extern printf
main:
	push rbp

	; prepare arguments for printf
	mov rdi, format
	mov rsi, message
	mov rax,0

	; call printf
	call printf

	pop rbp

	; Return from main
	mov rax, 0
	ret

	SECTION .data
message: db "Hello, Holberton", 0
format: db "%s", 10, 0



