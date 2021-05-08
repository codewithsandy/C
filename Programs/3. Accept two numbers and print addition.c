/* 3. Program to accept values of two numbers and print their addition. */

#include<stdio.h>
#include<conio.h>

void main()
{
  int a,b,ans;
  clrscr();

  printf("Enter 1st number:");
  scanf("%d",&a);

  printf("Enter 2nd number:");
  scanf("%d",&b);

  ans = a + b;

  printf("Addition is : %d",ans);

  getch();
}