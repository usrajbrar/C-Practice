#include <stdio.h>

float temperature(float);

float temperature(float cel)
{
    float fah = (cel * ((float) 9 / 5)) + 32;
    return fah;
}
int main()
{
    float cel;
    printf("Enter the Temperature in degree Celcius: ");
    scanf("%f", &cel);
    float fah = temperature(cel);
    printf("The Conversion of Temperature in degree Celcius %f to degree Fahrenheit is %f\n",cel ,fah);

    return 0;
}