#include <stdio.h>

int main(){
	char name[] = "LIFZ";
	int age = 21;
	float gpa = 3.65;
	double latitude = 6.200000, longtitude = 106.816666;
	printf("name: %s, age: %d, gpa: %.2f, latitude: %.4f, longtitude: %.6f\n", name, age, gpa, latitude, longtitude);
}
// boolean? C doesn't have boolean types and normally uses integers for boolean testing.
/*
	symbols:
		* %s, show string value
		* %c, show character value
		* %d, show decimal value
		* %i, show decimal value
		* %f, show floating value
		* %o, show oktal value
		* %x, show heksadesimal value
		* \n, create new line
		* \t, create tabs
*/