#include <stdio.h>
#include <math.h>

int main()
{
    long int b,p,m,r,result,sqt,i,x;
    while(scanf("%ld %ld %ld",&b,&p,&m)==3)
    {
        i = 0;
        x = 1;
        while(i<p)
        {
            x =(x*b)%m;
            i++;
        }
        printf("%ld\n",x);
    }
    return 0;
}

