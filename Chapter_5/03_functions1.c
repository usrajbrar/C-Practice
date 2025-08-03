#include <stdio.h>

int sum(int , int); // Function prototype

int sum(int a, int b) // Function Definition (Parameters are variable placeholders a and b)
{
    return a+b; // A function can return only one value at a time and is the last statement
}
int main() // built-in function , library function
{
    /* int a = 2;
       int b = 5;
    
    printf("Sum %d\n", a+b);*/
    int c = sum(2,5); // Function Calling (Arguments are the actual values passed to the user-defined function)
    printf("%d\n", c);

    /* int a1 = 15;
    int b1 = 20;

    printf("Sum %d\n", a1+b1);*/
    int c1 = sum(15,20); // Function Calling  (In line 21 the main function pauses and the user_defined function starts to execute and returns a value)
    printf("%d\n", c1); 

    /*int a2 = 45;
    int b2 = 42;

    printf("Sum %d\n", a2+b2);*/
    int c2 = sum(45,42); // Function Calling
    printf("%d\n", c2);

    /*int a3 = 105;
    int b3 = 52;

    printf("Sum %d\n", a3+b3);*/
    int c3 = sum(105,52); // Function Calling
    printf("%d\n", c3);
}