#include <stdio.h>

int main()
{
    int i = 6;
    int* j = &i;// Integer pointer that stores the address of i.
    int** k = &j;// Integer pointer that stores the address of j.
    
    printf("The value at Address i is %d\n", i);
    printf("The value at Address i is %d\n", *j);
    printf("The value at Address j is %d\n", *j);
    printf("The value at Address k is %d\n", **k);
}