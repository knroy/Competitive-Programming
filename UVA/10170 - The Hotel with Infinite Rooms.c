#include <stdio.h>

int team(long long int a,long long int b)
{
    long long int i,f,j=0;
    f = 0;
    i = a;
    while(f<b)
    {
        f = i + f;
        i++;
    }
    return i;
}

int main()
{
    long long int s,d,n;
    while(scanf("%lld %lld",&s,&d)!=EOF)
    {
        n = team(s,d)-1;
        printf("%lld\n",n);
    }
    return 0;
}
