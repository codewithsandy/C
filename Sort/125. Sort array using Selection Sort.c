/* 125. Program to sort array using Selection Sort.  */

#include<stdio.h>
#include<conio.h>

void main()
{
    int array[20], n, i, j, pos, temp;
    clrscr();

    printf("Enter total number of elements :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter element number %d : ", i+1);
        scanf("%d", &array[i]);
    }

    for (i = 0; i < (n - 1); i++)
    {
        pos = i; 
        for (j = i + 1; j < n; j++)
        {
            if (array[pos] > array[j])
                pos = j;
        }
        if (pos != i)
        {
            temp = array[i];
            array[i] = array[pos];
            array[pos] = temp;
        }
    }

    printf("\nSorted elements :");

    for (i = 0; i < n; i++)
        printf("%d\n", array[i]);

    getch();
}