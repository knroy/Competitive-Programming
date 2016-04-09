#include <stdio.h>

int main()
{
    int i,j,n,t;
    double a,b,c,sum;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&t);
        for(j=1; j<=t; j++)
        {
            scanf("%lf %lf %lf", &a,&b,&c);
            sum = (a+b)/2 - c;
            printf("%.2lf\n", sum);
        }
    }
    return 0;
}
