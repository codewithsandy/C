/*  132. Pattern


        @       @         
      @   @   @   @       
    @       @       @     
  @           @       @   
@       @       @       @ 
  @   @   @   @       @   
    @       @       @     
  @       @   @   @   @   
@       @       @       @ 
  @       @           @   
    @       @       @     
      @   @   @   @       
        @       @

				*/
#include<stdio.h>
int main()
{
    int n,x,y;
    scanf("%d",&n);

    if(n%2==0)
    n=n+1;

    for(y=3*n/2; y>=-3*(n/2); y--)
    {
        for(x=-3*(n/2); x<=3*(n/2); x++)
        {
            if((x>=-1*n/2 && x<=n/2) || (y>=-1*n/2 && y<=n/2))
            {
                if(x==y || x==-y)
                    printf("@ ");
                else if((y<=0 || y>=n/2) && (x+y==n-1))
                    printf("@ ");
                else if((y>=0 || y<=-n/2) && (x+y==1-n))
                    printf("@ ");
                else if((x<=0 || x>=n/2) && (x-y==n-1))
                    printf("@ ");
                else if((x>=0 || x<=-n/2) && (x-y==1-n))
                    printf("@ ");
                else
                    printf("  ");
            }
            else
            {
                if(x+y==(n-1)*2)
                    printf("@ ");
                else if(x+y==(1-n)*2)
                    printf("@ ");
                else if(x-y==(n-1)*2)
                    printf("@ ");
                else if(x-y==(1-n)*2)
                    printf("@ ");
                else
                    printf("  ");
            }
        }
        printf("\n");
    }
}