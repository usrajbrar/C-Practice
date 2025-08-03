#include <stdio.h>

int change(int);

int change(int a)
{
    a = 77;
    return 0;
}
int main()
{
    int b = 22;
    change(b);
    printf("The value of b is %d\n", b);
}