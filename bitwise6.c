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
            if(l == 1){
                printf("your num is power of 2\n");
           }else printf("your num is not power of 2\n");
            return 0;
            }
