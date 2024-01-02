#include<stdio.h>
void rotateLeft(int source[],int k,int size)
{
    int u,m;
    for(u=0; u<k; u++)
    {
        int first=0,second=first+1;
        int temp=source[0];
        for(m=0; m<size; m++)
        {
        source[first]=source[second];
        first=(first+1)%size;
        second=(first+1)%size;
        }
        source[size-1]=temp;
    }
    for(m=0; m<size; m++)
    {
        printf("%d,",source[m]);
    }
}
int main()
{
    int size,k,j;
    printf("enter array size:");
    scanf("%d",&size);
    int source[size];
    printf("\n enter array elements: ");
    for(j=0; j<size; j++)
    {
        scanf("%d",&source[j]);
    }
    printf("\n enter 'k' positions= ");
    scanf("%d",&k);
    rotateLeft(source,k,size);
    return 0;
}

