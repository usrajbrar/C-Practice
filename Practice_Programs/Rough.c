#include <stdio.h>

int main()
{
    printf("Enter a character: ");
    char c;
    scanf(" %c", &c);
    if(c >= 65)
    {
        printf("yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}