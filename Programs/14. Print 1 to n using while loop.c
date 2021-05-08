/* 14. Program to print numbers from 1 to n using while loop. */

#include<stdio.h>
#include<conio.h>

void main()
{
    int i=1, n;
    clrscr();

    printf("Enter n : ");
    scanf("%d", &n);

    while(i<=n)
    {
        printf("%d\t",i);
        i++;
    }
    getch();
}