#include <stdio.h>

int main()
{
    int arr[3][10];
    int i;
    int j;

    for(i = 0 ; i < 3; i++)
    {
        for(j = 0 ; j < 10 ; j++)
        {
            if(i == 0)
            {
                arr[i][j] = 2 * (j+1);
            }
            if(i == 1)
            {
                arr[i][j] = 7 * (j+1);
            }
            if(i == 2)
            {
                arr[i][j] = 9 * (j+1);
            }
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