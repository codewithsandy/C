/* 138. Program to split words from a string using strtok function. */

#include <stdio.h>
#include<string.h>
int main(void) {
  char str[]="Welcome to C language";
  char *token=strtok(str," ");
  while(token!=NULL)
  {
    printf("%s\n",token);
    token=strtok(NULL," ");
  }
  return 0;
}