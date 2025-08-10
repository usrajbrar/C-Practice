#include <stdio.h>

int main()
{
    int S[4] = {2, 3, 6, 7};

    printf("The Fourth element of the array is %d\n", *(S+3));// It will not point to third element, it will point to fourth element because in an array index starts from zero.
    return 0;
}