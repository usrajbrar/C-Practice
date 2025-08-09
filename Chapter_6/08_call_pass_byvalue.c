#include <stdio.h>

int sum(int, int); // function prototype

// function definition
int sum(int a , int b) // Parameters or Formal parameters
{
    return a+b;
}

int main()  // function call
{
    int x = 8;
    int y = 7;
    int c = sum(x , y); // Arguments or Actual parameters
    printf("The sum of %d and %d is %d\n", x, y, c);
}
// This passing of arguments to the user-defined functions or function definitions is known as Call by value or Pass by Value.
// In this case the copy of the arguments or Actual parameters is passed as the formal parameters of the user defined function.
// So the values of the Actual parameters remains unchanged irrespective of the changes made in the values of the formal paramters.