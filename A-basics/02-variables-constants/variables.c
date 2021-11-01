#include <stdio.h>
// gcc variables.c -o variables; ./variables
int main(){
	// char[5] = l[1] i[2] f[3] z[4] + null('\0')[5]
	char Name[5] = "LIFZ"; // OK
	printf("Name: %s\n", Name);
	
	// T x[] = v
	char name[] = "Mochammad"; // OK
	printf("name: %s\n", name);
	
	char $middleName[] = "Alif"; // camelCase
	printf("$middleName: %s\n", $middleName);
	
	// char 1name[5] = "lifz"; // error
	char last_name[] = "Kurniawan"; // snake_case
	printf("last_name: %s\n", last_name);
		
	int age = 21, zip_code = 11270 ; // T x = v, y = v, one line same types
	float gpa = 3.65;
	printf("age: %d, zip_code: %d, gpa: %.2f\n", age, zip_code, gpa);
}