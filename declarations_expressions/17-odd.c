/*
Author: Bunmi Akapo
Date: 9th March 2023
Description: Program that reads 5 numbers and sums all odd values between them
*/
#include <stdio.h>

int main(void)
{
    int num[5];
    int i = 0;
    int sum = 0;

    while (i < 5)
    {
        printf("Please enter a number: ");
        scanf("%d", &num[i]);
        i++;
    }

    for (i = 0; i < 5; i++)
    {
        if (num[i] % 2 != 0)
        {
            sum += num[i];
        }
        
    }

    printf("Total sum of odd numbers is %d\n", sum);

    return 0;
}