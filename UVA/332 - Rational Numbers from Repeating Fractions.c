#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int samecheck(char a[],int len,int j)
{
    int i;
    for(i=2; i<len; i++)
    {
        if(a[i]!= j + '0')
            return 0;
    }
    return 1;
}

long long int o_pow(long long int n)
{
    long long int result=1,i;
    for(i=1; i<=n; i++)
        result *= 10;
    return result;
}

long long int gcd(long long int a,long long int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}

int main()
{
    long long int j,i,n,k,len,denuma,numa,t=1;
    char str[50];
    double p,temp;
    while(scanf("%lld",&j)==1)
    {
        if(j==-1)
            break;
        getchar();
        scanf("%s",str);
        len = strlen(str);
        for(i=0; i<len; i++)
        {
            if(str[i]=='.')
                break;
        }
        k = len-(i+j+1);
        sscanf(str,"%lf",&p);
        if(j==0)
        {
            numa = ceil(o_pow(k)*p);
            denuma = o_pow(len-2);
        }
        else if(j==len-2)
        {
            if(samecheck(str,strlen(str),j))
            {
                numa = j;
                denuma = 9;
            }
            else
            {
                numa = ceil((o_pow(k+j)*p) - (o_pow(k)*p));
                denuma = o_pow(k+j) - o_pow(k);
            }
        }
        else
        {
            numa = ceil((o_pow(k+j)*p) - (o_pow(k)*p));
            denuma = o_pow(k+j) - o_pow(k);
        }
        n  = gcd(numa,denuma);
        printf("Case %lld: %lld/%lld\n",t,numa/n,denuma/n);
        t++;
    }
    return 0;
}
