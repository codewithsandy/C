/* 65. Program to accept two integer numbers and print the GCD(Greatest Common Divisor). */

#include<stdio.h>
#include<conio.h>
void main()
{
    int x, y, m, i;
    clrscr();
    printf("Enter 1st number : ");
    scanf("%d", &x);
    printf("Enter 2nd number : ");
    scanf("%d", &y);

    if (x > y)
        m = y;
    else
        m = x;

    for (i = m; i >= 1; i--)
    {
        if (x % i == 0 && y % i == 0)
        {
            printf("GCD of two number is : %d", i);
            break;
        }
    }
    getch();
}