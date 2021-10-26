#include <stdio.h>

int main(){
	// scanf("%s", &var)
  char name[20], website[30];

  printf("name? ");
	scanf("%[^\n]s", name); // [^\n]s  make space 
  // scanf("%s", &name); // can't created space
  
  printf("website? ");
  scanf("%s", &website);
  
  printf("\n");
  printf("name: %s\n", name);
  printf("website: %s", website);
 

	// gets(var)
	// don't use 'gets()', why? cuz create buffer overflow problem in program. please use `fgets()`
	// char address[50], zip_code[50];
	
	// printf("address? ");
	// gets(address);
	
	// printf("zip_code? ");
	// gets(zip_code);
	
	// printf("\naddress: %s\n", address);
	// printf("zip_code: %s\n", zip_code);

	// fgets(var, size, stdin)
  char email[50], password[50];
  
  printf("email? ");
  fgets(email, sizeof(email), stdin); // sizeof()
  
  printf("password? ");
  fgets(password, sizeof(password), stdin);
  
  printf("\nemail: %s", email);
  printf("password: %s", password);
  
  return 0;
}