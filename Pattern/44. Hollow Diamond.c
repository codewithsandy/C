/* 44. Program for pattern of Hollow Diamond

* * * *   * * * *
* * *        * * *
* *             * *
*                  *
* *             * *
* * *        * * *
* * * *   * * * *
				*/
#include<stdio.h>
#include<conio.h>

void main()
{
    int i, j, k;
    clrscr();

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 6 - i; j++)
        {
            printf("*");
        }

        for (k = 1; k < i; k++)
        {
            printf("  ");
        } 

        for (j = 1; j <= 6 - i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    
    for (i = 2; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        for (k = 1; k <= 5 - i; k++)
        {
            printf("  ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    getch();
} 