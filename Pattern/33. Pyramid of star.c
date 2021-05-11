/* 33. Program for Pyramid of star

    *
   * * 
  * * *
 * * * *
* * * * *
			*/

#include<stdio.h>
#include<conio.h>
void main()
{
    int row, c, n, temp;
    clrscr();

    printf("Enter the number of rows : ");
    scanf("%d", &n);

    temp = n;

    for (row = 1; row <= n; row++)
    {
        for (c = 1; c < temp; c++)
            printf(" ");

        temp--;

        for (c = 1; c <= 2 * row - 1; c++)
            printf("*");

        printf("\n");
    }
    getch();
}