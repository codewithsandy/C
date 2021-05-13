/* 99. Program to count frequency of characters in a string. */

#include<stdio.h>
#include<string.h>
#include<conio.h>

void main()
{
    char str[1500];
    int c = 0, count[26] = {0};
    clrscr();

    printf("Enter a string : ");
    gets(str);

    while (str[c] != '\0')
    {

        if (str[c] >= 'a' && str[c] <= 'z')
            count[str[c] - 'a']++;
        c++;
    }

    for (c = 0; c < 26; c++)
    {
        if (count[c] != 0)
            printf("%c occurs %d times in the string.\n", c + 'a', count[c]);
    }
    getch();
}