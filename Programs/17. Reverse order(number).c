/* 17. Program to accept a number and print that number in reverse order. */
Ex:- 1024
Output:- 4201

#include<stdio.h>
#include<conio.h>

void main()
{
    int reminder, n;
    clrscr();

    printf("Enter n : ");
    scanf("%d", &n);

    while(n>0)
    {
        reminder=n%10;
        printf("%d", reminder);
        n=n/10;
    }
    getch();
}