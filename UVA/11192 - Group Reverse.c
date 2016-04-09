#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,j,len,m,limit;
    char a[1000],b[1000][1000];
    while(scanf("%d", &n) && n)
    {
        getchar();
        gets(a);
        len = strlen(a);
        m = len - 1;
        limit = len/n;
        for(i=n-1; i>=0; i--)
        {
            for(j=0; j<limit; j++)
            {
                b[i][j]= a[m];
                m--;
            }
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<limit; j++)
            {
                printf("%c", b[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
