/* 67. Program to calculate HCF & LCM. */

#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b, x, y, t, hcf, lcm;
    clrscr();
    printf("Enter two numbers : ");
    scanf("%d%d", &x, &y);

    a = x;
    b = y;

    while (b != 0)
    {
        t = b;
        b = a % b;
        a = t;
    }

    hcf = a;
    lcm = (x * y) / hcf;

    printf("\nHighest Common Factor of %d and %d : %d", x, y, hcf);
    printf("\nLeast Common Multiple of %d and %d : %d", x, y, lcm);
    getch();
}