/* 97. Program to copy char array / copy string. */

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char source[] = "C program";
    char destination[50];
    clrscr();

    strcpy(destination, source);

    printf("Source string: %s\n", source);
    printf("Destination string: %s\n", destination);
    getch();
}