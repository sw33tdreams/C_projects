#include <stdio.h>

int main(){
    printf("nter your num:   ");
    int l = 0;
    int num1 = 0;
    scanf("%d",&num1);
    for(int i = 31; i >= 0; i--){
       int num = num1 >> i;
        if(num & 1){
            l = l+1;}}
            printf("num of 1s is %d\n",l);
            return 0;
            }
