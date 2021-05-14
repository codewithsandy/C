/* 142. Program to concatenate two strings using pointer. */

#include <stdio.h>

void concatenator(char *str, char *substr) {

    while (*str)
        str++;

    while (*substr) {
        *str = *substr;
        substr++;
        str++;
    }

    *str = '\0';
}

int main() {

    char str[100], substr[100];

    printf("Enter the source string : ");
    gets(str);

    printf("\nEnter string to concatenate : ");
    gets(substr);

    concatenator(str, substr);

    printf("String after concatenation is \"%s\"\n", str);

    return 0;
}