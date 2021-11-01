#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	srand(time(NULL));
	int random = rand() % 10;
	printf("%d\n", random);
	return 0;
}
