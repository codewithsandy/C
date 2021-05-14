 /*  80. Program to swap two numbers using pointer.  */

#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b;
    int *ptra, *ptrb, *temp;
    clrscr();
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);

    printf("\nBefore swapping : a : %d, b : %d", a, b);

    ptra = &a;
    ptrb = &b;

    temp = ptra;
    *ptra = *ptrb;
    *ptrb = *temp;

    printf("\nAfter swapping : a : %d, b : %d", a, b);
    getch();
}