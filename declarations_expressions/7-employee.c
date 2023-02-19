/*
Author: Bunmi Akapo
Date: 20th February 2023
Description: Program that  accepts an employee's ID, total worked hours of a month and the amount he received per hour. Print the employee's ID and salary (with two decimal places)
*/

#include <stdio.h>

int main(void)
{
    char employee_id[4];
    int hours_worked;
    float amount_paid;
    float total_salary;

    // take user input
    printf("Please enter your ID: ");
    scanf("%s", employee_id);
    printf("Please enter number of hours worked: ");
    scanf("%d", &hours_worked);
    printf("Please enter the amount paid: ");
    scanf("%f", &amount_paid);
    
    total_salary = hours_worked * amount_paid;

    printf("Employee id: %s\n", employee_id);
    printf("Salary = %.2lf\n", total_salary);
    return 0;
}