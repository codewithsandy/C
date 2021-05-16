/* 12. Program to accept rollnumber and marks of three subjects from user and print total marks, average and grade. */

#include<stdio.h>
#include<conio.h>

void main()
{
    int RollNum, m1, m2, m3, total;
    float avg;
    clrscr();

    printf("Enter Roll Number : ");
    scanf("%d",&RollNum);

    printf("Enter marks for three subjects : ");
    scanf("%d %d %d", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    avg = total / 3.0;

    printf("\nTotal is : %d", total);
    printf("\nAverage is : %5.2f", avg);

    if(avg>80)
        printf("\nGrade : A");
    else if((avg>60)&&(avg<=80))
        printf("\nGrade : B");
    else if((avg>40)&&(avg<=60))
        printf("\nGrade : C");
    else if((avg>=33)&&(avg<=40)
        printf("\nGrade : D");
    else
        printf("\nGrade : Fail");

    getch();
}