#include<stdio.h>
void Remove(int source[],int size,int element)
{
    int u,n;
    for(u=0; u<size; u++)
    {
        if(u==element)
        {
            for(n=u; n<size-1; n++)
            {
                source[n]=source[n+1];
            }
            source[size-1]=0;
        }
    }
    for(u=0; u<size; u++)
    {
        printf("%d,",source[u]);
    }
}
int main()
{
    int size,element,i;
    printf("enter array size= ");
    scanf("%d",&size);
    int source[size];
    printf("\n enter array elements= ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&source[i]);
    }
    printf("\n enter IDX for Remove= ");
    scanf("%d",&element);
    Remove(source,size,element);

}

