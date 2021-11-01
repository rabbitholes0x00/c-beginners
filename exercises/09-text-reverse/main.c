#include <stdio.h>
#include <string.h>

int main(){
	char dicoding[20] = "Programming Language";
	char reverse[20];
	int count = 0;

	for (int i = strlen(dicoding) - 1; i >= 0; i--){
		reverse[count++] = dicoding[i];
	}
	printf("%s\n", reverse);
	return 0;
}
