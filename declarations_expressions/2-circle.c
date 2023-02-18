/*
Author: Bunmi Akapo
Date: 18th February 2023
Description: program to compute the perimeter and area of a circle with a given radius
*/
#include <stdio.h>

#define PI 3.14159

int main(void)
{
    float radius = 6;
    float perimeter = 2 * PI * radius;
    float area = PI * (radius * radius);

    printf("Perimeter of the Circle = %f inches\n", perimeter);
    printf("Area of the Circle = %f square inches\n", area);
}