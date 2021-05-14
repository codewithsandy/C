/* 81. Program to add two numbers using pointer.  */

#include<stdio.h>
#include<conio.h>
void main()
{
    int first, second, *p, *q, sum;
    clrscr();
    printf("Enter two integers : \n");
    scanf("%d %d", &first, &second);

    p = &first;
    q = &second;

    sum = *p + *q;

    printf("\nSum of entered numbers : %d", sum);
    getch();
}