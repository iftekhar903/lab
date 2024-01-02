#include<stdio.h>
void Repetition(int arr[],int size)
{
    int m,n,k,l,count=0,j=1,count2=0;
    int arr2[size];
    int copy[size];
    for(m=0; m<size; m++)
    {
        copy[m]=arr[m];
    }
    for(m=0; m<size; m++)
    {
        k=1;
        for(n=m+1; n<size; n++)
        {
            if(arr[m]==copy[n])
            {

                k++;
                copy[n]=-1;
            }
        }
        arr2[count]=k;
        count++;


    }
    for(m=0; m<count; m++)
    {
        for(n=m+1; n<count; n++)
        {
            if(arr2[m]==arr2[n] && arr2[m]>1)
            {
                count2=1;
            }
        }
    }
    if(count2==1)
    {
        printf("\nTrue");
    }
    else
    {

        printf("\nFalse");
    }
}
int main()
{
    int size,k,i;
    printf("Enter Array Size= ");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter Array Elements= ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    Repetition(arr,size);

}
