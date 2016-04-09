#include <stdio.h>

int main()
{
    int n,t,i,j,a,b=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &t);
        for(j=1; j<=t; j++)
        {
            scanf("%d", &a);
            if(a>b)
            {
                b = a;
            }
        }
        printf("Case %d: %d\n", i ,b);
        b = 0;
    }
    return 0;
}
