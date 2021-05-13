/* 102. Program to calculate the length of string without using strlen() function. */

#include<stdio.h>
#include<conio.h>

void main()
{
    char s[1000], i;
    clrscr();

    printf("Enter a string : ");
    scanf("%s", s);


    for (i = 0; s[i] != '\0'; ++i);

    printf("Length of string : %d", i);
    getch();
}