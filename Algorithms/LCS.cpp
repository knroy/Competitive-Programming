#include <cstdio>
#include <cstring>
#define max 1000

using namespace std;

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
    int m;
    while(gets(a) && gets(b))
    {
        m = lcs();
        printf("%d\n",m);
        memset(c,0,sizeof(c));
    }
    return 0;
}
