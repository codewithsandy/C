/* 107. Program to reverse the string using pointer. */

#include<stdio.h>
#include<conio.h>

void main()
{
    char str_array[10000], *ptr;
    int i, len;
    clrscr();

    printf("Enter a string : ");
    gets(str_array);
    ptr = str_array;

    for (i = 0; i < 10000; i++)
    {
        if (*ptr == '\0')
            break;
        ptr++;
    }

    len = i;
    ptr--;
    printf("\nReversed String is : ");
    for (i = len; i > 0; i--)
    {
        printf("%c", *ptr--);
    }
    getch();
}