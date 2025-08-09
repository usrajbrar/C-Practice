#include <stdio.h>

int main()
{
    int i = 8;
    int *j = &i;

    printf("The Address of i is %p\n", &i);
    printf("The Address of i is %p\n", j);
    printf("The Address of j is %p\n", &j);

    printf("The Value at Address i is %d\n", i);
    printf("The value at Address i is %d\n", *(&i));
    printf("The Value at Address j is %d\n", *j);
}