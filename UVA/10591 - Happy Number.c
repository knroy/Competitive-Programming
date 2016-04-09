#include <stdio.h>
#include <math.h>

int main()
{
    long long int a,num,b,t,i,mod,sum,l;
    scanf("%lld", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld", &num);
        b = num;
        sum = 0;
        l = 0;
        while(num!=1 && l<256)
        {
            sum = 0;
            while(num!=0)
            {
                mod = num%10;
                sum+= mod*mod;
                num/=10;
            }
            num = sum;
            l++;
        }
        if(num==1)
            printf("Case #%lld: %lld is a Happy number.\n",i,b);
        else
            printf("Case #%lld: %lld is an Unhappy number.\n",i,b);
    }
    return 0;
}
