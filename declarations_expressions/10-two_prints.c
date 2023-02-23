#include <stdio.h>
#include <math.h>
/*
Author: Bunmi Akapo
Date: 23rd February 2023
Description: Program to calculate the distance between the two points
*/

int main(void)
{
    int x1 = 25;
    int x2 = 35;
    int y1 = 15;
    int y2 = 10;
    double distance;
    double result;

    distance = (((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1))); 
    result = sqrt(distance);


    printf("%lf\n", result);

}