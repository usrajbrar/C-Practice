#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    int i = n;
    int f = 1;
    while(i > 0)
    {
        f *= i;
        i--;
    }
    printf("The factorial of %d is %d\n", n, f);

    return 0;
}