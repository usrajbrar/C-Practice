#include <stdio.h>

int main()
{
    int i;
    int n;
    printf("Enter the value of n :");
    scanf("%d", &n);
    printf("The first %d natural numbers in reversed order :\n", n);
    for(i = n; i; i--)// condition i is checked and code is run until i is non-zero
    {
        printf("%d\n", i);
    }
    return 0;
}