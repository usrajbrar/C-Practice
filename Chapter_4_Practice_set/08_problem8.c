#include <stdio.h>

int main()
{
    int i;
    int n = 8;
    int m;
    int s = 0;
    printf("Table of 8 :-\n");
    for(i = 1; i <= 10; i++)
    {
        m = n * i;
        s += m;
        printf("%d X %d = %d\n", n, i, m);
    }
    printf("The sum of first 10 multiples of 8 is %d\n", s);
}