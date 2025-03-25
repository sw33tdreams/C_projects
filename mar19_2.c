#include <stdio.h>

int main() {
	int a = 0;
	int b = 0;
	int l = 0;
	printf("enter 2 integer numbers:\n");
	scanf("%d %d",&a,&b);
	
	for(int i = a; i <= b; --i){
		if(i % 5 == 0){
			--l;
		}
	}
	printf("theresult is %d \n", l); 
	return 0;
}
