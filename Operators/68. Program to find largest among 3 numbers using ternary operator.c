/* 68. Program to find largest among 3 numbers using ternary operator. */


#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b, c, big;
    clrscr();
    printf("Enter 3 numbers : ");
    scanf("%d %d %d", &a, &b, &c);

    big = (a > b && a > c ? a : b > c ? b : c);
    printf("\nThe biggest number is : %d", big);
    getch();
}