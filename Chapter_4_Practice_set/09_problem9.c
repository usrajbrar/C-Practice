#include <stdio.h>

int main()
{
    int i;
    int n;
    int f = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = n; i > 0; i--)
    {
        f *= i;
    }
    printf("Factorial of %d is %d\n", n, f);

    return 0;
}