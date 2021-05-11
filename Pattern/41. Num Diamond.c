/* 41. Program for Number Diamond Pattern

            1
         1 2 3
      1 2 3 4 5
   1 2 3 4 5 6 7
1 2 3 4 5 6 7 8 9
   1 2 3 4 5 6 7
      1 2 3 4 5
         1 2 3
            1
				*/

#include<stdio.h>
#include<conio.h>
void main()
{
    int i, j, k;
    clrscr();

    for(i=1;i<=5;i++)
    {
        for(j=i;j<5;j++)
        {
            printf(" ");
        }
        for(k=1;k<(i*2);k++)
        {
                printf("%d",k);
        }
        printf("\n");
    }
    for(i=4;i>=1;i--)
    {
        for(j=5;j>i;j--)
        {
                printf(" ");
        }
        for(k=1;k<(i*2);k++)
        {
                printf("%d",k);
        }
        printf("\n");
    }
    getch();
}