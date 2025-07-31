#include <stdio.h>

int main()
{
    int i;
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(i = 10; i > 0; i--)
    {
        int m = n * i;
        printf("%d X %d = %d\n", n, i, m);
    }
    return 0;
}