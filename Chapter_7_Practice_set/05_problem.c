#include <stdio.h>

void input();
void rev(int* , int);
void printarr(int*, int);

void input()
{
    int n;
    printf("Enter the Number of Array Elements:\n");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the Array Elements:\n");
    for(int i = 0; i < n ; i++)
    {
        scanf("%d", &arr[i]);
    }

    rev(arr , n);
    printarr(arr , n);
}

void rev(int arr[] , int n)
{
    for(int i = 0 ; i < n/2 ; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
}

void printarr(int arr[] , int n)
{
    printf("Reversed Array:\n");
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d\n", arr[i]);
    }
}

int main()
{
    input();

    return 0;
}

/* eg arr[6] = {1 , 2 , 3 , 4 , 5 , 6}
      arr[0] = 1;
      arr[1] = 2;
      arr[2] = 3;
      arr[3] = 4;
      arr[4] = 5;
      arr[5] = 6; 
      
      Inorder to reverse an array, We are swapping the array elements:-
      
      1 - 6 --> arr[0] - arr[5]
      2 - 5 --> arr[1] - arr[4]   From (i = 0 to i < n/2)
      3 - 4 --> arr[2] - arr[3]
      
      n (no. of elements) = 6
      i <--> n-i-1 */

      /* Code For Swapping
         int a , b , temp;
         
         temp = a;
         a = b;
         b = temp;  */