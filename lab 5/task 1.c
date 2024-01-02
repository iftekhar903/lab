#include<stdio.h>
int main()
{
    int n[5],i,j,k;
    for(i=0; i<=4; i++)
    {
        printf("\n input num %d: ",i+1);
        scanf("%d", &n[i]);
        for(j=0; j<=i; j++)
        {
            printf("%d ",n[j]);
        }
    }
    printf("\n number in the array: ");
    for(k=0; k<=4; k++)
    {
        printf("%d ",n[k]);
    }
}
