/* 110. Program to add two matrix. */

#include<stdio.h>
#include<conio.h>

void main()
{
    int m, n, c, d, first[10][10], second[10][10], sum[10][10];
    clrscr();

    printf("Enter the number of rows and columns of matrix :");
    scanf("%d%d", &m, &n);
    printf("\nEnter the elements of first matrix : \n");

    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            scanf("%d", &first[c][d]);
        }
    }

    printf("\nEnter the elements of second matrix : \n");

    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            scanf("%d", &second[c][d]);
        }
    }

    printf("\nSum of entered matrices : \n");

    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            sum[c][d] = first[c][d] + second[c][d];
            printf("%d\t", sum[c][d]);
        }
        printf("\n");
    }
    getch();
}