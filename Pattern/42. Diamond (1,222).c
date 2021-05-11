/* 42. Program for Diamond of Numbers Pattern

            1
         2 2 2
      3 3 3 3 3
   4 4 4 4 4 4 4
5 5 5 5 5 5 5 5 5
   4 4 4 4 4 4 4
      3 3 3 3 3
         2 2 2
            1
				*/

#include<stdio.h>
#include<conio.h>

void main()
{
    int i, j, k;
    clrscr();

    for (i = 1; i <= 5; i++)
    {
        for (j = i; j < 5; j++)
        {
            printf(" ");
        }
        for (k = 1; k < (i * 2); k++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    for (i = 4; i >= 1; i--)
    {
        for (j = 5; j > i; j--)
        {
            printf(" ");
        }
        for (k = 1; k < (i * 2); k++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    getch();
}