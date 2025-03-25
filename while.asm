;while(i <= 100)
;printf("%d",i);

extern printf
extern scanf

section .data
txt1 db "enter your int num:",10,0
print db "%d",10,0
fmt db "%d",0

section .bss
scan resq 1

section .text
global main
main:
push rbp
mov rbp,rsp

mov rdi,txt1
call printf

mov rdi,fmt
mov rsi,scan
call scanf

mov rax,0
mov rax,[scan]

while:
mov rbx,10
cmp rax,rbx
jbe cycle
jmp end

cycle:
mov rdi,print
mov rsi,rax
call printf
inc rax
jmp while

end:
mov rsp,rbp 
pop rbp
xor rax,rax
ret
