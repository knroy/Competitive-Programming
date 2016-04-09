#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
    int i;
    int root = (int)sqrt(n);
    for(i=2; i<root+1; i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    int n,c,i,l,len,len1,pri[10000];
    while(scanf("%d %d", &n,&c)==2)
    {
        l = 1;
        for(i=1; i<=n; i++)
        {
            if(isPrime(i))
            {
                pri[l]=i;
                l++;
            }
        }
        l = l -1;
        printf("%d %d: ",n,c);
        if(l%2==0)
        {
            len = c * 2;
            len1 = (l - len)/2;
        }
        else
        {
            len = c * 2 - 1;
            len1 = (l - len)/2;
        }
        if(len>=l)
        {
            for(i=1; i<=l; i++)
            {
                printf("%d",pri[i]);
                if(i==l)
                    printf("\n\n");
                else
                    printf(" ");
            }
        }
        else
        {
            for(i=len1+1; i<=l-len1; i++)
            {
                printf("%d", pri[i]);
                if(i==l-len1)
                    printf("\n\n");
                else
                    printf(" ");
            }
        }
    }
    return 0;

}
