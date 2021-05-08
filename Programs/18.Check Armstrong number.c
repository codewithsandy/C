/* 18. Program to take a number from user and check whether it is Armstrong number or not. */

#include<stdio.h>
#include<conio.h>

void main()
{
    int i=2, temp, rem, sum=0, n;
    clrscr();

    printf("Enter n : ");
    scanf("%d", &n);
    temp = n;

    while(n>0)
    {
        rem = n%10;
        sum = sum+(rem*rem*rem);
        n = n/10;
    }

    if(temp == sum)
        printf("Entered number is an Armstrong Number");
    else
        printf("Entered number is not an Armstrong Number");

    getch();
}