#include<stdio.h>
int main()
{
  int n;
  printf("Enter size: ");
  scanf("%d",&n);
  int a[n],i;
  printf("Enter array: ");
  for(i=0;i<n;i++)
  {
         scanf("%d",&a[i]);
  }
  printf("Original array: ");
  for(i=0;i<n;i++)
  {
         printf("%d,",a[i]);
  }
  printf("\n Modified array: ");
  for(i=0;i<n;i++)
  {
         if(a[i]%2!=0)
         {
             printf("%d,",a[i]);
         }

  }
  return 0;
}
