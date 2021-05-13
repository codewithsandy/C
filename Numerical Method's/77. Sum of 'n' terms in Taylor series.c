/* 77. Program to calculate the sum of 'n' terms in Taylor series. */

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    int x, i;
    int fact = 1, n;
    float sum = 0;
    clrscr();
    printf("Enter the value of x : ");
    scanf("%d", &x);
    printf("Enter the number of terms : ");
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        fact = fact * i;
        sum = sum + (pow(x, i) / fact);
    }
    sum = sum + 1;
    printf("The sum of taylor series is : ");
    printf("%f", sum);
    getch();
}