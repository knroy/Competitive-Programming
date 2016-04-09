#include <stdio.h>

int ans[5000];

int repeat(int n)
{
    int num[10]= {0};
    while(n!=0)
    {
        int temp = n%10;
        n = n / 10;
        num[temp]++;
        if(num[temp]>1)
        {
            return 1;
        }
    }
    return 0;
}

void reppeated()
{
    ans[0] = 0;
    int i;
    for(i=1; i<=5000; i++)
    {
        if(repeat(i))
            ans[i] = ans[i-1];
        else
            ans[i] = ans[i-1] + 1;
    }
}

int main()
{
    int n,m;
    reppeated();
    while(scanf("%d %d",&n,&m)==2)
    {
        printf("%d\n",ans[m]-ans[n-1]);
    }
    return 0;
}
