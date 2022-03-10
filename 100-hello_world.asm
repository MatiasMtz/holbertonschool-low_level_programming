global main

section .data
   msg: db "Hello, World",0xa
   len: equ $-msg

section .text
main:
   mov eax, 4
   mov ebx, 1
   mov ecx, msg
   mov edx, len
   int 0x80
   mov al, 1
   mov ebx, 0
   int 0x80
