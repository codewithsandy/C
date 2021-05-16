/* 9. Program to check whether the number is even or odd. */

#include<stdio.h>
#include<conio.h>

void main()
{
  int n;
  clrscr();

  printf("Enter number: );
  scanf("%d",&n);

  if(n%2==0)
    printf("Number is even");
  else
    printf("Number is odd");

  getch();
}