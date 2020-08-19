#include <stdio.h>

int main() 
{

    char c,a[10],b[20];
    scanf("%c",&c);
    scanf("%s",a);
    scanf("\n%[^\n]s",b);
    printf("%c",c);
    printf("\n%s",a);
    printf("\n%s",b);    
    return 0;
}
