/*
Author: Bunmi Akapo
Date: 20th February 2023
Description: Program that calculates the average value of some items
*/

#include <stdio.h>

int main(void)
{
    float item1_quantity;
    float item1_weight;
    float item2_quantity;
    float item2_weight;
    float average;

    printf("Please enter the weight of the items: ");
    scanf("%f", &item1_weight);
    printf("Please enter the quantity of the items: ");
    scanf("%f", &item1_quantity);
    printf("Please enter the weight of the items: ");
    scanf("%f", &item2_weight);
    printf("Please enter the quantity of the items: ");
    scanf("%f", &item2_quantity);
 

    // calculate average
   average = ((item1_quantity * item1_weight) + (item2_quantity * item2_weight)) / (item1_quantity + item2_quantity);

    printf("Average Value = %f\n", average);
    return 0;
}