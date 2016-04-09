#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int n;
    char a[10000];
    while(scanf("%s", a)==1)
    {
        n = atoi(a);
        if(n<0)
            break;
        if(a[1]=='x')
        {
            sscanf(a,"%X",&n);
            printf("%d\n",n);
        }
        else
            printf("0x%X\n", n);
    }
    return 0;
}
