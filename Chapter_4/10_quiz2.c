#include <stdio.h>

int main()
{
    int i = 0;
    int n;
    printf("Enter the nth number:\n");
    scanf("%d", &n);
    printf("The values of i:-\n");
    do
    {
        printf("%d\n", i+1);
        i++;
    }while(i < n);
}