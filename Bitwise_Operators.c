#include <stdio.h>

void calculate_the_maximum(int n, int k) 
{
    int a,b,p=0,q=0,r=0;
    for(a=1;a<n;a++)
    {
        for(b=a+1;b<=n;b++)
        {
            if(p<(a&b) && (a&b)<k)
                p=a&b;
            if(q<(a|b) && (a|b)<k)
                q=a|b;
            if(r<(a^b) && (a^b)<k)
                r=a^b;
        }
    }
    printf("%d\n%d\n%d",p,q,r);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
