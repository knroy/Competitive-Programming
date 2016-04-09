#include <stdio.h>

int main()
{
    long long int t,i,j,a[55],n;
    a[1] = 2;
    a[2] = 3;
    for(i=3; i<55; i++)
    {
        a[i] = a[i-1] + a[i-2];
    }
    scanf("%lld",&t);
    for(i = 1; i<=t; i++)
    {
        scanf("%lld",&n);
        printf("Scenario #%lld:\n%lld\n\n",i,a[n]);
    }
    return 0;
}
