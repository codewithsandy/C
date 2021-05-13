/* 104. Program to check the palindrome of word using array. */

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char word[100];
    int length, counter;
    clrscr();

    printf("Enter a word : ");
    scanf("%s", word);
    length = strlen(word);
    int flag = 1;

    for (counter = 0; counter < length / 2 && flag; counter++)
    {
        if (word[counter] != word[length - counter - 1])
        {
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        printf("\n%s is a palindrome.", word);
    }
    else
    {
        printf("\n%s is NOT a palindrome.", word);
    }
    getch();
}