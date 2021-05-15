/* 79. Program to swap two numbers using bitwise XOR.  */

#include<stdio.h>
#include<conio.h>
void main()
{
    long i, k;
    clrscr();
    printf("Enter two integers : \n");
    scanf("%ld %ld", &i, &k);

    printf("\n Before swapping i : %ld and k : %ld", i, k);
    i = i ^ k;
    k = i ^ k;
    i = i ^ k;
    printf("\nAfter swapping i : %ld and k : %ld", i, k);
    getch();
}