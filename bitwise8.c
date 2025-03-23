#include <stdio.h>

int main(){
    char a = 0;
    printf("enter a letter:   ");
    scanf("%c",&a);
    if(a > 96){
        a = a - 32;
        }else a = a + 32;
        printf("new letter is %c\n",a);
        return 0;}

