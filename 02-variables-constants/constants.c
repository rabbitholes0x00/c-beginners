#include <stdio.h>
// gcc constants.c -o constants; ./constants

// #define
#define NAME 'LIFZ' 
#define GENDER 'M' 
#define GPA 3.65

int main(){
	// const, types required
	const double KERNEL = 5.140;
	const char OS = 'KALI';
	const int RESOLUTION = 1366;
	// print #define
	printf("NAME: %s\n", NAME);
	printf("GENDER: %c\n", GENDER);
	printf("GPA %.2f\n", GPA);
	// print const
	printf("KERNEL: %f\n", KERNEL);
	printf("OS: %c\n", OS);
	printf("RESOLUTION: %d\n", RESOLUTION);
}


