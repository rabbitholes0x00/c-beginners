#include <stdio.h>

int main(){
	int num = 9;

	if (num > 0){
		printf("positive\n");
	} else if(num == 0){
		printf("zero\n");
	} else {
		printf("negative\n");
	}
	return 0;
}