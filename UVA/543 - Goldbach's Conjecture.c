#include <stdio.h>
#include <stdbool.h>
bool status[1100002];

void siv()
{
    int i,j;
    int N=1000000; //20000000
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
    int n,p1,p2;
    siv();
    while(scanf("%d",&n) && n)
    {
        int mid = (int)n/2;
        p1 = 2;
        while(p1<=mid)
        {
            if(status[p1]==0)
            {
                p2 = n - p1;
                if(status[p2]==0)
                    break;
                else
                {
                    p1++;
                }
            }
            else
                p1++;
        }
        if((p1+p2)==n)
            printf("%d = %d + %d\n",n,p1,p2);
        else
            printf("Goldbach's conjecture is wrong.\n");
        p2 = 0;
    }
    return 0;
}
