#include <stdio.h>

int main()
{
    int a = 0;
    int b = 1;
    printf("The value of a and b is %d\n", a && b);
    printf("The value of a or b is %d\n", a || b);
    printf("The value of not (a) is %d\n", !a);
    printf("The value of not (b) is %d\n", !b);

    if( a && b)// If both are 1.
    {
        printf("Both are true\n");
    }
    if(a)// If a is non-zero means 1.
    {
        if(b)// If b is non-zero means 1.
        {
            printf("Both are true\n");
        }
    }
}