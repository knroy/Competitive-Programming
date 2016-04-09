#include<stdio.h>
#define pi acos(-1)

int main()
{
    int i,n;
    double w, h, r,a,area;
    scanf("%d", &n);
    {
        for(i=1; i<=n; i++)
        {
            scanf("%lf", &w);
            h = (3*w)/5;
            r = w/5;
            area = pi * r* r;
            a = h*w - area;
            printf("%.2lf %.2lf\n", area, a);
        }
    }
    return 0;
}
