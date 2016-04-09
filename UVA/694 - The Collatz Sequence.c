#include <stdio.h>
#include <math.h>

int main()
{
    long int num,lim,steps,a,l,i=1;
    while(scanf("%ld %ld",&num,&lim)==2)
    {
        a = num;
        l = lim;
        if(num<0 && lim<0)
            break;
        steps = 1;
        while(num>1)
        {
            if(num%2==0)
                num = num/2;
            else
                num = (num*3 + 1);
            if(num>lim)
                break;
            steps++;
        }
        printf("Case %ld: A = %ld, limit = %ld, number of terms = %ld\n",i++,a,l,steps);
    }
    return 0;
}
