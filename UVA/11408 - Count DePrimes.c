#include <stdio.h>
#include <stdbool.h>
bool status[1100002];
int digit[1000000];

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

int addfactor(int x)
{
    int sum = 0,k;
    int l=sqrt(x);
    k = 2;
    while(k<=l)
    {
        if(status[k]==0)
        {
            if(x%k==0)
            {
                sum += k;
                x = x/k;
                if(x==1)
                    break;
            }
            else
                k++;
        }
        else
            k++;
    }
    if(x!=1)
        sum += x;
    return sum;
}

void howmany()
{
    siv();
    int i,j,mod;
    int n = 1000000;
    digit[1] = 0;
    for(i=2; i<=22; i++)
    {
        digit[i] = digit[i-1];
        if(status[i]==0)
        {
            printf("%d %d\n",i,i);
            digit[i]++;
        }
        else if(status[i]!=0)
        {
            mod = addfactor(i);
            if(status[mod]==0)
                printf("%d %d\n",i,mod);
            digit[i]++;

        }
        mod = 0;
    }
}

int main()
{
    howmany();
    int a,b;
    while(scanf("%d",&a) && a)
    {
        scanf("%d",&b);
        printf("%d\n",digit[b]-digit[a-1]);
    }
    return 0;
}
