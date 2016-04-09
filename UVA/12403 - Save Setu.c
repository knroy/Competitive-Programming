#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,amount=0,k;
    char a[10000];
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%s", a);
        if(strcasecmp(a,"donate")==0)
        {
            scanf("%d", &k);
            amount+= k;
        }
        else
        {
            printf("%d\n",amount);
        }
    }
    return 0;
}
