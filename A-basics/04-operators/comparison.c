#include <stdio.h>
// comparison: <, >, <=, >=, ==, !=
// gcc comparison.c -o comparison; ./comparison
int main(){
int x, y;

    printf("[input] x: ");
    scanf("%d", &x);
    printf("[input] y: ");
    scanf("%d", &y);
    printf("---\n");
    printf("[output] %d > %d: %d\n", x, y, (x < y));
    printf("[output] %d < %d: %d\n", x, y, (x > y));
    printf("[output] %d <= %d: %d\n", x, y, (x <= y));
    printf("[output] %d >= %d: %d\n", x, y, (x >= y));
    printf("[output] %d == %d: %d\n", x, y, (x == y));
    printf("[output] %d != %d: %d\n", x, y, (x != y));

    return 0;	
}