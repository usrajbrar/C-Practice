#include <stdio.h>

int main()
{
    int i = 1;
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int c = 0;
    do
    {
        if(n % i == 0)
        {
            c++;
        }
        i++;
    }while(i <= n);

    if(c == 2)
    {
        printf("The number %d is a prime number\n", n);
    }
    else
    {
        printf("The number %d is not a prime number\n", n);
    }
}