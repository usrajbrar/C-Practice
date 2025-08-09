#include <stdio.h>

int sum(int* , int *);

int sum(int* a, int* b)// Address of Actual Parameters is passed to formal parameters.
{
    *a = 6;
    return (*a + *b);
}

int main()
{
    int x = 1;
    int y = 7;
    int s = sum(&x , &y);
    printf("The sum of %d and %d is %d\n", x, y, s);
    printf("The value of x is %d", x);

    return 0;
}
/* In C Language there is no call by reference.
   So, call by reference is made by using pointers.
   In call by reference the address of the actual parameters is passed to the formal parameters.
   So, any chnage in the address of the actual paramters in function definition can change the actual values.
   Which is being illustrated above as the value of x is changed in the output due to the changes made in the function definition.*/