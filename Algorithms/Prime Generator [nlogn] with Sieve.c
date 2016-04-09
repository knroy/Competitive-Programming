#include <stdio.h>
#include <stdbool.h>
bool status[1100002];

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
    int n;
    siv();
    while(scanf("%d",&n)==1)
        if(status[n]==0)
        {
            printf("%d is a prime\n",n);
        }
        else
            printf("%d is not a prime\n",n);

}

/*
#include<stdio.h>

int main()
{
    long long int i,num;
    while(scanf("%lld",&num))
    {
        i=2;
        while(i<=num/2)
        {
            if(num%i==0)
            {
                printf("Not a Prime number\n");
                break;
            }
            i++;
        }
        if(i==(num/2)+1)
            printf("Prime number\n");
    }
    return 0;
}
*/
