#include <stdio.h>

int main()
{
    int s = 0;
    int i = 1;
    do
    {
        s += i;
        i++;
    }while(i <= 10);
    printf("The sum of first ten natural numbers is %d", s);

    return 0;
}