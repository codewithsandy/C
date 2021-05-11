/* 48. Reverse star pyramid

	* * * * * * * * *
	  * * * * * * *
	     * * * * *
	        * * *
	           *
					*/

#include<stdio.h>
#include<conio.h>

void main()
{
    int i, j, k;
    clrscr();

    for (i = 5; i >= 1; i--)
    {
        for (j = 5; j > i; j--)
        {
            printf(" ");
        }

        for (k = 1; k < (i * 2); k++)
        {
            printf("* ");
        }

        printf("\n");
    }
    getch();
} 