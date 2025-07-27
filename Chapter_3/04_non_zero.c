#include <stdio.h>

int main()
{
    if(1)
    {
        printf("This integer inside if is executed!\n");
    }
    if(456)
    {
        printf("This long inside if is executed!\n");
    }
    if(8.736)
    {
        printf("This float inside if is executed!\n");
    }
    if('c')
    {
        printf("This character inside if is executed!\n");
    }
    if(0)
    {
        printf("This zero inside if is not executed\n");
    }
}