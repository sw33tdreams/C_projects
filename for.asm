;for(int i = 0; i <= 100; i++)
;printf("%d",i);

extern printf
extern scanf

section .data
sum db "the sum is %d",10,0

section .text
global main
main:
push rbp
mov rbp,rsp

a1:
mov rcx,100
mov rax,0
mov rbx,0

a2:
inc rax
add rbx,rax
loop a2

a3:
mov rdi,sum
mov rsi,rbx
call printf

end:
mov rsi,rbp
pop rbp
xor rax,rax
ret
