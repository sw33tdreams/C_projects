#include <stdio.h>

int main(){
    int mask = 0;
    int n = 0;
    int num = 0;
    printf("enter mask:   ");
    scanf("%d",&mask);
    printf("enter number:   ");
    scanf("%d",&num);
    printf("enter n:   ");
    scanf("%d",&n);
    mask = (mask << n) & num;
    printf("modyfied mask is %d",mask);
    return 0;}
