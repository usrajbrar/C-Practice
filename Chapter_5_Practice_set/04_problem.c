#include <stdio.h>

int fibonacci(int n)
{
    if(n==1 || n==2)
    {
        return n-1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}
int main()
{
    // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 ...
   // fibonacci(n) = fibonacci(n-1) + fibonacci(n-2)
   printf("Enter the nth element: ");
   int n;
   scanf("%d", &n);
   int fib = fibonacci(n);
   printf("The %dth element of fibonacci series is %d\n", n, fib);
}