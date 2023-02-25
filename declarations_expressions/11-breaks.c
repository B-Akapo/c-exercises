#include <stdio.h>
/*
* Author: Bunmi Akapo
* Date: 25th Fenruary 2023
* Description - Program to read an amount (integer value) and break the amount into smallest possible number of bank notes
*/

int main(void)
{
    int num, total, hundred, fifty, twenty, ten, five, two, one;

    // as user to input number
    printf("Please enter a number: ");
    scanf("%d", &num);

    // check how many $100 note
    hundred = num / 100;
    total = hundred;
    printf("%d Note(s) of 100.00\n", total);

    // check how many $50 note
    fifty = (num % 100) / 50;
    total = fifty;
    printf("%d Note(s) of 50.00\n", total);

    // check how many $20 note
    twenty = ((num % 100) % 50) / 20;
    total = twenty;
    printf("%d Note(s) of 20.00\n", total);

    // check how many $10 note
    ten = (((num % 100) % 50) % 20) / 10;
    total = ten;
    printf("%d Note(s) of 10.00\n", total);

    // check how many $5 note
    five = ((((num % 100) % 50) % 20) % 10) / 5;
    total = five;
    printf("%d Note(s) of 5.00\n", total);

    // check how many $2 note
    two = (((((num % 100) % 50) % 20) % 10) % 5) / 2;
    total = two;
    printf("%d Note(s) of 2.00\n", total);

    // check how many $2 note
    one = ((((((num % 100) % 50) % 20) % 10) % 5) % 2) / 1;
    total = one;
    printf("%d Note(s) of 1.00\n", total);

    return 0;

    /*
    int amount;
    printf("Input the amount: ");
    scanf("%d", &amount);

    int note100 = amount / 100;
    amount %= 100;
    int note50 = amount / 50;
    amount %= 50;
    int note20 = amount / 20;
    amount %= 20;
    int note10 = amount / 10;
    amount %= 10;
    int note5 = amount / 5;
    amount %= 5;
    int note2 = amount / 2;
    amount %= 2;
    int note1 = amount;

    printf("There are:\n");
    printf("%d Note(s) of 100.00\n", note100);
    printf("%d Note(s) of 50.00\n", note50);
    printf("%d Note(s) of 20.00\n", note20);
    printf("%d Note(s) of 10.00\n", note10);
    printf("%d Note(s) of 5.00\n", note5);
    printf("%d Note(s) of 2.00\n", note2);
    printf("%d Note(s) of 1.00\n", note1);
    */
}

