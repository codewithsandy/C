/* 20. Program to take number from user and print table of that number. */

#include<stdio.h>
#include<conio.h>

void main()
{
    int i, n;
    clrscr();

    printf("Enter number : ");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++)
        printf("%d × %d = %d\n", n, i, n*i);

    getch();
}