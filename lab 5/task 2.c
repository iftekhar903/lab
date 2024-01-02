#include<stdio.h>
int main()
{
    int n;
    //printf("Enter the number %d:");
    scanf("%d",&n);
    if(n<4)
    {
        printf("Not possible\n");

    }
    int m[n];
    int i;
    printf("Enter %d elements: ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&m[i]);
    }
    if (n <= 4)
    {
        printf("Not possible\n");
    }
    else
    {
        printf("New array is : ");
        for (int i = 2; i < n - 2; i++)
        {
            printf("%d ", m[i]);
        }

    }


}
