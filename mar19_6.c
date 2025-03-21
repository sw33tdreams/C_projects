#include <stdio.h>

int main() {
	int num = 0;
	printf("enter your number:\n");
	scanf("%d",&num);
	int a = num / 100;
	int b = (num - a*100) / 10;
	int c = num % 10;
	printf("%d, ",a);
	printf("%d, ",b);
	printf("%d, ",c);
	return 0;}
