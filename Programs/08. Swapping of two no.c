/* 8. Program to accept two values of a & b and swap their values. */

#include<stdio.h>
#include<conio.h>

void main()
{
  int a,b,temp;
  clrscr();

  printf("Enter 1st number : ");
  scanf("%d",&a);

  printf("Enter 2nd number : ");
  scanf("%d",&b);

  printf("\nBefore Swapping...");
  printf("A=%d, B=%d",a,b);

  temp=a;
  a=b;
  b=temp;

  printf("\nAfter Swapping...");
  printf("\n A=%d, B=%d",a,b);

  getch();
}