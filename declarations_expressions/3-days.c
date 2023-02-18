/*
Author: Bunmi Akapo
Date: 18th February 2023
Description: Program convert specified days into years, weeks and days. Note: Ignore leap year.
*/
#include <stdio.h>

#define DAYS_IN_A_YEAR 365
#define DAYS_IN_A_WEEK 7

int main(void)
{
   int num_of_days;
   int years;
   int weeks;
   int days;

   // take user input
   printf("Enter number of days: ");
   scanf("%d", &num_of_days);

   // calculate number of years
   years = num_of_days / DAYS_IN_A_YEAR;

   // calculate number of weeks
   weeks = (num_of_days % DAYS_IN_A_YEAR) / DAYS_IN_A_WEEK;

   // calculate number of days
   days = (num_of_days % DAYS_IN_A_YEAR) % DAYS_IN_A_WEEK;

   printf("In %d there are %d years, %d weeks and %d days\n", num_of_days, years, weeks, days);
}