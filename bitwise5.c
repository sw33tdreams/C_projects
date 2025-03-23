#include <stdio.h>
int main(){
    printf("enter num:   ");
    int num = 0;
    int l = 0;
    scanf("%d",&num);
    printf("enter n:   ");
    int n = 0;
    scanf("%d",&n);
    n = 1 << n - 1;
    num = num | n;
    printf("modyfied num is %d\n",num);
    return 0;}
