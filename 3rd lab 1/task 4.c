#include<stdio.h>
void rotateRight(int source[],int k,int size)
{
       int u,m;
       for(u=0;u<k;u++)
       {
              int first=size-1,second=first-1;
              int temp=source[size-1];

               for(m=0;m<size;m++)
               {
                     source[first]=source[second];
                     first=(first-1)%size;
                     second=(first-1)%size;
               }
               source[0]=temp;
       }
       for(m=0;m<size;m++)
       {
              printf("%d,",source[m]);
       }
}
int main()
{
     int size,k,i;
    printf("enter array size= ");
    scanf("%d",&size);
    int source[size];
    printf("\n enter array elements= ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&source[i]);
    }
    printf("\n enter 'k' positions= ");
    scanf("%d",&k);
    rotateRight(source,k,size);

  return 0;
}

