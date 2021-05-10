/*  15. Program to print numbers from n to 1 using Do While Loop.  */

#include<stdio.h>
#include<conio.h>

void main()
{
    int i=1, n;
    clrscr();
    
    printf("Enter n : ");
    scanf("%d", &n);

    i=n;

    do
    {
        printf("%d\t",i);
        i--;
    } while (i >= 1);

    getch();
}