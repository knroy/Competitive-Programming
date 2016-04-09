#include<stdio.h>
#include<math.h>
#define gr (1+sqrt(5))/2

int main()
{
    double ans,c=1,d=1;
    long long int n,i;
    while(scanf("%lld", &n)==1)
    {
        c=1,d=1;
        if(n==0)
        {
            break;
        }
        else
        {
            for(i=1; i<=n+1; i++)
            {
                c = c*gr;
                d = d*(1-gr);
                ans = (c-d)/sqrt(5);
            }
            printf("%.0lf\n", ans);
        }
    }
    return 0;
}


