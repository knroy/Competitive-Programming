#include <stdio.h>

int main()
{
    int t,i;
    double c,f;
    scanf("%d", &t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf %lf", &c, &f);
        f = f + c * 9 / 5 + 32;
        c = 5*(f-32)/9;
        printf("Case %d: %.2lf\n", i, c);
    }
    return 0;
}
