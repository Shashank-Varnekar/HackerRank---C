#include <stdio.h>

int main() 
{
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]s", s);
    s = realloc(s, strlen(s) + 1);
    for (char *c = s; *c != NULL; c++) 
    {
        if (*c == ' ') 
        {
            *c = '\n';
        }
    }
    printf("%s", s);
    return 0;
}
