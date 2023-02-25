#include <stdio.h>
/*
Author: Bunmi Akapo
Date: 25th February 2023
Description: Program to convert a given integer (in days) to years, months and days, assumes that all months have 30 days and all years have 365 days
*/

#define DAYS_IN_YEAR 365
#define DAYS_IN_MONTH 30

int main(void)
{
    int user_input, years, months, days;

    printf("Enter number of days: ");
    scanf("%d", &user_input);

    years = user_input / DAYS_IN_YEAR;
    months = (user_input % DAYS_IN_YEAR) / DAYS_IN_MONTH;
    days = (user_input % DAYS_IN_YEAR) - (((user_input % DAYS_IN_YEAR) / DAYS_IN_MONTH) * DAYS_IN_MONTH);

    printf("In %d days there are: \n", user_input);
    printf("%d year(s), %d month(s), %d day(s)\n", years, months, days);

    return 0;

}