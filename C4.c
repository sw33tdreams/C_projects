#include <stdio.h>
int main() {
	double a = 0;
	printf("type your temperature in celsius ");
	scanf("%lf",&a);
	a = (a*9/5)+32;
	printf("your temperature in F is %lf",a);
	return 0;
}
