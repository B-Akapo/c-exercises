/*
Author: Bunmi Akapo
Date: 20th February 2023
Description: Program to calculate a bike’s average consumption from the given total distance (integer value) traveled (in km) and spent fuel (in liters, float number – 2 decimal point).
*/

#include <stdio.h>

int main(void)
{
    float distance;
    float fuel;
    float average;

    printf("Enter distance travelled in km: ");
    scanf("%f", &distance);
    printf("Enter total fuel used in liters: ");
    scanf("%f", &fuel);

    average = distance / fuel;

    printf("Average = %.2fkm/lt\n", average);

    return 0;
}