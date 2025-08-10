#include <stdio.h>

void input();
int counpos(int*, int);

void input()
{
    printf("Enter the Number of elements you want in an array: ");
    int n;
    scanf("%d", &n);
    int arr[n];

    printf("Enter the Array Elements:\n");
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d", &arr[i]);
    }

    int count = counpos(arr , 5);
    printf("The Number of positive integers in the array is %d\n", count);
}

int counpos(int arr[], int n)
{
    int c = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] > 0)
        {
            c++;
        }
    }
    return c;
}
int main()
{
    input();
    return 0;
}