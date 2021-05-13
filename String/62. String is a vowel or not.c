/* 62. Program to take an alphabet from user and check whether it is a vowel or not. */

#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    clrscr();
    printf("Enter an alphabet : ");
    scanf("%c", &ch);

    if (ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
        printf("%c is a vowel.", ch);
    else
        printf("%c is not a vowel.", ch);
    getch();
}