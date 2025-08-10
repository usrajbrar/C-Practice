#include <stdio.h>

int main()
{
    int a = 37;
    int* ptr1 = &a;

    printf("The Address of a is %u\n", ptr1);
    ptr1 = ptr1 + 2;
    printf("The value of ptr1 is %u\n", ptr1);
    printf("\n");

    int b = 38;
    int* ptr2 = &b;

    printf("The Address of a is %u\n", ptr2);
    ptr2 = ptr2 - 3;
    printf("The Value of ptr2 is %u\n", ptr2);
    printf("\n");
}