#include <stdio.h>

int gcd(long long int a,long long int b)
{
    long long int t,x;
    if(a==0)
        return a;
    else if(b==0)
        return b;
    else
        while(b!=0)
        {
            t = b;
            b = a%b;
            a = t;
        }
    return a;
}

int main()
{
    long long int g,l,gc,lc;
    int i,t;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%lld %lld", &g,&l);
        gc = gcd(g,l);
        lc = (g*l)/gc;
        if(gc==g && lc==l)
            printf("%lld %lld\n",gc,lc);
        else
            printf("-1\n");
    }
    return 0;
}
