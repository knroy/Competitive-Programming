#include <stdio.h>
#include <math.h>
#define pi 2*acos(0.0)

int main()
{
    int n,i=1;
    double area, r,o_r,circle,degree,area_s,area_c,area_o;
    while(scanf("%d %lf",&n,&area)==2)
    {
        if(n<3)
            break;
        else
        {
            degree = sin(2*pi/n);
            r = sqrt((2*area)/(n*degree));
            area_c = pi * r * r;
            area_s = area_c - area;
            o_r = r * cos(pi/n);
            area_o = area-pi * o_r* o_r;
            printf("Case %d: %.5lf %.5lf\n",i,area_s, area_o);
        }
        i++;
    }
    return 0;
}
