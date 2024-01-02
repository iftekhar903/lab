#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=10;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        arr[i]=rand () % 100;
    }

    for(int i=0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("\n \n");

    for(int i=0; i<n; i++)
    {
        printf("%d\t", arr[n-1-i]);
    }

    printf("\n \n");

    return 0;
}
