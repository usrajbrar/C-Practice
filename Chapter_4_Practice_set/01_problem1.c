#include <stdio.h>

int main()
{
    int i;
    int n;
    int m;
    printf("Enter the value of n :");
    scanf("%d", &n);
    for(i = 1; i <= 10; i++)
    {
        m = n * i;
        printf("%d X %d = %d\n", n, i, m);
    }
}