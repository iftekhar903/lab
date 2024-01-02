#include<stdio.h>
int main()
{
    int k, n, i, j;
    //input array size from user
    printf("How many array elements:\n");
    scanf("%d", &n);
    int source[n];
    //inputting array elements
    printf("Enter array elements:\n");
    for(i=0; i<n; i++)
    {
        printf("Enter no %d value: ", i+1);
        scanf("%d", &source[i]);
    }
    //input times of rotate from user
    printf("How many right rotate you want: ");
    scanf("%d", &k);
    //printing old array
    printf("Original array is: \n");
    for(i=0; i<n; i++)
    {
        printf("%d\t", source[i]);
    }
    //temporary array for store k shift elements
    int temp[k];
    for(i=n-k, j=0; i<n; i++, j++)
    {
        temp[j]=source[i];
    }
    //shifting remaining elements after create temp array
    for(i=n-1; i>=k; i--)
    {
        source[i]=source[i-k];
    }
    //copying temp array
    for(i=0; i<k; i++)
    {
        source[i]=temp[i];
    }
    //printing array after rotating
    printf("\nAfter rotate the array is: \n");
    for(i=0; i<n; i++)
    {
        printf("%d\t", source[i]);
    }

    printf("\n\n");

    return 0;
}

