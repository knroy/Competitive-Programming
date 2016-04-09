#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool status[1001];

void siv()
{
    int i,j;
    int N=1001;
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

int addfactor(int n,int s)
{
    int i,sum=1;
    for(i=2; i<=n; i++)
        if(n%i==0)
            sum += i;
    if(sum==s)
        return 0;
    return 1;
}

int main()
{
    siv();
    int s,i,sum,c=1;
    while(scanf("%d",&s) && s)
    {
        int temp = 0;
        for(i=s; i>=1; i--)
        {
            sum = 1;
            if(status[i]==0)
            {
                sum += i;
                if(sum == s)
                {
                    printf("Case %d: %d\n",c,i);
                    temp = 1;
                    break;
                }
            }
            else
            {
                if(addfactor(i,s)==0)
                {
                    printf("Case %d: %d\n",c,i);
                    temp = 1;
                    break;
                }
            }
        }
        if(temp==0)
            printf("Case %d: -1\n",c);
        c++;
    }
    return 0;
}
