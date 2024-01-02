#include<stdio.h>
int main()
{
  int n[6],i,j;
  for(i=0;i<5;i++)
  {
         scanf("%d",&n[i]);
  }
  printf("\n printing value from the array is :");
  for(j=4;j>=0;j--)
  {
         printf("\n%d",n[j]);
  }


  return 0;
}
