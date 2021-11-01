#include <stdio.h>

int main(){
	int x, y;

	printf("input 1 - 3\n");
	printf("x? ");
	scanf("%d", &x);
	
	// switch(expr) {...} case v1: ... break; case v2: ... break; default: ...
	switch(x){
		case 1:
			printf("x is 1\n");
			break;
		case 2:
			printf("x is 2\n");
			break;
		case 3:
			printf("x is 3\n");
			break;
		default:
			printf("default\n");
	}
}