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
    siv();
    long long cpy,n,l,i,k,flag;
    while(scanf("%lld",&n)==1)
    {
        if(n==0) break;
        cpy = n;
        long long int l=sqrt(n);
        k = 2;
        flag = 0;
        int counter = 0;
        while(k<=l)
        {
            if(status[k]==0)
            {
                if(n%k==0)
                {
                    if(flag!=k)
                    {
                        flag = k;
                        counter++;
                    }
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
            counter++;
        }
        printf("%lld : %d\n",cpy,counter);
    }
    return 0;
}
