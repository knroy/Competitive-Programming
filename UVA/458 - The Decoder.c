#include <stdio.h>
#include <string.h>

int main()
{
    char a[10000];
    int i,len;
    while(scanf("%s", &a)!=EOF)
    {
        len = strlen(a);
        for(i=0; i<len; i++)
        {
            printf("%c", a[i]-7);
        }
        printf("\n");
    }
    return 0;
}
