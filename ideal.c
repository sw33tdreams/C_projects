#include <stdio.h>

int main() {
	int num = 0;
	int sum = 0;
	printf("enter an integer number to be examined:   ");
	scanf("%d",&num);
	for(int i = 1; i <= num/2; i++){ 
		if(num % i == 0){
			sum = sum + i;
		}}
	if(sum == num){
	printf("your number is perfect!!!\n");
	}else printf("your number is not perfect...\n");
return 0;}

