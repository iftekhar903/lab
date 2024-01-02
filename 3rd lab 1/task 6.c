#include<stdio.h>
void RemoveAll(int source[],int size,int element)
{
       int u,n;
       for(u=0;u<size;u++)
       {

              if(source[u]==element)
              {
                     for(n=u;n<size-1;n++)
                     {
                            source[n]=source[n+1];
                     }
                     source[size-1]=0;
                     u--;
              }
       }
       for(u=0;u<size;u++)
       {
              printf("%d,",source[u]);
       }
}
int main()
{
      int size,element,k;
    printf("enter array size: ");
    scanf("%d",&size);
    int source[size];
    printf("\n enter array elements: ");
    for(k=0; k<size; k++)
    {
        scanf("%d",&source[k]);
    }
    printf("\nEnter occurrences for Remove= ");
    scanf("%d",&element);
    RemoveAll(source,size,element);

}
