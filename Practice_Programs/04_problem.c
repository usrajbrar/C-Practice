#include <stdio.h>

int main()
{
    printf("Enter your income: ");
    int in;
    scanf("%d", &in);
    float tax;
    if(in > 250000)
    {
        if(in > 250000 && in < 500000)
        {
            tax = (in - 250000) * 0.05;
        }
        else if(in > 500000 && in < 1000000)
        {
            tax = (500000 - 250000) * 0.05 + (in - 500000) * 0.2;
        }
        else
        {
            tax = (100000 - 500000) * 0.2 + (500000 - 250000) * 0.05 + (in - 1000000) * 0.3;
        }
        printf("Tax on income is %.2f", tax);
    }
    else
    {
        printf("No Tax");
    }
}