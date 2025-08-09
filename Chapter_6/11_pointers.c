#include <stdio.h>

int sum1(int, int);
int sum2(int*, int*);
void swap(int*, int*);

int sum1(int a , int b)
{
    a = a + 7;
    return a + b;
}

int sum2(int* x, int* y)
{
    * x = *x + 7;
    return *x + *y;
}

void swap(int *m, int *n)
{
    int temp = *m;
    *m = *n;
    *n = temp;
}

int main()
{
    int i = 87;
    int* j = &i; // j is an integer pointer.
    int** k = &j; // k is an integer pointer to a pointer named j.

    char c = 'u';
    char* d = &c; // d is a character pointer.

    float f = 6.87;
    float* g = &f; // g is a float pointer.


    printf("The Address of (&) i is %p\n", &i);// Address of Opeartor (&).
    printf("The Address of (&) i is %p\n", j);
    printf("The Address of (&) i is %p\n", *k);
    printf("\n");
    
    printf("The Address of (&) j is %p\n", &j);
    printf("The Address of (&) j is %p\n", k);
    printf("\n");

    printf("The Address of (&) c is %p\n", &c);
    printf("The Address of (&) c is %p\n", d);
    printf("\n");

    printf("The Address of (&) f is %p\n", &f);
    printf("The Address of (&) f is %p\n", g);
    printf("\n");

    printf("The Address of (&) i is %u\n", &i);
    printf("The Address of (&) i is %u\n", j);
    printf("\n");

    printf("The Address of (&) c is %u\n", &c);
    printf("The Address of (&) c is %u\n", d);
    printf("\n");

    printf("The Address of (&) f is %u\n", &f);
    printf("The Address of (&) f is %u\n", g);
    printf("\n");

    printf("The Value AT Address (*) i is %d\n", i);// Value at Address (*) Operator.
    printf("The Value AT Address (*) i is %d\n", *j);
    printf("\n");

    printf("The Value AT Address (*) c is %c\n", c);
    printf("The Value AT Address (*) c is %c\n", *d);
    printf("\n");

    printf("The Value AT Address (*) f is %f\n", f);
    printf("The Value AT Address (*) f is %f\n", *g);
    printf("\n");

    int a = 1;
    int b = 6;
    
    int s1 = sum1(a,b);
    printf("The sum of a and b is %d\n", s1);// Call by value
    printf("The value of a remains same %d\n", a);// Copy of actual paramters are passed and they becomes formal paramters in the User-defined function. So, any change in the formal paramters do not reflect in the actual values.
    printf("\n");

    int x = 1;
    int y = 6;

    int s2 = sum2(&x,&y);
    printf("The sum of a and b is %d\n", s2);// Call by Reference
    printf("The value of x is changed %d\n", x);// The Address of actual parameters is passed as the formal parameters in the User-defined function. So, any change in the formal parameters reflects in the actual values. {In C language Call by Reference is implemented by pointers.}
    printf("\n");

    int m = 34;
    int n = 65;

    swap(&m,&n);
    printf("The value of m is %d\n", m);
    printf("The value of n is %d\n", n);// Swapping using call by Reference.

    return 0;
}