#include <stdio.h>
/*
Author: Bunmi Akapo
Date: 25th February 2023
Description: Program to convert a given integer (in seconds) to hours, minutes and seconds
*/

#define SECONDS_IN_HOUR 3600
#define MINUTES_IN_HOUR 60
int main(void)
{
    int time, hours, minutes, seconds;

    printf("Input time in seconds: ");
    scanf("%d", &time);

    hours = time / SECONDS_IN_HOUR;
    minutes = (time % SECONDS_IN_HOUR) / MINUTES_IN_HOUR;
    seconds = (time % SECONDS_IN_HOUR) - (((time % SECONDS_IN_HOUR) / MINUTES_IN_HOUR) * MINUTES_IN_HOUR);

    printf("In %d seconds there are: \n", time);
    printf("%d Hour(s), %d Minute(s), %d Second(s)\n", hours, minutes, seconds);

    return 0;

}