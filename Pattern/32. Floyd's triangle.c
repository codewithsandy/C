/* 32. Program for pyramid of Floyd's triangle

1
2 3
4 5 6
7 8 9 10
11 12 13 14
			*/

#include <stdio.h>
#include <conio.h>
void main()
{
  int n, i, c, a = 1;
  clrscr();

  printf("Enter the number of rows : ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    for (c = 1; c <= i; c++)
    {
      printf("%d ", a);
      a++;
    }
    printf("\n");
  }
  getch();
}