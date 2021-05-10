/* 26. program for patterns of half alphabets
A
B C
D E F
G H I J
K L M N O
			*/
#include<stdio.h>
#include<conio.h>

void main()
{
    int i, j, n;
    clrscr();

    printf("Enter number : ");
    scanf("%d", &n);
    int c = 'A';

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c", c);
            c = c + 1;
        }
        printf("\n");
    }
    getch();
}