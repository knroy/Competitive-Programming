#include <stdio.h>

int main()
{
    int n,i,j=1,a,x,y,total;
    while(scanf("%d", &n)==1)
    {
        if(n==0)
            break;
        x = 0,y = 0;
        for(i=1;i<=n;i++)
        {
            scanf("%d", &a);
            if(a>=1 && a<=99)
            {
                x++;
            }
            else if(a==0)
            {
                y++;
            }
        }
        total = x - y;
        printf("Case %d: %d\n", j,total);
        j++;
    }
    return 0;
}
