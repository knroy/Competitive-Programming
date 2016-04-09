#include<stdio.h>

int main()
{
    long long unsigned i,n,m,p,q,x,len=0,bignum,t;
    int count=0;
    while(scanf("%llu %llu",&n,&m)==2)
    {
        if(n==0 && m==0)
            break;
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
        bignum = 0;
        for(i=p; i<=q; i++)
        {
            x = i;
            count = 0;
            while(1)
            {
                if(i==1)
                {
                    len = 4;
                    bignum = 1;
                    break;
                }
                else
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
            }
            if(count>len)
            {
                len = count;
                bignum = i;
            }
        }
        printf("Between %llu and %llu, %llu generates the longest sequence of %llu values.\n",p,q,bignum,len-1);
    }
    return 0;
}
