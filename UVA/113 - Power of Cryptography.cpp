#include <stdio.h>
#include <math.h>

int main()
{
    double a,n,b;
    while(scanf("%lf", &a)!=EOF)
    {
        scanf("%lf", &n);
        b = pow(n,(1/a));
        printf("%.0lf\n", b);
    }
    return 0;
}
