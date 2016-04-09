#include <stdio.h>
#include <math.h>
long long int f[100000000];

long long int fibo(long long int n, long long int p)
{
    f[0] = 0;
    f[1] = 1;
    long long int i;
    for(i=2; i<=n; i++)
    {
        f[i] = (f[i-1] + f[i-2])%p;
    }
    return f[n];
}

int main()
{
    long long int n,p,m,i;
    while(scanf("%lld %lld",&n,&p)==2)
    {
        m = pow(2,p);
        printf("%lld\n",fibo(n,m));
    }
    return 0;
}
