#include <stdio.h>

int main()
{
    long long int fib[100],a,b,i,j,n,sum;
    fib[0]=0;
    fib[1]=1;
    for(i=2; i<100; i++)
    {
        fib[i] = fib[i-1]+ fib[i-2];
        printf("%lld ", fib[i]);
    }/*
    scanf("%lld", &n);
    for(i=1; i<=n; i++)
    {
        sum = 0;
        scanf("%lld &lld",&a,&b);
        for(j=a; j<=b; j++)
        {
            sum+= fib[j];
        }
        printf("%lld\n", sum);
    }*/
    return 0;
}
