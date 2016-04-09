#include<stdio.h>
#include <math.h>

int main()
{
    double a,b,c,s,area,pre_area;
    double m1,m2,m3;
    while(scanf("%lf %lf %lf", &m1,&m2,&m3)==3)
    {
        a = (2 * sqrt((2*(m2)*(m2))+ (2*(m3)*(m3))+(-(m1)*(m1))))/3;
        b = (2 * sqrt((-(m2)*(m2))+ (2*(m3)*(m3))+(2*(m1)*(m1))))/3;
        c = (2 * sqrt((2*(m2)*(m2))+ (-(m3)*(m3))+(2*(m1)*(m1))))/3;
        s = (a+b+c)/2;
        pre_area = s*(s-a)*(s-b)*(s-c);
        if(pre_area>0)
        {
            area = sqrt(pre_area);
            printf("%.3lf\n", area);
        }
        else
        {
            printf("-1.000\n");
        }

    }
    return 0;
}
