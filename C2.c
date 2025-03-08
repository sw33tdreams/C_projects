#include <stdio.h>
int main() {
	char a = 0;
	printf("enter your lowercase letter ");
	scanf("%c",&a);
	a = a - 32;
	printf("the uppercase is %c",a);
	return 0;
}
