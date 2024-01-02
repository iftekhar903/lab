#include<stdio.h>
void shiftLeft(int source[],int k,int size)
{
    int u;
    for(u=0; u<size; u++)
    {
        if(u<size-k)
        {
        source[u]=source[u+k];
        }
        else
        {
        source[u]=0;
        }
    }
    printf("\nFinal output= ");
    for(u=0;u<size;u++)
    {
           printf("%d,",source[u]);
    }
}

int main()
{
    int size,k,i;
    printf("enter array size: ");
    scanf("%d",&size);
    int source[size];
    printf("\n enter array elements= ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&source[i]);
    }
    printf("\n enter 'k' positions= ");
    scanf("%d",&k);
    shiftLeft(source,k,size);
    return 0;
}

