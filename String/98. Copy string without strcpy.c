/* 98. Program to copy string without using strcpy() function. */

#include<stdio.h>
#include<conio.h>

void strCopy(char[], char[]);

void main()
{

    char str1[100], str2[100];

    printf("Enter any string: ");
    scanf("%s", str1);

    strCopy(str1, str2);

    printf("After copying: %s", str2);

    getch();
}

void strCopy(char str1[], char str2[])
{

    int i = 0;

    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }

    str2[i] = '\0';

}