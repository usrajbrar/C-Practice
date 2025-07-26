#include <stdio.h>

int main()
{
    printf("Enter the radius:");
    int r;
    scanf("%d", &r);
    double area = 3.1416 * r * r;
    printf("Area of the Cylinder of radius %d is %lf\n", r, area);
    printf("Enter the height:");
    int h;
    scanf("%d", &h);
    double volume = 3.1416 * r * r * h;
    printf("Volume of the Cylinder of radius %d and height %d is %lf\n", r, h, volume);
}