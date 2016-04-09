#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool status[10001];
long int digit[10001];

void siv()
{
    int i,j;
    int N=10001;
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
    status[0]=1;
}

long int counterX(long int n)
{
    long int j,counter=0;
    for(j=1; j<=n; j++)
    {
        if(n%j==0)
        {
            counter++;
        }
    }
    return counter;
}

void factorcounter()
{
    siv();
    long int i,tem;
    digit[0] = 1;
    for(i=1; i<=10001; i++)
    {
        if(status[counterX(i)]==0)
            digit[i] = 0;
        else
            digit[i] = 1;
    }
}

int main()
{
    factorcounter();
    long int t,l,h,i,temp,tem,per;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld %ld",&l,&h);
        per = 0,temp=0;
        for(i=l; i<=h; i++)
        {
            if(digit[i]==0)
            {
                if(per>0)
                    printf(" ");
                printf("%ld",i);
                temp = 1;
                per++;
            }
            if(i==h && temp==1)
                printf("\n");
        }
        if(temp==0)
            printf("-1\n");
    }
    return 0;
}
