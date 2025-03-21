;#include <stdio.h>
;
;int main() {
;	int x = 0;
;	printf("choose a number 1-3\n");
;	scanf("%d",&x);
;	
;	switch(x) {
;		case 1:
;			printf("you chose 1\n");
;		        break;
;		case 2:
;			printf("you chose 2\n");
;			break;
;		case 3:
;			printf("you chose 3\n");
;		        break;
;		defoult:
;			printf("please enter 1 or 2 or 3");
;		}
;	return 0;
;}

extern printf
extern scanf

section .data
txt0 db "choose a number 1-3",10,0
txt1 db "you chose 1",10,0 
txt2 db "you chose 2",10,0
txt3 db "you chose 3",10,0
txtd db "please enter 1 or 2 or 3",10,0
fmt db "%d",0

section .bss
scan resq 1

section .text
global main
main:
push rbp
mov rbp,rsp

mov rdi,txt0
call printf

mov rdi,fmt
mov rsi,scan
call scanf

a1:
mov rax,1
cmp rax,[scan]
je a11

a2:
mov rax,2
cmp rax,[scan]
je a22

a3:
mov rax,3
cmp rax,[scan]
je a33

a4:
jmp a44

a11:
mov rdi,txt1
call printf
jmp end

a22:
mov rdi,txt2
call printf
jmp end

a33:
mov rdi,txt3
call printf
jmp end

a44:
mov rdi,txtd
call printf
jmp end

end:
xor rax,rax
mov rsi,rbp
pop rbp
ret
