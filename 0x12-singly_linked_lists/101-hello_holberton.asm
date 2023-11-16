global _start

section .data
	msg: db "Hello, Holberton\n"

section .text
_start:
	mov rax, 1 ; sys_write
	mov rdi, 1 ; stdout
	mov rsi, msg ; message
	mov rdx, 14 ; message length
	syscall

	mov rax, 60 ; sys_exit
	mov rdi, 0 ; exit status
	syscall

