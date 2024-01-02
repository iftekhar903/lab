#include<stdio.h>
int main()
{
    int n, i, k, j;
    printf("How many elements: ");                  //input array size
    scanf("%d", &n);
    int source[n];                                  //declare array size

    printf("Enter the array elements:\n ");         //inputing array elements
    for(i=0; i<n; i++)
    {
        printf("source[%d]= ", i);
        scanf("%d", &source[i]);
    }

    printf("Old array is: ");                       //printing old array
    for(i=0; i<n; i++)
    {
        printf("%d\t", source[i]);
    }
    printf("\n");

    while(2>0)                                      //this loop for multiple index deletion
    {
        printf("\nWhich index do you want to delete: ");
        scanf("%d", &k);

        for(i=k; i<n; i++)
        {
            source[i]=source[i+1];                  //deleting user input index
        }
        source[n-1]=0;

        printf("\nModified array is: ");
        for(i=0; i<n; i++)
        {
            printf("%d\t", source[i]);              //printing array after complete delete
        }
    }

    return 0;
}
