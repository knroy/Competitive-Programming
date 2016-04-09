#include <stdio.h>
#include <math.h>

int main()
{
    long long p,q,n,total,pp,a,b;
    while(scanf("%lld %lld", &p,&q)==2)
    {
        if(p==0 && q==0)
            break;
        scanf("%lld", &n);
        pp = sqrt(p*p - 4 * q);
        a = (p+pp)/2;
        b = p - a;
        total = pow(a,n) + pow(b,n);
        printf("%lld\n",total);
    }
    return 0;
}
