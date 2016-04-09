#include <stdio.h>
#include <math.h>
#define pi 2*acos(0)

int main()
{
    double a,b,c,t_area,in_circle,in_circle_r,y_circle_area,s,r;
    while(scanf("%lf %lf %lf", &a,&b,&c)==3)
    {
        s = (a+b+c)/2;
        t_area = sqrt(s*(s-a)*(s-b)*(s-c));
        in_circle_r = 2*t_area / (a+b+c);
        in_circle = pi * in_circle_r * in_circle_r;
        r = a * b * c / sqrt((a+b+c)*(a+b-c)*(a+c-b)*(b+c-a));
        y_circle_area = pi * r * r  - t_area;
        t_area = t_area - in_circle;
        printf("%.4lf %.4lf %.4lf\n", y_circle_area,t_area,in_circle);
    }
    return 0;
}
