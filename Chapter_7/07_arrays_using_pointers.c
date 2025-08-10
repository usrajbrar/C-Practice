#include <stdio.h>

int main()
{
    int marks[4]= {34, 56, 45, 21};
    int* ptr = &marks[0]; // (same in case of pointers) int* ptr = marks 

    for(int i = 0; i < 4; i++)
    {
        printf("The value at index %d is %d\n", i, *ptr);
        ptr++;
    }

    /*for(int i = 0; i < 4; i++)
    {
        printf("The value at index %d is %d\n", i, marks[i]);
    }*/
    return 0;
}