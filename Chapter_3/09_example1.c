#include <stdio.h>

int main()
{
    int a;
    printf("Enter the marks to check your grade: ");
    scanf("%d", &a);
    if (a <= 100)
    {
        if (a > 90 && a < 100)
        {
            printf("Grade A\n");
        }
        else if (a > 80 && a < 90)
        {
            printf("Grade B\n");
        }
        else if (a > 70 && a < 80)
        {
            printf("Grade C\n");
        }
        else if (a > 60 && a < 70)
        {
            printf("Grade D\n");
        }
        else if (a > 50 && a < 60)
        {
            printf("Grade E\n");
        }
        else
        {
            printf("Grade F\n");
        }
    }
    return 0;
}