#include<stdio.h>
int main()
{
  int n1,n2;
  printf("Enter 1st array Size: ");
  scanf("%d",&n1);
  int a[n1],i;
  printf("Enter 1st array: ");
  for(i=0;i<n1;i++)
  {
         scanf("%d",&a[i]);
  }
    printf("\nEnter 2nd array Size: ");
    scanf("%d",&n2);
    int b[n2],j;
     printf("Enter 2nd array: ");
     for(j=0;j<n2;j++)
  {
         scanf("%d",&b[j]);
  }
for(i=0;i<n1;i++)
  {
         printf("%d,",a[i]);
  }
for(j=0;j<n2;j++)
 {
         printf("%d,",b[j]);
  }

  return 0;
}


