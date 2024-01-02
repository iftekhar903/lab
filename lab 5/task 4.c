#include<stdio.h>
int main()
{
  int i,j,n;
  printf("Enter your array = ");
  scanf("%d",&n);
  int m[n];
  for(i=0;i<n;i++)
  {
         scanf("%d",&m[i]);
  }
  printf(" \n the square of input numbers: ");
  for(i=0,j=0;i<n,j<n;i++,j++)
  {
          m[j]=m[i]*m[i];
  }
 for(j=0;j<n;j++)
  {
         printf("%d,",m[j]);
  }



}


