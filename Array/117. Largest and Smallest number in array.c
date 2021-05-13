/* 117. Program to find Largest and Smallest number in array.  */

#include<stdio.h>
#include<conio.h>

void main()
{
    int a[50], size, i, largest, smallest;
    clrscr();

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter element %d in to the array : ", i);
        scanf("%d", &a[i]);
    }

    largest = a[0];
    for (i = 1; i < size; i++)
    {
        if (largest < a[i])
        {
            largest = a[i];
        }
    }
    printf("Largest element : %d", largest);

    smallest = a[0];
    for (i = 1; i < size; i++)
    {
        if (smallest > a[i])
        {
            smallest = a[i];
        }
    }
    printf("\nSmallest element : %d", smallest);
    getch();
}