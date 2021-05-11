/* 43. Program for pattern of diamond star outline

      *
    *   *
  *       *
*           *
  *       *
    *   *
      *
				*/

#include<stdio.h>
#include<conio.h>

void main()
{
    int i, j;
    clrscr();

    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j > i; j--)
        {
            printf(" ");
        }

        printf("*");

        for (j = 1; j < (i - 1) * 2; j++)
        {
            printf(" ");
        }

        if (i == 1)
        {
            printf("\n");
        }

        else
        { printf("*\n"); }
    }

    for (i = 4; i >= 1; i--)
    {
        for (j = 5; j > i; j--)
        {
            printf(" ");
        }

        printf("*");

        for (j = 1; j < (i - 1) * 2; j++)
        {
            printf(" ");
        }

        if (i == 1)
        {
            printf("\n");
        }
        else
        { printf("*\n"); }
    }

    getch();
}