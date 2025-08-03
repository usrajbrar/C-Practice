#include <stdio.h>

void sum(int , int);

void sum(int a, int b)
{
    printf("Sum %d\n", a+b);
}
int main()
{
    /* int a = 2;
       int b = 5;
    
    printf("Sum %d\n", a+b);*/
    sum(2,5); // Function call

    /* int a1 = 15;
    int b1 = 20;

    printf("Sum %d\n", a1+b1);*/
    sum(15,20); // Function call

    /*int a2 = 45;
    int b2 = 42;

    printf("Sum %d\n", a2+b2);*/
    sum(45,42); // Function call

    /*int a3 = 105;
    int b3 = 52;

    printf("Sum %d\n", a3+b3);*/
    sum(105,52); // Function call
}