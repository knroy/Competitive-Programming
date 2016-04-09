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
    int t,s;
    siv();
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        n = n + 1;
        while(1)
        {
            int sum = 0;
            nn = n;
            s = charadd(n);
            l = sqrt(n);
            k = 2;
            while(k<=l)
            {
                if(status[k]==0)
                {
                    if(n%k==0)
                    {
                        sum += charadd(k);
                        n = n/k;
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
            {
                sum += charadd(n);
            }
            if(s==sum && n!=nn)
            {
                break;
            }
            n = nn;
            n++;
        }
        printf("%lld\n",nn);
    }
    return 0;
}
