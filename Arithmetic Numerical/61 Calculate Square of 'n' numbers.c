/* 61. Program to calculate Square of 'n' numbers. */

#include<stdio.h>
#include<conio.h>
void main()
{
    int n, r, i, sqr=0;
    clrscr();
    printf("\nEnter the range : ");
    scanf("%d", &r);

    for (i = 1; i <= r; i++)
    {
        n = i;
        sqr = n * n;
        printf("\nSquare of %d is :  %d .", n, sqr);
    }
    getch();
}