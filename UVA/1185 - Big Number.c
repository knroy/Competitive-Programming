#include <stdio.h>
#include <math.h>
long long int digit[10000001];

void digitcount()
{
    long long int n=10000001,i;
    double sum = 0.0;
    digit[0] = 1;
    for(i=1; i<=n; i++)
    {
        sum += log10((double)i);
        digit[i] = ceil(sum);
    }
    digit[1] = 1;
}

int main()
{
    digitcount();
    long long int t,n,i;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        printf("%lld\n",digit[n]);
    }
    return 0;
}
