/* 83. Program to find area of triangle using Heron's formula. */

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    double a, b, c, s, area;
    clrscr();
    printf("\nEnter the sides of triangle : \n");
    scanf("%lf%lf%lf", &a, &b, &c);

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("\nArea of triangle using Heron's Formula : %.2lf", area);
    getch();
}