#include <stdio.h>
// operators: &&, ||, !
// gcc logical.c -o logical; ./logical
int main(){
    int x, y;
    printf("notes: 1 for true or 0 for false\n");
    printf("[input] x: ");
    scanf("%d", &x);
    printf("[input] y: ");
    scanf("%d", &y);
    printf("---\n");
    printf("[output] x && y is %d\n", (x && y));
    printf("[output] x || y is %d\n", (x || y));
    printf("[output] !x: %d\n", (!x));
    printf("[output] !y: %d\n", (!y));
}

// AND
/*
    1 && 1 is 1
    1 && 0 is 0
    0 && 1 is 0
    0 && 0 is 0  
*/

// OR
/*
    1 && 0 is 1
    0 && 1 is 1
    1 && 0 is 1
    0 && 0 is 0  
*/

// NOT
/*
    !1 is 0
    !0 is 1
*/
