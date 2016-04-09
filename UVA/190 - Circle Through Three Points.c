#include <stdio.h>
#include <math.h>
#define In freopen("In.txt", "r", stdin);
#define Out freopen("out.txt", "w", stdout);

int main()
{
    In
    Out
    double a1,a2,b1,b2,c1,c2,g,f,c,h,k,r,G,F,con1,con2,all;
    while(scanf("%lf %lf %lf %lf %lf %lf",&a1,&a2,&b1,&b2,&c1,&c2)!=EOF)
    {
        con1 = a1*a1 + a2*a2 - b1*b1-b2*b2;
        con2 = b1*b1 + b2*b2 - c1*c1 - c2*c2;
        all = (2*a1-2*b1)*(2*b2-2*c2) - (2*b1-2*c1)*(2*a2-2*b2);
        g = ((2*a2-2*b2)*con2 - con1 * (2*b2-2*c2))/all;
        f = ((2*b1-2*c1)*con1 - con2*(2*a1-2*b1))/all;
        c = -(a1*a1 + a2*a2+2*g*a1+2*f*a2);
        r = sqrt(g*g+f*f-c);
        h = -g;
        k = -f;
        if(c==-0.0)
            c = 0;
        else if(g==-0.0)
            g = 0;
        else if(f==-0.0)
            f = 0;
        else if(r==-0.0)
            r = 0;
        G = 2 * g;
        F = 2 * f;
        printf("(x ");
        if(h>=0)
            printf("- %.3lf)^2 + (y ",-g);
        else if(h<0)
            printf("+ %.3lf)^2 + (y ",g);
        if(k>=0)
            printf("- %.3lf)^2 = ",-f);
        else if(k<0)
            printf("+ %.3lf)^2 = ",f);
        printf("%.3lf^2\n",r);
        printf("x^2 + y^2 ");
        if(G>=0)
            printf("+ %.3lfx ",G);
        else
            printf("- %.3lfx ",-G);
        if(F>=0)
            printf("+ %.3lfy ",F);
        else
            printf("- %.3lfy ",-F);
        if(c>=0)
            printf("+ %.3lf ",c);
        else
            printf("- %.3lf ",-c);
        printf("= 0\n\n");
    }
    return 0;
}
