#include <stdio.h>

int main()
{
    int s = 0;
    int i;
    for(i = 1; i <= 10; i++)
    {
        s += i;
    }
    printf("The sum of first ten natural numbers is %d", s);

    return 0;
}