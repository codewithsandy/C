/* 54. Program to print 'n' prime numbers. */

#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
int i, j, flag=1, n;
clrscr();
printf("Enter number : ");
scanf("%d", &n);

for(i=2; i<=n; i++)
{
    flag=1;
    for(j=2; j<=i/2; j++)
    {
        if(i%j==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    printf("%d\n", i);
}
getch();
}