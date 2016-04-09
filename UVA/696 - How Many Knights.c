#include <stdio.h>

int main()
{
    int a,b,c,d,x,ret,block,mod;
    while(scanf("%d %d", &a,&b)==2)
    {
        if(a==0 && b==0)
            break;
        if(a<=b)
        {
            d = b;
            c = a;
        }
        else
        {
            c = b;
            d = a;
        }
        if(c<=0)
        {
            x = 0;
        }
        else if(c==1)
        {
            x = d;
        }
        else if(c==2)
        {
            block = d/4;
            mod = d%4;
            if(mod>=c)
                x = block*4 + c*2;
            else
                x = block *4 + mod*2;
        }
        else
            x = (a*b+1)/2;
        printf("%d knights may be placed on a %d row %d column board.\n",x,a,b);
    }
    return 0;
}
