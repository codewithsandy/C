/* 111. Program to arrange array numbers in ascending order. */

#include<stdio.h>
#include<conio.h>

void main()
{
    int i, j, a, n, number[30];
    clrscr();

    printf("Enter total numbers : ");
    scanf("%d", &n);
    printf("\n Enter the numbers :\n");

    for (i = 0; i < n; ++i)
    {
        scanf("%d", &number[i]);
    }

    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (number[i] > number[j])
            {
                a = number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }

    printf("The numbers arranged in ascending order are :\n");

    for (i = 0; i < n; ++i)
    {
        printf("%d\n", number[i]);
    }
    getch();
}