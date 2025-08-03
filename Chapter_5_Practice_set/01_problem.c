#include <stdio.h>

float avg(int, int, int);

float avg(int a, int b, int c)
{
    float av = (float)(a + b + c) / 3;
    return av;
}
int main()
{
    int a;
    int b;
    int c;
    printf("Enter Number 1:-\n");
    scanf("%d", &a);
    printf("Enter Number 2:-\n");
    scanf("%d", &b);
    printf("Enter Number 3:-\n");
    scanf("%d", &c);
    float av = avg(a, b, c);
    printf("The Average of Three Numbers is %f\n", av);
}