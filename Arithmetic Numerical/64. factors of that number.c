/* 64. Program to accept a number and print the factors of that number. */

#include<stdio.h>
#include<conio.h>
void main()
{
    int n, i;
    clrscr();
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Factors of %d are : ", n);
    for (i = 1; i <= n; ++i)
    {
        if (n % i == 0)
            printf("\n%d ", i);
    }
    getch();
}