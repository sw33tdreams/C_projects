#include <stdio.h>

int main() {
	int num = 0;
	int i = 0;
	int l = 0;
	printf("enter an int number:   ");
	scanf("%d",&num);
	for(i = 1; i <= num; i++){
		for(l = 1; l <= i; l++){
			printf("%d",i);}
		printf("\n");}
	return 0;}

