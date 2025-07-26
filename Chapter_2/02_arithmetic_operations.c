#include <stdio.h>

int main()
{
    int a = 6;
    int b = 3;
    int c = a + b;
    printf("The value of a is %d , value of b is %d and sum is %d\n", a, b, c);
    // Modulus operator is used to give remainder.
    printf("The remainder when a is divided by b is: %d", a%b);
    // This does not work for exponentiation in C
    // int e= a^b;
    return 0;
}