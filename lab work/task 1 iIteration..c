#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=5;//array size
    int array[n];//array declaration
    for(int i=0;i<n;i++)//random value assign
    {
      array[i]=rand()%100;//random 2 digit value
    }
    //array print (forward printing )
    for (int i=0;i<n;i++)
    {
        printf("%d\t",array[i]);
    }
    //array print ( backward printing )
    printf("\n");
    for (int i=0;i<n;i++)
    {
        printf("%d\t",array[n-1-i]);
    }
}
