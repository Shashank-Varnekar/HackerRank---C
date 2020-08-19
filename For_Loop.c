#include <stdio.h>

int main() 
{
    int a, b, i;
    scanf("%d\n%d", &a, &b);
    char *str[]={"","one","two","three","four","five","six","seven","eight","nine","\0"};
    for (i=a;i<=b;i++)
    {
        if (i<=9)
            printf("%s\n",str[i]);
        else if (i%2==0)
        {
            printf("even\n");
        }
        else
            printf("odd\n");    
    }
    return 0;
}
