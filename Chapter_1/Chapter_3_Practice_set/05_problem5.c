#include <stdio.h>

int main()
{
    char c;
    printf("Enter a character in any case:");
    scanf("%c", &c);
    if(c >= 65 && c <= 90)
    {
        printf("The character %c is in uppercase\n");
    }
    if(c >= 97 && c <= 122)
    {
        printf("The character %c is in lowercase\n");
    }

    return 0;
}