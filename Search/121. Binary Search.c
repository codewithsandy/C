/*  121. Binary Search   */

#include <stdio.h>

int bin(int arr[],int n,int t)
{
    int l=0;
    int r=n-1;
    while(l<=r)
{
     int m=l+(r-l)/2;
    if(arr[m]<t)
    l=m+1;
    else if (arr[m]>t)
    r=m-1;
    else return m; 
    }
    return -1;
}

int main() 
{
int n;
scanf("%d",&n);

int arr[n];

for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("%d",bin(arr,7,7));
return 0;
}