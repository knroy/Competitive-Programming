#include <stdio.h>

int main()
{
    int init,a,b,c,d,total,c1,c2,c3;
    while(scanf("%d %d %d %d",&a,&b,&c,&d)==4)
    {
        if(a==0 && b==0 && c==0 && d==0)
            break;
        c1 = (a-b);
        if(a<b)
        {
            c1 = 40 - b + a;
        }
        c2 = (c-b);
        if(b>c)
        {
            c2 = 40 - b + c;
        }
        c3 = c-d;
        if(d>c)
        {
            c3 = 40 - d + c;
        }
        total = 720 + c1*9 + 360 + c2*9 + c3*9;
        printf("%d\n",total);
    }
    return 0;
}

