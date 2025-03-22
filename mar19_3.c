#include <stdio.h>

int main() {

	for (int i = a; i <= 100; i++ ){
	if(i % 3 == 0)
	printf("fizz\n");
	else if(i % 5 == 0)
	printf("bizz\n");
	else if(i % 3 == 0 && i % 5 == 0)
	printf("fizzbizz\n");
	else printf("%d\n",i);
	}
	return 0;
}
