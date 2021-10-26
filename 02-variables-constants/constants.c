#include <stdio.h>
// gcc constants.c -o constants; ./constants

// #define
#define NAME "LIFZ" 
#define GENDER 'M' 
#define GPA 3.65

int main(){
	// const, types required
	const double KERNEL = 5.140;
	const char OS = 'L';
	const int RESOLUTION = 1366;
	// print #define
	printf("NAME: %s\n", NAME);
	printf("GENDER: %c\n", GENDER);
	printf("GPA %.2f", GPA);
	printf("\n---\n");
	// print const
	printf("KERNEL: %.3f\n", KERNEL);
	printf("OS: %c\n", OS);
	printf("RESOLUTION: %d\n", RESOLUTION);
}