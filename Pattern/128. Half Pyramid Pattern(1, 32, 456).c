/*  128. Pattern

1
3 2
4 5 6
10 9 8 7
11 12 13 14 15
21 20 19 18 17 16
					*/
#include<stdio.h>
int main()
 { 
    int i,j,k,l,n;

    scanf("%d",&n);

     for(k=i=1;i<=n;i++) 
    {
        l=k+i-1; 
        for(j=1;j<=i;j++)
       { 
            if(i%2==1)
                printf("%d ",k);
            else 
                printf("%d ",l); 
            k++;
            l--;
        }
        printf("\n"); 
    }
     return 0; 
}