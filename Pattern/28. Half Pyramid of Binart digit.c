/* 28. Pattern of half pyramid of binary digit
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
		*/
#include<stdio.h>
#include<conio.h>

void main()
{
    int i, j;
    int count = 1;
    clrscr();

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", count++ % 2);
            if (j == i && i != 5)
                printf("\n");
        }
        if (i % 2 == 0)
            count = 1;
        else
            count = 0;
    }
    getch();
}