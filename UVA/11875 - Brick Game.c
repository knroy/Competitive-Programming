#include <stdio.h>

int main()
{
    int i,j,t,n,mem[12],c;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        for(j=0; j<n; j++)
            scanf("%d",&mem[j]);
        c = (int)n/2;
        printf("Case %d: %d\n",i,mem[c]);
    }
    return 0;
}
