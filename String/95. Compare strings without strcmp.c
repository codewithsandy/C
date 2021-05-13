/* 95. Program to compare strings without using strcmp() function. */

#include<stdio.h>

int stringCompare(char[], char[]);

void main()
{
    char str1[100], str2[100];
    int compare;
    clrscr();
    printf("Enter first string : ");
    scanf("%s", str1);
    printf("Enter second string : ");
    scanf("%s", str2);

    compare = stringCompare(str1, str2);

    if (compare == 1)
        printf("\nBoth strings are equal.");
    else
        printf("\nBoth strings are not equal.");
    getch();
}

int stringCompare(char str1[], char str2[])
{
    int i = 0, flag = 0;

    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            flag = 1;
            break;
        }
        i++;
    }

    if (flag == 0 && str1[i] == '\0' && str2[i] == '\0')
        return 1;
    else
        return 0;
}