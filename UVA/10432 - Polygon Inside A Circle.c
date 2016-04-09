#include <stdio.h>
#define pi 2*acos(0.0)

int main()
{
    double n,r,area,degree,red;
    while(scanf("%lf %lf", &r, &n)==2)
    {
        degree = 360/n;
        red = sin(degree*pi/180);
        area = .5 * n * r * r * red;
        printf("%.3lf\n", area);
    }
    return 0;
}
