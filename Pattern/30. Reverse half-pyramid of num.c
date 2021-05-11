/* 30. Pattern reverse half pyramid of number

        1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1
				*/

#include <stdio.h>
#include <conio.h>
void main()
{
  int i, j, k;
  clrscr();

  for (i = 1; i <= 5; i++)
  {
    for (j = 5; j >= 1; j--)
    {
      if (j <= i)
      {
        printf("%d", j);
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