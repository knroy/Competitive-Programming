#include <stdio.h>

int main()
{
    int e,c,total,temp,mod,num;
    while(scanf("%d %d",&e,&c)==2)
    {
        total = e;
        mod = 0;
        num=0;
        while(total>mod)
        {
            temp = total/c;
            mod = total%c;
            num+=temp;
            total = temp + mod;
        }
        printf("%d\n", e+num);
    }
    return 0;
}

