/* 19. Program to accept a number and print sum of it’s digits. */

#include<stdio.h>
#include<conio.h>
void main()
{
    int reminder, sum=0, n;
    clrscr();

    printf("Enter n : ");
    scanf("%d", &n);

    while(n>0)
    {
        reminder = n % 10;
        sum = sum + reminder;
        n = n / 10;
    }
    printf("Sum of digits : %d",sum);
    getch();
}