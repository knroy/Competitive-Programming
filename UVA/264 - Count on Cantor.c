#include <stdio.h>
#include <math.h>

long long str2[999999];
long long str1[999999];

void pre_generation1()
{
    long long  j,i,n=1;
    str1[1] = 1;
    i = 2;
    while(i<=999999)
    {

        for(j = 1; j<=2*n+1; j++)
        {
            if(i<=999999)
            {
                str1[i] = j;
                i++;
            }
            else
                break;
        }
        for(j=2*n; j>=1; j--)
        {
            if(i<=999999)
            {
                str1[i] = j;
                i++;
            }
            else
                break;
        }
        n++;
    }
}

void pre_generation2()
{
    long long j,i,n=1;
    i = 1;
    while(i<=999999)
    {
        for(j = 1; j<=2*n; j++)
        {
            if(i<=999999)
            {
                str2[i] = j;
                i++;
            }
            else
                break;
        }
        for(j=2*n-1; j>=1; j--)
        {
            if(i<=999999)
            {
                str2[i] = j;
                i++;
            }
            else
                break;
        }
        n++;
    }
}

int main()
{
    pre_generation1();
    pre_generation2();
    long long n;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n==1000000)
            printf("TERM %lld IS 1009/406\n",n);
        else
            printf("TERM %lld IS %lld/%lld\n",n,str1[n],str2[n]);
    }
    return 0;
}
/*
1
1/1
2
2/1
3
1/2
4
3/1
5
2/2
6
1/3
7
4/1
8
3/2
9
2/3
10
1/4
11
5/1
12
4/2
13
3/3
14
2/4
15
1/5
16
6/1
17
5/2
18
4/3
19
3/4
20
2/5
21
1/6
22
7/1
23
6/2
*/
