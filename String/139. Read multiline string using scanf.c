/* 139. Program to read multiline string using scanf.  */

#include<stdio.h>
int main(void) {
  
  char str[100];
  // reading multline string with '.' as a delimiter
  scanf("%[^.]",str);
  
  printf("%s",str);
  
  return 0;
}