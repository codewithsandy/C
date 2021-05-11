/*  131. Pattern

5                  5
54              45
543          345
5432      2345
5 4 3 2 12345
5432      2345
543           345
54               45
5                   5

			*/
#include <stdio.h>
int main() 
{
  int i,j,n;
  scanf("%d",&n);

  for(i=n;i>=1;i--) {
    for(j=n;j>=1;j--) {
      if(j>=i)
        printf("%d",j);
      else
        printf(" ");
    }
    for(j=2;j<=n;j++) {
      if(j>=i)
        printf("%d",j);
      else
        printf(" ");
    }
    printf("\n");
  }

//down
  for(i=2;i<=n;i++) {
    for(j=n;j>=1;j--) {
      if(j>=i)
        printf("%d",j);
      else
        printf(" ");
    }
    for(j=2;j<=n;j++) {
      if(j>=i)
        printf("%d",j);
      else
        printf(" ");
    }
    printf("\n");
  }
}