/* 52. Program to accept number and print it's factorial. */

#include<stdio.h>
#include<conio.h>

void main()
{

    int i, fact=1, n;
    clrscr();

    printf("Enter number : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        fact = fact*i;
    }
    printf("Factorial is: %d", fact);
    getch();
}