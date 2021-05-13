/* 105. Program to remove white space in string. */

#include<string.h>
#include<stdio.h>
#include<conio.h>

void main()
{
    int i = 0, j = 0, len;
    char buff[50];
    clrscr();

    printf("Enter String with white space : ");
    gets(buff);

    len = (int) strlen(buff);

    while (i != len)
    {
        if (buff[i] != ' ')
            buff[j++] = buff[i];
        i++;
    }
    buff[j] = 0;

    printf("\nYour String  is : %s.", buff);
getch();
}