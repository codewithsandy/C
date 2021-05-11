/* 31. Program for Disjoint Pyramid Pattern of number

1             1
1 2         2 1
1 2 3     3 2 1
1 2 3 4 4 3 2 1
				*/

#include <stdio.h>
#include <conio.h>

void main()
{
  int i, j, k;
  clrscr();

  for (i = 1; i <= 5; i++)
  {
    for (j = 1; j <= 5; j++)
    {
      if (j <= i)
      {
        printf("%d ", j);
      }
      else
      {
        printf(" ");
      }
    }
    for (j = 5; j >= 1; j--)
    {
      if (j <= i)
      {
        printf("%d ", j);
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }
  getch();
}