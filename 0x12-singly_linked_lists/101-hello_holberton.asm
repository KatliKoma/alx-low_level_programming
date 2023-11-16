section .data
   hello_message db 'Hello, Holberton', 0

section .text
   global main
   extern printf
section .note.GNU-stack noexecstack
main:
   mov rdi, hello_message
   call printf

   mov rax, 60        ; syscall: exit
   xor rdi, rdi       ; status: 0
   syscall

