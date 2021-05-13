/* 114. Program to delete given number from array.  */

#include<stdio.h>
#include<conio.h>

void main()
{
    int array[10];
    int i, n, pos, element, found = 0;
    clrscr();

    printf("Enter total number of elements : ");
    scanf("%d", &n);
    printf("\nEnter the elements : \n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Input array elements are\n");

    for (i = 0; i < n; i++)
    {
        printf("\n%d", array[i]);
    }

    printf("\nEnter the element to be deleted : ");

    scanf("%d", &element);

    for (i = 0; i < n; i++)
    {
        if (array[i] == element)
        {
            found = 1;
            pos = i;
            break;
        }
    }

    if (found == 1)
    {
        for (i = pos; i < n - 1; i++)
        {
            array[i] = array[i + 1];
        }

        printf("\nResultant array elements are : ");

        for (i = 0; i < n - 1; i++)
        {
            printf("\n%d", array[i]);
        }
    }
    else
    {
        printf("\nElement %d is not found in the array", element);
    }
    getch();
}