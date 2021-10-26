#include <stdio.h>
// operators: +, -, *, /, % (x + y)
// gcc arithmetic.c -o arithmetic; ./arithmetic
int main(){
	int x, y;

    printf("[input] x: ");
    scanf("%d", &x);
    printf("[input] y: ");
    scanf("%d", &y);
    printf("---\n");
    printf("[output] %d + %d: %d\n", x, y, x + y);
    printf("[output] %d - %d: %d\n", x, y, x - y);
    printf("[output] %d * %d: %d\n", x, y, x * y);
    printf("[output] %d / %d: %d\n", x, y, x / y);
    printf("[output] %d %% %d: %d\n", x, y, x % y);

    return 0;  
}