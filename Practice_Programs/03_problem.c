#include <stdio.h>

int main()
{
    printf("Enter the total income amount: ");
    float am;
    scanf("%f", &am);
    float al = am/100000;
    float t;
    float tm;
    if(al >= 2.5)
    {
        if(al > 2.5 && al < 5.0)
        {
            t = (am-250000) * 0.05;
            tm = (am - t) / 100000;
        }
        else if(al > 5.0 && al < 10.0)
        {
             t = (500000-250000) * 0.05 + (am-500000) * 0.2;
            tm = (am - t) / 100000;
        }
        else
        {
             t = (500000-250000) * 0.05 + (1000000-500000) * 0.2 + (am - 1000000) * 0.3;
            tm = (am - t) / 100000;
        }
        printf("The income tax to be paid: %f\n", t);
        printf("Total amount left after tax deduction: %fL\n", tm);
    }
    else
    {
        printf("No Tax:\n");
    }
}