/* 66. Program to find power of number. */

#include<stdio.h>
#include<conio.h>
void main()
{
    int base, expo;
    int value = 1;
    clrscr();
    printf("Enter base number : ");
    scanf("%d", &base);
    printf("Enter exponent number : ");
    scanf("%d", &expo);

    while (expo != 0)
    {
        // value = value * base;
        value *= base;
        --expo;
    }
    printf("Answer : %d", value);
    getch();
}