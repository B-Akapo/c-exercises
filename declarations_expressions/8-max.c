/*
Author: Bunmi Akapo
Date: 20th February 2023
Description: Program  that accepts three integers and find the maximum of three
*/

#include <stdio.h>

int main(void)
{
    int i = 0;
    int num[3];
    int max;

    while (i < 3) {
        printf("Please enter a number: ");
        scanf("%d", &num[i]);
        i++;
    }

    max = num[0];


    for (int i = 1; i < 3; i++) {
        if (num[i] > max) {
            max = num[i];
        }
    }

    printf("The maximum number is %d\n", max);

    return 0;
}