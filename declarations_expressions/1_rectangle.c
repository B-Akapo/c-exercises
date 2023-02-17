/*
Author: Oluwabunmi Akapo
Date: 17th February 2023
Description: to compute the perimeter and area of a rectangle.
*/

#include <stdio.h> 

int main()  
{
    // declare variables
    int lenght = 7;
    int width = 5;
    int perimeter = 2 * (lenght + width);
    int area = lenght * width;

    printf("The perimeter of rectangle = %d inches\n", perimeter);
    printf("The area of rectangle = %d inches\n", area);
}
