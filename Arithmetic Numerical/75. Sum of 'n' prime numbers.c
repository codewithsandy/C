/* 75. Program to print sum of 'n' prime numbers. */

#include<stdio.h>
#include<conio.h>
void main()
{
    int n, i = 3, count, c, sum = 2;
    clrscr();
    printf("Enter total number of prime numbers for addition : ");
    scanf("%d", &n);

    if (n >= 1)
    {
        printf("\nFirst %d prime numbers are :", n);
        printf("\n2 ");
    }
    for (count = 2; count <= n;)
    {
        for (c = 2; c <= i - 1; c++)
        {
            if (i % c == 0)
                break;
        }
        if (c == i)
        {
            sum = sum + i;
            printf("%d ", i);
            count++;
        }
        i++;
    }
    printf("\nSum : %d", sum);
    getch();
}