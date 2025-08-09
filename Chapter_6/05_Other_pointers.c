#include <stdio.h>

int main()
{
    char c = 'U';
    char *cp = &c;
    printf("The address of c is %p\n", &c);
    printf("The address of c is %p\n", cp);

    float f = 5.6;
    float *fp = &f;
    printf("The address of f is %p\n", &f);
    printf("The address of f is %p\n", fp);
    return 0;
}