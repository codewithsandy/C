/* 103. Program to check the palindrome of string. */

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char text[100];
    int begin, middle, end, length = 0;
    clrscr();

    printf("Enter the string to check if it is a palindrome : \n");
    gets(text);

    while (text[length] != '\0')
    {
        length++;
    }
    end = length - 1;
    middle = length / 2;

    for (begin = 0; begin < middle; begin++)
    {
        if (text[begin] != text[end])
        {
            printf("\nString is not a palindrome.");
            break;
        }
        end--;
    }
    if (begin == middle)
        printf("\nString is Palindrome.");

    getch();
}