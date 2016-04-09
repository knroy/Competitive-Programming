#include <stdio.h>
#include <string.h>

int main()
{
    int len,n;
    char a[10000];
    scanf("%d", &n);
    getchar();
    while(n--)
    {
        scanf("%s", a);
        len = strlen(a);
        if(strcasecmp(a, "1")==0 || strcasecmp(a,"4")==0 || strcasecmp(a,"78")==0)
            printf("+\n");
        else if(a[len-1]=='5' && a[len-2]=='3')
            printf("-\n");
        else if(a[0]=='1' && a[1]=='9' && a[2]=='0')
            printf("?\n");
        else if(a[0]=='9' && a[len-1]=='4')
            printf("*\n");
    }
    return 0;
}
