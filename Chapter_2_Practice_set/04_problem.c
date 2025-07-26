#include <stdio.h>

int main()
{
    int x = 2;
    int y = 3;
    int z = 3;
    int k = 1;

    printf(" The value of 3*x/y-z+k is %d", 3 * x / y - z + k);
    // In the first step their is Opeartor precedence (*/% --> +- --> =)
    // In the next step their is Operator association (Left --> Right)
    // Firstly  3 * x then 3*x / y then 3*x/y - z and then 3x/y-z + k
}