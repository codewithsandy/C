/* 53. Program to accept number and print if it is prime number or not. */

#include<stdio.h>
#include<conio.h>
void main()
{
int i, n;
clrscr();
printf("Enter number : ");
scanf("%d", &n);

for(i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            printf("Number is not Prime");
            getch();
            break;
        }
    }
    printf("Number is Prime");
    getch();
}