#include <stdio.h>
// gcc output-example.c -o awesome-output; ./awesome-output
int main(){
	// printf()
	printf("LIFZ\n"); // use printf() when print text with formatting
	printf("Software %s\n", "Engineer");
	// puts()
	puts("West, Jakarta"); // puts() always create new line
	puts("Indonesia"); // use puts() when just print text w.o formatting
	// putchar()
	putchar('M'); // putchar() specially print one character
	return 0;
}