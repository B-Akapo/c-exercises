#include <stdio.h>
/*
Author: Bunmi Akapo
Date: 25th February 2023
Description: Program to chec the valuse of an inputed number
*/

int main(void)
{
    int p, q, r, s;
    int i = 0;
    int num[3];

    printf("enter an even number: ");
    scanf("%d", &p);

    while (i < 3) {
        printf("Please enter a positive number: ");
        scanf("%d", &num[i]);
        i++;
    }

    num[0] = q;
    num[1] = r;
    num[2] = s;

    if ( q > r && s > p && (r + s) > (p + q)) 
    {
        printf("Correct values\n");
    }
    else
    {
        printf("Wrong values\n");
    }

    return 0;

}