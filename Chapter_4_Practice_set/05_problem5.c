#include <stdio.h>

int main()
{
    int s = 0;
    int i = 1;
    while(i <= 10)
    {
        s += i;
        i++;
    }
    printf("The sum of first ten natural numbers is %d", s);

    return 0;
}