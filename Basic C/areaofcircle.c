// Area of circle

#include <stdio.h>
void main()
{
    int a,b,c;

    float pi = 3.14, radius, area;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    area = pi * radius * radius;
    printf("Area of circle = %.2f\n", area);
}