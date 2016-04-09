#include<stdio.h>

int main()
{
    long long unsigned i,n,m,p,q,x,len=0;
    int count=0;
    while(scanf("%llu %llu",&n,&m)==2)
    {
        if(m>n)
        {
            p = n;
            q = m;
        }
        else
        {
            p = m;
            q = n;
        }
        len = 0;
        for(i=p; i<=q; i++)
        {
            x = i;
            count = 0;
            while(1)
            {
                if(x==1)
                {
                    count++;
                    break;
                }
                else if(x%2==0)
                {
                    x = x/2;
                    count++;
                }
                else if(x%2==1)
                {
                    x = 3*x+1;
                    count++;
                }
            }
            if(count>len)
            {
                len = count;
            }
        }
        printf("%llu %llu %llu\n",n,m,len);
    }
    return 0;
}
