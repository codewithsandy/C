/* 82. Program to add first and last digit of a number. */

#include<stdio.h>
#include<conio.h>
void main()
{
    int input, firstNum, lastNum;
    clrscr();

    printf("Enter number : ");
    scanf("%d", &input);

    lastNum = input % 10;
    firstNum = input;

    while (firstNum >= 10)
        firstNum /= 10;

    printf("\nAddition of first and last number : %d + %d = %d",
           firstNum, lastNum, firstNum + lastNum);
    getch();
}