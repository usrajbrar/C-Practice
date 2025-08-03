#include <stdio.h>

int sum(int);

int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    return sum(n-1) + n;
}
int main()
{
    printf("Enter the nth Element: ");
    int n;
    scanf("%d", &n);

    int s = sum(n);
    printf("The Sum of First %d Natural Numbers is %d\n", n, s);

    return 0;
}