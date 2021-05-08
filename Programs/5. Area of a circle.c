/* 5. Program to accept value of radius and print area of a circle. */

#include<stdio.h>
#include<conio.h>

void main()
{
  float area,radius;
  clrscr();

  printf("Enter Radius:");
  scanf("%f",&radius);

  area=3.14*radius*radius;

  printf("Area : %6.2f",area);

  getch();
}