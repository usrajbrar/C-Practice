#include <stdio.h>

int main()
{
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
    {
        printf("You entered in 1\n");
    }
    break;
    case 2:
    {
        printf("You entered in 2\n");
    }
    break;
    case 3:
    {
        printf("You entered in 3\n");
    }
    break;
    case 4:
    {
        printf("You entered in 4\n");
    }
    break;
    default:
    {
        printf("Input not matched\n");
    }
    }
}