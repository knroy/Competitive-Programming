#include <stdio.h>

int main()
{
    int t,n,k,p,i,m,temp;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d",&n,&k,&p);
        temp = n - k;
        m = p - temp;
        if(n==k && k==p)
            printf("Case %d: %d\n",i,n);
        else if(m<0)
            printf("Case %d: %d\n",i,k+p);
        else if(m==0)
            printf("Case %d: %d\n",i,n);
        else
        {
            if(m%n==0)
                printf("Case %d: %d\n",i,n);
            else
                printf("Case %d: %d\n",i,m%n);
        }
    }
    return 0;
}
