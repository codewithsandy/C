/* 37. Pascal triangle without using function

    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1
			*/

#include<stdio.h>
#include<conio.h>
void main()
{
    int x, y, n, a, z, s;
    clrscr();

    printf("Enter the number : ");
    scanf("%d", &n);
    s = n;

    for (x = 0; x <= n; x++)
    {
        a = 1;
        for (z = s; z >= 0; z--)
            printf(" ");

        s--;

        for (y = 0; y <= x; y++)
        {
            printf("%d ", a);
            a = (a * (x - y) / (y + 1));
        }
        printf("\n");
    }
    getch();
}