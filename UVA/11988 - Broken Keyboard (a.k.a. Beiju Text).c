#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,k,len,b[1000],c[1000];
    char a[10000];
    scanf("%s", a);
    len = strlen(a);
    j = 0,k=0;
    for(i=0; i<len; i++)
    {
        if(a[i]=='[')
        {
            b[j] = i;
            printf("%d\n", b[j]);
            j++;
        }
        else if(a[i]==']')
        {
            c[k] = i;
            printf("%d\n", c[k]);
            k++;
        }
    }
    return 0;
}
