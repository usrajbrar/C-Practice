#include <stdio.h>

void swap(int* , int*);

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

    printf("The value of a is %d and b is %d", *a, *b);
}

int main()
{
    int a;
    int b;
    printf("Enter the value of a and b:-\n");
    scanf("%d", &a);
    scanf("%d", &b);
    swap(&a , &b);
}