#include <stdio.h>

int main(){
int num = 0;
int n = 0;
printf("enter num:   ");
scanf("%d",&num);
printf("enter n:   ");
scanf("%d",&n);
num = num << n;
    printf("your num bazmapatkac 2^n is %d\n",num);
    num = num >> n;
    printf("your num bazmapatkac and bajanac n^n is %d\n",num);
return 0;}
