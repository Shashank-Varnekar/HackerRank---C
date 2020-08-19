#include <stdio.h>
#include <stdlib.h>

int main() 
{
  int n, size,i,j,p;
  scanf("%d",&n);
  size=2*n-1;
  int a[size][size];
  for(p=0;p<n;p++)
  {
      for(i=p;i<size-p;i++)
      {
          for(j=p;j<size-p;j++)
              a[i][j]=n-p;
      }
  }
  for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n");
  }
  return 0;
}
