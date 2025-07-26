#include <stdio.h>

int main()
{
    int a = 3;
    int b = 6;
    int c = 9;

    printf("The value of a*b/c is %d\n", (a * b) / c);// Operator Associativity (Left to Right for */%)
    printf("The value of 3 * a + 18 / b is %d\n", (3 * a) + (18 / b)); // Operator precedence (*/% --> +- --> =)
    // Always use paranthesis to avoid confusion
    return 0;
}