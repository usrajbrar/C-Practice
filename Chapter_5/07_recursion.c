#include <stdio.h>

int factorial(int);

int factorial(int a)
{
    /*factorial(3) = 3 X 2 X 1
    factorial(2) = 2 X 1
    factorail(1) = 1

    factorial(n) = factorial(n-1) * n */
    if (a == 1 || a == 0) // Base Case
    {
        return 1;
    }
    return factorial(a - 1) * a;
}
int main()
{
    int a;
    printf("Enter a Number: ");
    scanf("%d", &a);
    int f = factorial(a);
    printf("The Factorial of %d is %d\n.", a, f);
}
// A problem whose formula is recursive can be solved using recursion.
// Recursive function is terminated by a condition known as Base Case or Base Condition.
// An error or non - mention of base condition results in stack overflow or memory error in case of Recursion.