#include <stdio.h>

int main(){
	int x, y;

	printf("x? ");
	scanf("%d", &x);
	
	printf("y? ");
	scanf("%d", &y);
	
	// if (expr) { ... } else if (expr) { ... } else { ... }  
	if (x < y) {
		printf("%d < %d\n", x, y);
	} else if (x == y) {
		printf("%d == %d\n", x, y);
	} else {
		printf("%d > %d\n", x, y);
	}
}