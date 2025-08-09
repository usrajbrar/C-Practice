#include <stdio.h>

int main()
{
    int i = 96;
    printf("The value at address i is %d\n", *(&i));
    // Ampersand (&i) results in the address of i but value at Address Operator also known as star operator display the value at that particular address.
}