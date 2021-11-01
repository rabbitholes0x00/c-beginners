#include <stdio.h>
// operators =, +=, -=, *=, /=, %=
// gcc assignment.c -o assignment; ./assignment
int main(){
	int x = 10, y = 5;
    printf("x: %d\n", x);
    printf("y: %d\n", y);
    printf("---\n");
    printf("[output] x = x + y: %d\n", (x += y));
    printf("[output] x = x - y: %d\n", (x -= y));
    printf("[output] x = x * y: %d\n", (x *= y));
    printf("[output] x = x  / y: %d\n", (x /= y));
    printf("[output] x = x %% y: %d\n", (x %= y));

    return 0;
}