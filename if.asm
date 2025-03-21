;#include <stdio.h>
;int main(){
;int a,b;
;scanf("%d",a);
;scanf("%d",b);
;if(a > b)
;{
;printf("a > b");
;}
;else printf("a <= b");
;retutn 0;}

extern printf 
extern scanf

section .data
fmt db "%d",0
print1 db "a > b",10,0
print2 db "a <= b",10,0

section .bss
ab resq 2

section .text
global main
main:
push rbp
mov rbp,rsp

mov rdi,fmt
mov rsi,ab
call scanf

mov rdi,fmt
lea rsi,[ab + 8]
call scanf

ab0:
mov rax,[ab]
mov rbx,[ab + 8]
cmp rax,rbx
ja ab1
jmp ab2

ab1:
mov rdi,print1
call printf
jmp end

ab2:
mov rdi,print2
call printf
jmp end

end:
mov rsi,rbp
pop rbp
mov rax,0
ret
 
