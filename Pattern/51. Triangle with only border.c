51. Program for Triangle with only border

	       *
	     *   *
	    *     *
	   *       *
	  *         *
	 *           *
	* * * * * * 
						*/

#include<stdio.h>
#include<conio.h>
void drawTriangle(char border, char filler, int length)
{
    int start = 2;
    int base = 4;
    int i, sp, j, b;
    for (i = start; i <= length; i++)
    {
        for (sp = 0; sp <= length - i; sp++)
        {
            printf(" ");
        }
        if (i > start)
        {
            printf("%c ", border);
        }
        if (i > start)
        {
            for (b = base; b <= i; b++)
            {
                printf("%c ", filler);
            }
        }
        printf("%c \n", border);
    }

    for (j = base; j < length + base; j++)
    {
        printf("%c ", border);
    }
    printf("\n");
}

void main()
{
    int length = 6;
    clrscr();
    drawTriangle('*', ' ', length);
    getch();
}