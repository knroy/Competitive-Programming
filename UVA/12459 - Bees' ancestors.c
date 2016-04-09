#include<stdio.h>

int main()
{
    long long a[90];
    int i,n;
    a[0]=1;
    a[1]=1;
    for(i=2; i<81; i++)
    {
        a[i] = a[i-1]+a[i-2];
    }
    while(scanf("%d", &n)==1)
    {
        if(n==0)
        {
            break;
        }
        else
        {
            printf("%lld\n", a[n]);
        }
    }
    return 0;
}
