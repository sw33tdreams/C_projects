#include <stdio.h>

int main(){
    int a = 0;
    int b = 0;
    int n = 0;
    int num1 = 0;
    int num2 = 0;
    printf("enter 2 int numbers:  ");
    scanf("%d",&a);
    scanf("%d",&b);
    for(int i = 31; i >= 0; i--){
        num1 = (a >> i) & 1;
        num2 = (b >> i) & 1;
        if(num1 & num2){
          a1 = 1*
        
