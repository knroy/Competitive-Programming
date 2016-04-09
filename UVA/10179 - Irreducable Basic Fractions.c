#include <stdio.h>

long long int phi(long long int n)
{
    long long int result = n ,i;
    for (i = 2 ; i * i <= n ; ++ i )
        if ( n % i == 0 )
        {
            while (n % i == 0)
                n /= i ;
            result -= result / i ;
        }
    if ( n > 1 )
        result -= result / n ;
    return result ;
}

int main()
{
    long long int n,m;
    while(scanf("%lld",&n) && n)
    {
        printf("%lld\n",phi(n));
    }
    return 0;
}

