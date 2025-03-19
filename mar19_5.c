#include <stdio.h>

int main() {
int i = 1;
int n = 0;
int l = 1;
printf("enter your integer num:\n");
scanf("%d",&n);

if(n == 0){
printf("n!=1");
}else {

do{
l = l * i;
i++;
}while(i <= n);

printf("n!=%d\n",l);
}
return 0; }
