#include <stdio.h>

int main()
{
    int arr[3][10];
    int i;
    int j;
    int n1; 
    int n2; 
    int n3;
    printf("Enter three custom inputs for Multiplication Tables:\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    int mul[3] = {n1 , n2 , n3};

    for(i = 0 ; i < 3; i++)
    {
        for(j = 0 ; j < 10 ; j++)
        {
            arr[i][j] = mul[i] * (j+1);
        }
    }

    for(i = 0 ; i < 3; i++)
    {
        for(j = 0 ; j < 10 ; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}