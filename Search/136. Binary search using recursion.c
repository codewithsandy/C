/* 136. Binary search using recursion */

#include<stdio.h>

int binary(int arr[], int n, int search, int l, int u);

int main()
{
    int arr[10], i, n, search, c, l, u;

    printf("Enter the size of an array : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the element %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to be search: ");
    scanf("%d", &search);

    l = 0, u = n - 1;
    c = binary(arr, n, search, l, u);

    if (c == 0)
        printf("Number not found.");
    else
        printf("Number found.");

    return 0;
}

int binary(int arr[], int n, int search, int l, int u)
{

    int mid, c = 0;

    if (l <= u)
    {
        mid = (l + u) / 2;
        if (search == arr[mid])
        {
            c = 1;
        }
        else if (search < arr[mid])
        {
            return binary(arr, n, search, l, mid - 1);
        }
        else
            return binary(arr, n, search, mid + 1, u);
    }
    else
        return c;
}