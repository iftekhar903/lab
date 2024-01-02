#include<stdio.h>
int main()
{
    int n, i, k, j, count;
    printf("How many elements: ");                              //input array size
    scanf("%d", &n);
    int source[n];                                              //declare array size

    printf("Enter the array elements:\n ");                     //inputing array elements
    for(i=0; i<n; i++)
    {
        printf("source[%d]= ", i);
        scanf("%d", &source[i]);
    }

    printf("Old array is: ");                                   //printing old array
    for(i=0; i<n; i++)
    {
        printf("%d\t", source[i]);
    }
    printf("\n");

    while(2>0)                                                  //this loop for multiple elements deletion
    {
        printf("\nWhich occurrence do you want to delete: ");
        scanf("%d", &k);

        for(i=0; i<n; i++)
        {
            if(source[i]==k)                                    //matching with array elements
            {
                for(j=i; j<(n-1); j++)
                {
                    source[j]=source[j+1];                      //deleting user input elements
                }
                n--;
            }
        }

        printf("\nModified array is: ");
        for(i=0; i<n; i++)
        {
            printf("%d\t", source[i]);                          //printing array after complete delete
        }
    }

    return 0;
}

