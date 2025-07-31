#include <stdio.h>

int main()
{
    float in;
    float tax;
    printf("Enter the income of the employee: ");
    scanf("%f", &in);
    if(in < 250000)
    {
        tax = 0;
    }
    else if(in > 250000 && in <= 500000)
    {
        tax = (in - 250000) * 0.05 + 0;;
    }
    else if(in > 500000 && in <= 1000000)
    {
        tax = (in - 500000) * 0.2 + 250000 * 0.05 + 0;
    }
    else
    {
        tax = (in - 1000000) * 0.3 + 500000 * 0.2 + 250000 * 0.05 + 0;
    }
    printf("The income tax on employee is %f\n", tax);
    return 0;
}
