#include <stdio.h>

int main()
{
    int n1;
    printf("Enter Number 1: ");
    scanf("%d", &n1);
    int n2;
    printf("Enter Number 2: ");
    scanf("%d", &n2);
    int n3;
    printf("Enter Number 3: ");
    scanf("%d", &n3);
    int n4;
    printf("Enter Number 4: ");
    scanf("%d", &n4);

    int max = n1;

    if(n2 > max)
    {
        max = n2;
    }
    if(n3 > max)
    {
        max = n3;
    }
    if(n4 > max)
    {
        max = n4;
    }
    printf("The greatest number out of the numbers %d , %d , %d , %d is %d\n", n1, n2, n3, n4, max);
}