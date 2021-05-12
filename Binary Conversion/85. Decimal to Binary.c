/* 85. Program to convert Decimal numbers to Binary. */

#include<stdio.h>
#include<conio.h>

void main()
{
    int n, c, k;
    clrscr();
    printf("Enter a decimal number : ");
    scanf("%d", &n);

    printf("\n%d in binary number system is : ", n);

    for (c = 31; c >= 0; c--)
    {
        k = n >> c;
        if (k & 1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }

    printf("\n");
    getch();
}