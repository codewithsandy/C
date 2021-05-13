/* 57. Add 'n' numbers using array. */

#include<stdio.h>
#include<conio.h>
void main()
{
    int n, sum = 0, i, array[100];
    clrscr();
    printf("Enter total numbers you want to add : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Enter number %d : ", i);
        scanf("%d", &array[i]);
        sum = sum + array[i];
    }
    printf("Sum : %d\n", sum);
    getch();
}