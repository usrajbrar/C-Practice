#include <stdio.h>

int main()
{
    printf("Enter the year to check for a leap year: ");
    long n;
    scanf("%ld", &n);
    if((n % 4 == 0 && n % 100 !=0) || (n % 400 == 0))
    {
        printf("The year %ld is a leap year\n", n);
    }
    else
    {
        printf("The year %ld is not a leap year\n", n);
    }
}