#include <stdio.h>
#include <math.h>

int main()
{
    double d,v,u,tmin,tstraight,w,dif;
    int i,n;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%lf %lf %lf",&d,&v,&u);
        tmin = d/u;
        w = u*u - v*v;
        if(w>0)
        {
            tstraight = d / sqrt(w);
            dif = fabs(tstraight-tmin);
        }
        if(w<=0 || v==0)
        {
            printf("Case %d: can't determine\n",i);
        }
        else
        {
            printf("Case %d: %.3lf\n",i,dif);
        }
    }
    return 0;
}
