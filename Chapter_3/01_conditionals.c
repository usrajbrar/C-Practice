#include <stdio.h>

int main()
{
    int age = 15;

    if(age < 10)
    {
        printf("Age is less than 10\n");
    }
    if(age%5 == 0)
    {
        printf("Age is a multiple of 5\n");
    }
    if(age >= 10)
    {
        printf("Age is greater than or equal to 10\n");
    }
}