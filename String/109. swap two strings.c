/* 109. Program to swap two strings. */

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
    char str1[100], str2[100], *temp;
    clrscr();

    printf("Enter first string : ");
    gets(str1);

    printf("Enter second string : ");
    gets(str2);

    printf("\nBefore Swapping : \n");
    printf("First string : %s\n", str1);
    printf("Second string : %s\n", str2);

    temp = (char *) malloc(100);

    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);

    printf("\nAfter Swapping : \n");
    printf("First string : %s\n", str1);
    printf("Second string : %s\n", str2);
    getch();
}