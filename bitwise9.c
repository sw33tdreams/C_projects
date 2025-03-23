#include <stdio.h>

int main(){
    int a = 0;
    int n = 0;
    printf("enter an int number:  ");
    scanf("%d",&a);
    printf("enter n:  ");
    scanf("%d",&n);
      int num1 = (a >> (n-1)) & 1;
        if(num1){
          printf("yes it is 1\n");
        }else printf("no it is not 1\n");
        return 0;
}
        
