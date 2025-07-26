#include <stdio.h>

int main()
{
    int a = 9;
    int b = 2;
    float c = a / b;
    // int and int --> int
    // int and float --> float
    // float and float --> float
    printf("The value of a/b is %f\n", c);
    int d = 6.7;
    // demotion
    printf(" The value of d is %d\n", d);
    float e = 9;
    // promotion
    printf("The value of e is %f\n", e);
    return 0;
}