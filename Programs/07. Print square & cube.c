/* 7. Program to accept a number from user and print it’s square & cube. */

#include<stdio.h>
#include<conio.h>

void main()
{
  int n,sqre,cube;
  clrscr();

  printf("Enter Number: ");
  scanf("%d",&n);

  sqre=n*n;
  cube=n*n*n;

  printf("\nSquare: %d\nCube: %d",sqre,cube);

  getch();
}