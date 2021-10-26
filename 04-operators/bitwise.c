#include <stdio.h>
// operators: &, |, ^, ~, <<, >>
// bitwise-assignment: &=, |=, ^=, <<=, >>=
// gcc bitwise.c -o bitwise; ./bitwise
int main(){
	// bitwise AND, value is false(0) when both are false
    int bit1 = 6, bit2 = 3;
    printf("AND %d & %d is %d\n", bit1, bit2, (bit1 & bit2));
    // 6 is 0.1.1.0
    // 3 is 0.0.1.1 [&]
    // 2 is 0.0.1.0 

	// bitwise OR
    printf("OR %d | %d is %d\n", bit1, bit2, (bit1 | bit2));
    // 6 is 0.1.1.0
    // 3 is 0.0.1.1 [|]
    // 7 is 0.1.1.1 

    // bitwise XOR, value is true(1) when the two values ​​are not equal.
	printf("XOR %d ^ %d is %d\n", bit1, bit2, (bit1 ^ bit2));
    // 6 is 0.1.1.0
    // 3 is 0.0.1.1 [^]
    // 7 is 0.1.0.1 

    // bitwise NOT or complement, reverse original binary value
    // Then represented by two's complement
	printf("NOT ~%d is %d\n", bit1, ~bit1);
    // 6 is 0.1.1.0
    // ~6 is 1.0.0.1 [~]

    // bitwise left-shift
	printf("L-S %d << 1 is %d\n", bit1, (bit1 << 1));
    // 0.1.[1].0
    // 1.[1].0.0 << 1 bit, added 0 from right to [left]

    // bitwise right-shift
	printf("R-S %d >> 1 is %d\n", bit1, (bit1 >> 1));
    // 0.1.[1].0
    // 0.0.1.[1] >> 1 bit, added 0 from left to [right]
}