#include <stdio.h>

float force_of_attraction(float);

float force_of_attraction(float m)
{
    float g = 9.8;
    float f = m * g;
    return f;
}
int main()
{
    float m;
    printf("Enter the Mass of the Body in Kilograms: ");
    scanf("%f", &m);
    float f = force_of_attraction(m);
    printf("The value of force of attraction on a body of mass %f kg by Earth is %f N\n", m, f);
}