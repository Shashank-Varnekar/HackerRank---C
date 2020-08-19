#include <stdio.h>
#include <string.h>

int main() 
{   
    char a[1000];
    int b[10]={0},i,j;
    int d[10]={'0','1','2','3','4','5','6','7','8','9'};
    scanf("%s",a);
    for(i=0;i<=strlen(a);i++)
    {
        for(j=0;j<=9;j++)
        {
            if(a[i]==d[j])
            {
                b[j]++;
            }
        }
    }
    for(i=0;i<10;i++)
        printf("%d ",b[i]);
    return 0;
}
