/* 78. Program to swap two numbers without using third variable. */

#include<stdio.h>
#include<conio.h>

void main()
{
    int x = 10, y = 5;
    clrscr();
    printf("Enter x : ");
    scanf("%d", &x);
    printf("Enter y : ");
    scanf("%d", &y);

    printf("\nBefore Swapping : \n x = %d \n y = %d", x, y);

    // Code to swap x and y
    x = x + y;
    y = x - y;
    x = x - y;

    printf("\nAfter Swapping : \n x = %d \n y = %d", x, y);
    getch();
}