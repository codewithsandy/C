/* 126. Program to sort array using Bubble Sort.  */

#include<stdio.h>
#include<conio.h>

void main()
{
    int total, element[100], i, j, temp;
    clrscr();

    printf("Enter total number of elements :");
    scanf("%d", &total);

    for(i=0; i<total; i++)
    {
        printf("Enter element no%d :", i+1);
        scanf("%d", &element[i]);
    }
    
    for (i=0; i<(total - 1); i++)
    {
        for (j = 0; j < total  - 1; j++)
        {
            if (element[j] > element[j + 1]) 
            {
                temp = element[j];
                element[j] = element[j + 1];
                element[j + 1] = temp;
            }
        }
    }

    printf("\nSorted list in ascending order :");

    for (i = 0; i < total; i++)
    {
        printf("\n%d", element[i]);
    } 
    getch();
}
//To sort in descending order, use < (less than) in if condition.