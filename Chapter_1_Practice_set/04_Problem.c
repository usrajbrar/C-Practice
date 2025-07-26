#include <stdio.h>

int main()
{
    printf("Enter the Principal Amount:");
    int p;
    scanf("%d", &p);
    printf("Enter the Rate of Interest:");
    int r;
    scanf("%d", &r);
    printf("Enter the Time Period:");
    int t;
    scanf("%d", &t);
    float si = (float) (p * r * t) / 100;

    printf("Simple Interest for principal value %d , rate of interest %d , time period %d is %f\n", p, r, t, si);

}