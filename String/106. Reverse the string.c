/* 106. Program to reverse the string. */

#include<stdio.h>
#include<conio.h>
#include<string.h>

char *strrev(char *str)
{
    char *p1, *p2;

    if (!str || !*str)
        return str;
    for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
    {
        *p1 ^= *p2;
        *p2 ^= *p1;
        *p1 ^= *p2;
    }
    return str;
}

void main()
{
    char arr[100];
    clrscr();

    printf("\nEnter a string to reverse : ");
    gets(arr);

    strrev(arr);

    printf("\nReverse of entered string is : %s", arr);

    getch();
}