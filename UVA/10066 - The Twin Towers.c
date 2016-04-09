#include <stdio.h>
#define max 1010

int a[max],b[max],d,e;
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
    int i,j;
    for(i=1; i<=d; i++)
    {
        for(j=1; j<=e; j++)
        {
            if(a[i-1]==b[j-1])
                c[i][j] = c[i-1][j-1]+1;
            else
                c[i][j] = maximum(c[i][j-1],c[i-1][j]);
        }
    }
    return c[d][e];
}

int main()
{
    int m,l=1,i;
    while(1)
    {
        scanf("%d %d", &d,&e);
        if(d==0 && e==0)
            break;
        for(i=0; i<d; i++)
            scanf("%d",&a[i]);
        for(i=0; i<e; i++)
            scanf("%d",&b[i]);
        m = lcs();
        printf("Twin Towers #%d\nNumber of Tiles : %d\n\n",l,m);
        l++;
        memset(c,0,sizeof(c));
    }
    return 0;
}
