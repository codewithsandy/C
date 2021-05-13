/* 113.  Program to delete an element from array.  */

#include<stdio.h>
#include<conio.h>

void main()
{
    int array[100], position, c, n;
    clrscr();

    printf("Enter total number of elements in array : ");
    scanf("%d", &n);

    printf("\nEnter element %d : ", n);

    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);

    printf("\nEnter the location from where you wish to delete element : ");
    scanf("%d", &position);

    if (position >= n + 1)
        printf("\nDeletion not possible.");
    else
    {
        for (c = position - 1; c < n - 1; c++)
            array[c] = array[c + 1];

        printf("\nResultant array is :");

        for (c = 0; c < n - 1; c++)
            printf("\n%d", array[c]);
    }
    getch();
}