#include <stdio.h>

int main()
{
    int r;
    int c;
    printf("Enter the no. of rows for an array:\n");
    scanf("%d", &r);
    printf("Enter the no. of columns for an array:\n");
    scanf("%d", &c);
    
    int arr[r][c];


    for(int i = 0; i < r; i++)// Inputing elements
    {
        for(int j = 0; j < c; j++)
        {
            printf("Enter the value of arr[%d][%d]\n", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Matrix:\n");// Matrix is also known as 2d-array
    for(int i = 0; i < r; i++)// Printing array elements
    {
        for(int j = 0; j < c; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}