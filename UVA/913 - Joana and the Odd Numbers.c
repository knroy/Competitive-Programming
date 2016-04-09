#include <stdio.h>

int main()
{
    long long n,last,total;
    while(scanf("%lld",&n)==1)
    {
        last = (n*(n+1))/2 + n/2;
        total = 3*last - 6;
        printf("%lld\n",total);
    }
    return 0;
}
