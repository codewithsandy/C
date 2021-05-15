/* 72. Program to check whether the number is palindrome or not. */

#include<stdio.h>
#include<conio.h>
void main()
{
    int n, rev = 0, temp;
    clrscr();
    printf("Enter a number : ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0)
    {
        rev = rev * 10;
        rev = rev + temp % 10;
        temp = temp / 10;
    }

    if (n == rev)
        printf("\n%d is palindrome number.", n);
    else
        printf("\n%d is not palindrome number.", n);
    getch();
}