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

int adddigit(int x)
{
    int sum = 0;
    while(x!=0)
    {
        int t = x%10;
        sum += t;
        x = x/10;
    }
    return sum;
}

void digitprime()
{
    siv();
    int i,j,mod;
    int n = 1000000;
    digit[0] = 0;
    for(i=1; i<=n; i++)
    {
        digit[i] = digit[i-1];
        mod = adddigit(i);
        if(status[i]==0 && status[mod]==0)
            digit[i]++;
    }
}

int main()
{
    digitprime();
    int t,a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a,&b);
        printf("%d\n",digit[b]-digit[a-1]);
    }
    return 0;
}
