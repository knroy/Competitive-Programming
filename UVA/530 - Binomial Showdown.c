#include <stdio.h>

int main()
{
    int n,k,i;
    long long C;
    while(1)
    {
        scanf("%d %d",&n,&k);
        if(n==0 && k==0) break;
        if(k>n/2)
            k=n-k;
        C=1;
        for(i=0; i<k; i++)
            C = C*(n-i)/(1+i);
        printf("%ld\n",C);
    }
    return 0;
}

/*

Time Limit For Using function

#include <stdio.h>
#include <math.h>

long int C (long int n,long int k)
{
    int i;
    double res = 1;
    for (i=1; i<=k; ++i)
        res = res * (n-k+i) / i;
    return (long int) (res + 0.01);
}

int main()
{
    long int n,m,p,q,l,i,total;
    while(scanf("%ld %ld", &n,&m)==2)
    {
        if(n==0 && m==0)
            break;
        printf("%ld\n",C(n,m));
    }
    return 0;
}

*/
