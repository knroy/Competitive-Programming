#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool status[11000020];

void siv()
{
    int i,j;
    int N=1000000;
    int sq=sqrt(N);
    for(i=4; i<=N; i+=2) status[i]=1;
    for(i=3; i<=sq; i+=2)
    {
        if(status[i]==0)
        {
            for(j=i*i; j<=N; j+=i) status[j]=1;
        }
    }
    status[1]=1;
}

int main()
{
    long long int n,l,i,k;
    siv();
    while(scanf("%lld",&n)==1)
    {
        if(n==0) break;
        printf("%lld = ",n);
        if(n<0)
        {
            printf("-1 x ");
            n=-1*n;
        }
        int l=sqrt(n);
        k = 2;
        while(k<=l)
        {
            if(status[k]==0)
            {
                if(n%k==0)
                {
                    printf("%lld",k);
                    n = n/k;
                    if(n>1)
                        printf(" x ");
                    if(n==1)
                        break;
                }
                else
                    k++;
            }
            else
                k++;
        }
        if(n!=1)
            printf("%lld\n",n);
        else if(n==1)
            printf("\n");
    }
    return 0;
}

