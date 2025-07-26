#include <stdio.h>

int main()
{
    printf("Enter a number to check divisibility by 97:\n");
    int n;
    scanf("%d", &n);
    if (n % 97 == 0)
    {
        printf("Number %d is divisible by 97\n", n);
    }
    else
    {
        printf("Number %d is not divisible by 97\n", n);
    }
}