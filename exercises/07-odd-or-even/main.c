#include <stdio.h>

int main(){
	int num = 7;
	if ((num % 2 == 0)){
		printf("%d adalah bilangan genap\n", num);
	} else {
		printf("%d adalah bilangan ganjil", num);
	}
	return 0;
}