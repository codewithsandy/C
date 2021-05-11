/* 129. Pattern

1
8 2
14 9 3
19 15 10 4
23 20 16 11 5
26 24 21  17 12 6
28 27 25 22 18 13 7
				*/
#include<stdio.h>
int main() {

int n,i,j,k,l=1,d;
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
        for(j=i-1;j>=0;--j)
        {
            d=n-1;
            l=i+1;
            for(k=0;k<=j;++k)
            {
                l+=d;
                d--;
            }
            printf("%d ",l);
        }
        printf("%d\n",i+1);
    }
    return 0;
}