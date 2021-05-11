/* 56. Add 'n' numbers. */

#include<stdio.h>
#include<conio.h>
void main()
{
   int n, sum=0, i, value;
   clrscr();

   printf("Enter total numbers you want to add : ");
   scanf("%d", &n);

   for (i=1; i<=n; i++)
   {
      printf("Enter number %d : ", i);
      scanf("%d", &value);
      sum = sum + value;
   }

   printf("Sum of entered numbers : %d", sum);
   getch();
}