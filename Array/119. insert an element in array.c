/* 119. Program to insert an element in array.  */

#include<stdio.h>
#include<conio.h>

void main()
{
    int array[100], position, i, size, value;
    clrscr();

    printf("Enter size of array : ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter %d element : ", i);
        scanf("%d", &array[i]);
    }

    printf("Enter the location where you wish to insert an element : ");
    scanf("%d", &position);

    printf("Enter the value to insert : ");
    scanf("%d", &value);

    for (i = size - 1; i >= position - 1; i--)
    {
        array[i + 1] = array[i];
    }

    array[position - 1] = value;

    printf("\nResultant array is : ");

    for (i = 0; i <= size; i++)
    {
        printf(" %d ", array[i]);
    }

    getch();
}