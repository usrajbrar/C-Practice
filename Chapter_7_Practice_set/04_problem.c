#include <stdio.h>

int main()
{
    int arr[10];

    printf("Enter the multiplication table of any number:\n");
    for(int i = 0 ; i < 10 ; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The Multiplication table of %d:\n", arr[0]);
    for(int i = 0 ; i < 10 ; i++)
    {
        printf("%d X %d = %d\n", arr[0], i+1, arr[i]);
    }
    return 0;
}