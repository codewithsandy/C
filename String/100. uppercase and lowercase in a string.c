/* 100. Program to count total number of uppercase and lowercase in a string. */

#include<stdio.h>
#include<string.h>
#include<conio.h>

void main()
{
    int upper = 0, lower = 0;
    char ch[80];
    int i;
    clrscr();

    printf("Enter string : ");
    gets(ch);

    i = 0;
    while (ch[i] != '\0')
    {
        //uppercase counter
        if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            upper++;
        }
        
        //lowercase counter
        if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            lower++;
        }
       
        i++;
    }

    printf("\nUppercase Letters : %d", upper);
    printf("\nLowercase Letters : %d", lower);

    getch();
}