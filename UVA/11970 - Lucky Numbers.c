#include <stdio.h>
#include <math.h>

int isSquare(long long n)
{
    long long c,ans;
    c = sqrt(n);
    ans = c * c;
    if(ans == n)
        return 0;
    return 1;
}

int isPerfact(long long n,long long d)
{
    long long ans;
    ans = n/d;
    if(n==ans*d)
        return 0;
    return 1;
}

int main()
{
    int t,i,temp;
    long long n,denu,numa,pre,x;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld",&n);
        temp = 0;
        x = sqrt(n-1);
        printf("Case %d: ",i);
        while(x<n)
        {
            numa = x;
            denu = n - x;
            if(isSquare(denu)==0)
            {
                denu = sqrt(denu);
                if(isPerfact(numa,denu)==0)
                {
                    if(temp>0)
                        printf(" ");
                    printf("%lld",x);
                    temp++;
                }
            }
            x++;
        }
        printf("\n");
    }
    return 0;
}
