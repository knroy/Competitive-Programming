#include <stdio.h>
#include <math.h>

long long int H(int n)
{
    long long int n2 = sqrt(n);
    long long res = 0,i;
    for(i = 1; i<=n2; i++)
    {
        res+= n/i;
    }
    return res*2-n2*n2;
}

int main()
{
    long long int a;
    int t;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%lld", &a);
        printf("%lld\n", H(a));
    }
    return 0;
}
