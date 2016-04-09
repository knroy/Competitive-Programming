#include <stdio.h>
#include <string.h>
#define max 1010
char a[max],b[max];
int c[max][max];

int maximum(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}

int lcs(void)
{
    int lena = strlen(a);
    int lenb = strlen(b);
    int i,j;
    for(i=1; i<=lena; i++)
    {
        for(j=1; j<=lenb; j++)
        {
            if(a[i-1]==b[j-1])
                c[i][j] = c[i-1][j-1]+1;
            else
                c[i][j] = maximum(c[i][j-1],c[i-1][j]);
        }
    }
    return c[lena][lenb];
}

int main()
{
    int m,l=1;
    while(gets(a))
    {
        if(a[0]=='#' && a[1]=='\0')
            break;
        gets(b);
        m = lcs();
        printf("Case #%d: you can visit at most %d cities.\n",l,m);
        l++;
        memset(c,0,sizeof(c));
    }
    return 0;
}
