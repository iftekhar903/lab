#include<stdio.h>
int main()
{
    int n=10;                           //array size
    int array[n];                       //array size declaration

    for(int i=0; i<n; i++)
    {
        array[i]=rand () % 100;         //random variable
    }

    int new_array[n];                   //new array size declaration

    printf("Old array: \n");
    for(int i=0; i<n; i++)
    {
        printf("%d\t", array[i]);       //printing new array
    }
    printf("\n \n");

    printf("New Array: \n");
    for(int i=0; i<n; i++)
    {
        new_array[i]=array[i];
        printf("%d\t", new_array[i]);   //printing old array
    }
    printf("\n \n");



    return 0;
}

