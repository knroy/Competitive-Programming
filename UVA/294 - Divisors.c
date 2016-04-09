#include <stdio.h>

long long int phi(long long int n)
{
    long long result=2,i;
    if(n==1)
        return 1;
    for(i=2; i<=n; i++)
    {
        if(n%i==0)
        {
            result++;
            n = n/i;
        }
    }
    return result;
}

int main()
{
    long long int a,b,i,n,d,bn,cnt;
    scanf("%lld",&n);
    while(n--)
    {
        scanf("%lld %lld",&a,&b);
        bn = 0,cnt = 0;
        for(i=a; i<=b; i++)
        {
            d = phi(i);
            if(d>cnt)
            {
                cnt = d;
                bn = i;
            }
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",a,b,bn,d);
    }
    return 0;
}
