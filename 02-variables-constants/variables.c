#include <stdio.h>

int main(){
	// T x = v
	// char[5] = l[1] i[2] f[3] z[4] + null('\0')[5]
	char Name[5] = "LIFZ";
	printf("Name = %s\n", Name);
	
	char name[] = "Mochammad";
	printf("name = %s\n", name);
	
	char $middleName[] = "Alif";
	printf("$middleName = %s\n", $middleName);
	
	// char 1name[5] = "lifz"; // error
	char last_name[] = "Kurniawan"; // snake case
	printf("last_name = %s\n", last_name);
		
	int age; // T x = v, y = v, one line same types
	float gpa = 3.65;
	printf("x = %d, y = %d, gpa = %.2f\n", x, y, gpa);
}