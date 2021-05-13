/* 101. Program to calculate the length of string. */

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char a[100];
    int length;
    clrscr();
    printf("\nEnter a string to calculate it's length : ");
    gets(a);

    length = strlen(a);

    printf("\nLength of entered string is : %d", length);

    getch();
}