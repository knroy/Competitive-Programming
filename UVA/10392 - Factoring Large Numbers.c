#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool status[1100002];

void siv()
{
    int i,j;
    long int N=1000000;
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

int charadd(long long int x)
{
    int sum=0;
    while(x!=0)
    {
        sum += x%10;
        x = x/10;
    }
    return sum;
}

int main()
{
    long long int n,k,l,nn;
    int s;
    siv();
    while(scanf("%lld",&n)==1)
    {
        if(n<0)
            break;
        l = sqrt(n);
        k = 2;
        nn = n;
        while(k<=l)
        {
            if(status[k]==0)
            {
                if(n%k==0)
                {
                    printf("    %lld\n",k);
                    n = n/k;
                    if(n<=1)
                        break;
                }
                else
                    k++;
            }
            else
                k++;
            if(k>=1100002)
                break;
        }
        if(n!=1)
        {
            printf("    %lld\n",n);
        }
        printf("\n");
    }
    return 0;
}

