/* 112. Program to check whether the matrix is sparse matrix or not.  */

#include<stdio.h>
#include<conio.h>

void main()
{
    static int array[10][10];
    int i, j, m, n;
    int counter = 0;
    clrscr();

    printf("Enter the order of the matix : ");
    scanf("%d %d", &m, &n);
    printf("\nEnter the co-efficients of the matix :\n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            scanf("%d", &array[i][j]);
            if (array[i][j] == 0)
            {
                ++counter;
            }
        }
    }
    if (counter > ((m * n) / 2))
    {
        printf("The given matrix is sparse matrix \n");
    }
    else
    {
        printf("The given matrix is not a sparse matrix \n");
    }
    
    printf("There are %d number of zeros", counter);
    getch();
}