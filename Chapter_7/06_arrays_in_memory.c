#include <stdio.h>

int main()
{
    int a[5];
    printf("Enter the values in the array:\n");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < 5; i++)
    {
        printf("The value at index %d and address %u is %d\n", i, &a[i], a[i]);
    }
    return 0;
}