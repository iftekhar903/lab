#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=5;//array size
    int array[n];//array declaration
    //random value assign
    for (int i =0; i<n; i++)
    {
        array[i]=rand()%100;//random 2 digit value
    }
    //method 1
    int newArray[n];
    // Array is copied by index to index
    for(int i=0; i<5; i++)
    {
        newArray[i]=array[i];
    }
    // array print (forward printing) : Old Array
     printf("old array:\n");
    for (int i=0; i<n; i++)
    {
        printf("%d\t",array[i]);//printf("Old array:%d\t",array[i]);
    }
    printf("\n");
    printf("new array:\n");
    // array print (forward printing) : New Array
    for(int i=0; i<n; i++)
        printf("%d\t",newArray[i]);//printf("new array :%d\t",newArray[i]);

}
