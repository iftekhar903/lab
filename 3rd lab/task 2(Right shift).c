#include<stdio.h>
int main()
{
    int i, k, n;
    printf("How many elements do you want?-\n");    //array size input
    scanf("%d", &n);
    int source[n];                                  //array size declaration

    printf("Enter array elements:\n");
    for(i=0; i<n; i++)
    {
        printf("Enter no %d element: ", i+1);
        scanf("%d", &source[i]);                    //input array elements
    }
    printf("How many right shift you want?- ");
    scanf("%d", &k);                                //input how many shift

    printf("\nYour old array is: \n");
    for(i=0; i<n; i++)
    {
        printf("%d\t", source[i]);                  //printing user input array
    }

    for(i=n-1; i>=k; i--)
    {
        source[i]=source[i-k];                      //shifting array elements
    }

    for(i=0; i<k; i++)
    {
        source[i]=0;                                //declare 0 rest of the array elements
    }

    printf("\n\nYour modified array is: \n");
    for(i=0; i<n; i++)
    {
        printf("%d\t", source[i]);                  //printing array after shift
    }
    printf("\n");


    return 0;
}

