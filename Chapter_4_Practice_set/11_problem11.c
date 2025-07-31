#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int i;
    int c = 0;
    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            c++;
        }
    }
    if(c == 2)
    {
        printf("The number %d is a prime number\n", n);
    }
    else
    {
        printf("The number %d is not a prime number\n", n);
    }

    return 0;
}