#include <stdio.h>
#include <math.h>

int reversa(long long int k)
{
    long long int mod = 0;
    while(k>0)
    {
        mod = mod * 10 + k%10;
        k = k/10;
    }
    return mod;
}

int main()
{
    long long int a,b;
    int i,j,t;
    while(scanf("%d", &t)==1)
    {
        for(i=1; i<=t; i++)
        {
            scanf("%lld", &a);
            j = 0;
            while(1)
            {
                b = reversa(a);
                if(a==b)
                    break;
                else
                {
                    a = a + b;
                    j++;
                }
            }
            printf("%d %lld\n",j,b);
        }
    }
    return 0;
}
