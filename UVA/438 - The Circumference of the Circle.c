#include <stdio.h>
#include <math.h>
#define pi 3.141592653589793

int main()
{
    double a1,a2,b1,b2,c1,c2,g,f,c,r,con1,con2,all,cir;
    while(scanf("%lf %lf %lf %lf %lf %lf",&a1,&a2,&b1,&b2,&c1,&c2)!=EOF)
    {
        con1 = a1*a1 + a2*a2 - b1*b1-b2*b2;
        con2 = b1*b1 + b2*b2 - c1*c1 - c2*c2;
        all = (2*a1-2*b1)*(2*b2-2*c2) - (2*b1-2*c1)*(2*a2-2*b2);
        g = ((2*a2-2*b2)*con2 - con1 * (2*b2-2*c2))/all;
        f = ((2*b1-2*c1)*con1 - con2*(2*a1-2*b1))/all;
        c = -(a1*a1 + a2*a2+2*g*a1+2*f*a2);
        r = sqrt(g*g+f*f-c);
        cir = 2 * pi * r;
        printf("%.2lf\n",cir);
    }
    return 0;
}

