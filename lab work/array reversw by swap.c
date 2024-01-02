#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=5;
    int array[n],i,j,temp;
    //printf("Enter the n value = ");

    for(i=0; i<n; i++)
    {
      scanf("%d",&array[i]);
    }

    for(i=0; i<n; i++)
    {
      printf("%d\t",array[i]);
    }

    printf("\n");
    for(i=0; i<n; i++)
    {
         if(i<3)
           {
           temp=array[i];
           array[i]=array[n-1-i];
           array[n-1-i]=temp;
           }
        printf("%d\t",array[i]);
    }
    return 0;
}
