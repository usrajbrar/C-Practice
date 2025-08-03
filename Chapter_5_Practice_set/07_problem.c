#include <stdio.h>

void pattern(int);

void pattern(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter the No. of Rows: ");
    scanf("%d", &n);
    pattern(n);
}