#include <stdio.h>

int main()
{
    printf("Enter any four numbers one by one:-\n");
    int n1;
    int n2;
    int n3;
    int n4;
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
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

    printf("The greatest Number is %d\n", max);

    return 0;
}