#include<stdio.h>
int main()
{
    int i,n,j=0;
    printf("Enter the array: ");
    scanf("%d",&n);
    int a[n],m;
    for(i=0; i<n; i++)
    {
     scanf("%d",&a[i]);
    }
    m=a[0];
    for(i=1; i<n; i++)
    {
        if(m<a[i])
        {
            m=a[i];
            j=i;
        }

    }
    printf("\n my array: ");
    for(i=0; i<n; i++)
    {
        printf("%d,",a[i]);
    }
    printf("\n Largest number in the array is %d which was found at index %d.\n",m,j);

    return 0;
}
