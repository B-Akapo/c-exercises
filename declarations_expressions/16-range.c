/*
Author: Bunmi Akapo
Date: 9th March 2023
Description: Program that reads an integer and checks the specified range to which it belongs.
*/
#include <stdio.h>

int main(void)
{
    int num;

    printf("Please enter a number: ");
    scanf("%d", &num);

    if (num >= 0 && num <= 20)
    {
        printf("Range [0, 20]\n");
    }
    else if (num  > 20 && num <= 40)
    {
        printf("Range [20, 40]\n");
    }
    else if (num  > 40 && num <= 60)
    {
        printf("Range [40, 60]\n");
    }
    else if (num  > 60 && num <= 80)
    {
        printf("Range [60, 80]\n");
    }
    else 
    {
        printf("Please pick a number between 0 and 80\n");
    }

    return 0;
}