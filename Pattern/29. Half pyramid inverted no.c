/* 29. Pattern half pyramid of inverted number

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
			*/
#include <stdio.h>
#include <conio.h>
void main()
{
  int i, j, k, l, n;
  clrscr();

  printf("Enter number : ");
  scanf("%d", &n);
  printf("\n");

  for (i = n; i >= 1; i--)
  {
    for (j = 1; j <= i; j++)
      printf("%d", j);

    printf("\n");
  }
  getch();
}