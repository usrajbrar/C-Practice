#include <stdio.h>

int main()
{
    printf("Enter the Temperature in Celsius:");
    int cel;
    scanf("%d", &cel);
    float farh = (cel * (9.0/5)) + 32;
    printf("The temperature of %d degree celsius is equal to %f degree fahrenheit", cel, farh);
}