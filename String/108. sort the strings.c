/* 108. Program to sort the strings. */

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    int i, j, n;
    char str[20][20], temp[20];
    clrscr();

    printf("Enter the number of string to be sorted : ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
        gets(str[i]);

    for (i = 0; i <= n; i++)
        for (j = i + 1; j <= n; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }

    printf("\nSorted string :");
    for (i = 0; i <= n; i++)
    {
        puts(str[i]);
    }
    getch();
}