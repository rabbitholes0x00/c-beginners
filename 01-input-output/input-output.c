#include <stdio.h>
// gcc input-output.c -o input-output; ./input-output
int main(){
  // printf("%s", v); %s:format, ... is variable/value to format
	printf("Software %s\n", "Engineer"); // use printf() when print text with formatting
	// puts("text");
  puts("Indonesia"); // use puts() when just print text w.o formatting
	puts("West, Jakarta"); // puts() always create new line
  putchar('M'); // putchar() specially print one character
	printf("\n---\n");

  char name[20], website[30];
  // printf("[input] name: ");
  // // scanf("%s", &var); %s:format, &:get memory addr from var
	// scanf("%[^\n]s", name); // [^\n]s  make space 
  // printf("[input] website: ");
  // scanf("%s", &website); // can't created space
  // printf("\n---\n");
  // printf("[output] name: %s\n", name);
  // printf("[output] website: %s\n", website);
 
	// gets(var)
	// don't use 'gets()', why? cuz create buffer overflow problem in program. please use fgets()
	// gets(name);
  // gets(website);
  
	// fgets(var, size, stdin); var:variable, size:buffer-size, stdin:source-input
  char email[50], password[50];
  printf("[input] email: ");
  fgets(email, sizeof(email), stdin); // sizeof() meaning for takes the buffer size of the variable.
  printf("[input] password: ");
  fgets(password, sizeof(password), stdin);
  printf("---\n");
  printf("[output] email: %s", email);
  printf("[output] password: %s", password);
  
  return 0;
}