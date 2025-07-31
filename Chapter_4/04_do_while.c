#include <stdio.h>

int main()
{
    int i = 0;
    do 
    {
        printf("The value of i is %d\n", i+1);
        i++;

    }while(i < 10);
}
// while first checks the condition and then executes the code.
// do-while first executes the code and then checks the condition.