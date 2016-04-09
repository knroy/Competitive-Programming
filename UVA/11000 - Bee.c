#include<stdio.h>

int main()
{
    long long int a[60],b[60];
    int i,n;
    a[0]=1;
    a[1]=1;
    for(i=2; i<60; i++)
    {
        a[i] = a[i-1]+a[i-2];
    }
    b[0] = 0;
    b[1] = 1;
    for(i=2; i<60; i++)
    {
        b[i] = b[i-1]+b[i-2];
    }
    while(scanf("%d", &n)==1)
    {
        if(n==-1)
        {
            break;
        }
        if(n==0)
            printf("0 1\n");
        else
        {
            printf("%lld %lld\n",a[n]+a[n-1]-1, a[n]+a[n-1]-1+b[n+1]);
        }
    }
    return 0;
}
