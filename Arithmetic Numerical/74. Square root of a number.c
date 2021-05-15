/* 74. Program to find the square root of a number. */

#include<math.h>
#include<stdio.h>
#include<conio.h>
void main()
{
    double num, result;
    clrscr();
    printf("Enter number : ");
    scanf("%lf", &num);
    result = sqrt(num);
    printf("Square root of %lf is %lf.", num, result);
    getch();
}