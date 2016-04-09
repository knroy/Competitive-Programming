#include <stdio.h>
#include <math.h>

int main()
{
    double b,c,d,u,v,a,t,s;
    int i,j,n;
    i = 1;
    while(1)
    {
        scanf("%d", &n);
        if(n==0)
        {
            break;
        }
        else
            scanf("%lf %lf %lf",&b,&c,&d);
        if(n==1)
        {
            u = b;
            v = c;
            t = d;
            a = (v-u)/t;
            s = u*t + .5 * a * t * t;
            printf("Case %d: %.3lf %.3lf\n", i,s,a);
        }
        else if(n==2)
        {
            u = b;
            v = c;
            a = d;
            t = (v-u)/a;
            s = u*t + .5 * a * t * t;
            printf("Case %d: %.3lf %.3lf\n", i,s,t);
        }
        else if(n==3)
        {
            u = b;
            a = c;
            s = d;
            v = sqrt(u*u+2*a*s);
            t = (v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",i,v,t);
        }
        else if(n==4)
        {
            v = b;
            a = c;
            s = d;
            u = sqrt(v*v - 2*a*s);
            t = (v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",i,u,t);
        }
        i++;
    }
    return 0;
}
