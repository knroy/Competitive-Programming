#include <stdio.h>
#include <math.h>

int main()
{
    long long int n,r,temp,i=1;
    while(scanf("%lld %lld",&r,&n)==2)
    {
        if(r==0 && n==0)
            break;
        temp = (r - 1)/n;
        if(temp>26)
            printf("Case %lld: impossible\n",i);
        else
            printf("Case %lld: %lld\n",i,temp);
        i++;
    }
    return 0;
}
