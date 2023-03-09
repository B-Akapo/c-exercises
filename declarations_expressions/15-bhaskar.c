#include <stdio.h>
#include <math.h>

/*
Author: Bunmi Akapo
Date: 9th March 2023
Description: Program to print the roots of Bhaskara’s formula from the given three floating numbers
*/

int main() {
    float a, b, c, x, root1, root2;
    printf("Input value of a: ");
    scanf("%f", &a);
    printf("Input value of b: ");
    scanf("%f", &b);
    printf("Input value of c: ");
    scanf("%f", &c);

    x = b * b - 4 * a * c;

    if (x < 0) {
        printf("Cannot calculate root.\n");
    } else {
        root1 = (-b + sqrt(x)) / (2 * a);
        root2 = (-b - sqrt(x)) / (2 * a);
        printf("Root1 = %f\n", root1);
        printf("Root2 = %f\n", root2);
    }
    return 0;
}
