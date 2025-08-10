#include <stdio.h>

int main()
{
    int arr[10];
    for(int i = 0 ; i < 10; i++)
    {
        printf("Enter the element at arr[%d]\n", i);
        scanf("%d", &arr[i]);
    }
    int* ptr = &arr[0]; // int* ptr = arr; (Pointing to the first element)

    printf("The first element of the Array is %d\n", *ptr);

    ptr = ptr + 2;
    printf("The third elements of the Array is %d\n", *ptr);
}