#include <stdio.h>

int main()
{
    int i = 0;
    /*for(i = 0; i < 5; i++)
    {
        printf("The value of i is %d\n", i);
    }*/

    /*while(i < 5)
    {
        printf("The value of i is %d\n", i);
        i++;
    }*/

    do
    {
        printf("The value of i is %d\n", i);
        i++;
    }while(i < 5);

    /* What can be done by a single type of loop can also be done with the help of other loops*/

    return 0;
}