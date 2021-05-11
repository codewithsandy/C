/* 130. Swastika pattern.

*         *  *  *  * 
*         *       
*         *       
* *  *  * * * * *
           *          * 
           *          * 
*  *  * *          *
			*/
#include<stdio.h>
int main() {
  int n;
  scanf("%d",&n);
  
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n;j++)
    {
    if(i==1)
    {
      if(j>(n/2)||j==1)
      printf("* ");
      else
      printf("  ");
    }
    else if(i==n)
    {
      if(j<=(n/2+1)||j==n)
      printf("* ");
      else
      printf("  ");
    }
    else if(i==(n+1)/2)
     printf("* ");

    else if(i<=n/2&&i!=1)
    {
      if(j==1||j==(n+1)/2)
      printf("* ");
      else
       printf("  ");
    }
    else
    {
      if(j==n||j==(n+1)/2)
      printf("* ");
      else
       printf("  ");
    }
    }  
     printf("\n");
  }
  return 0;
}