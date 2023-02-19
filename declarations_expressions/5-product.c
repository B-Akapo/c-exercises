/*
Author: Bunmi Akapo
Date: 20th February 2023
Description: Program that accepts two integers from the user and calculate the product of the two integers
*/
#include <stdio.h>

int main(void)
{
    int num[2];
    int i = 0;
    int total;

    // loop user input
    while (i < 2) {
        printf("Please enter a number: ");
        scanf("%d", &num[i]);
        i++;
    }

    // total is equal to the product of the two numbers imputed by user.
    total = num[0] * num[1];

    printf("%d * %d = %d\n", num[0], num[1], total);
    
    return 0;
}