/* 96. Program to convert string from uppercase to lowercase. */

#include<stdio.h>
#include<string.h>
#include<conio.h>

void main()
{
    char str[20];
    int i;
    clrscr();

    printf("Enter string : ");
    gets(str);

    for (i = 0; i <= strlen(str); i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] = (char) (str[i] + 32);
        }
    }

    printf("String in lowercase : %s", str);
    getch();
}