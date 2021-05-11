/* 60. Average of numbers. */

#include<stdio.h>
#include<conio.h>
void main()
{
    int n, i;
    float sum=0, x, avg;
    clrscr();
    printf("Enter total Numbers : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("\nNumber %d : ", i );
        scanf("%f", &x);
        sum += x;
    }
    avg = sum / n;
    printf("\nThe Average is : %0.2f", avg);    
    getch();
}