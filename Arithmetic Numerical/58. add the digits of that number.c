/* 58. Program to accept a number and add the digits of that number. */

#include<stdio.h>
#include<conio.h>
void main()
 {
 int n, sum = 0, remainder;
 clrscr();

 printf("Enter the number : ");
 scanf("%d", &n);

 while (n != 0) 
 {
  remainder = n % 10;
  sum = sum + remainder;
  n = n / 10;
 }

 printf("Sum of digits of entered number : %d", sum);
 getch();
}