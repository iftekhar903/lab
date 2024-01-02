#include<stdio.h>
int main()
{
    int n=10;                               //array size
    int array[n];                           //array declaration

    for(int i=0; i<n; i++)
    {
        array[i]=rand () % 100;             //random variable
    }

    int new_array[n];

    printf("Old array: \n");
    for(int i=0; i<n; i++)
    {
        printf("%d\t", array[i]);           //printing new arrray
    }
    printf("\n \n");

    printf("Reverse Array: \n");
    for(int i=0; i<n; i++)
    {
        new_array[i]=array[n-1-i];
        printf("%d\t", new_array[i]);       //printing old array
    }
    printf("\n \n");



    return 0;
}


