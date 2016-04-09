#include <stdio.h>
#include <math.h>
int main()
{
    int n,t,i,j;
    double a[50005];
    scanf("%d", &t);
    for(j=1; j<=t; j++)
    {
        scanf("%d", &n);
        for(i=0; i<n; i++)
            scanf("%lf", &a[i]);
        while(n>1)
        {
            for(i=0; i<n-1; i++)
            {
                a[i] = (a[i]+a[i+1])/2;
            }
            n--;
        }
        printf("Case #%d: %.3lf\n",j,a[0]);
    }
    return 0;
}

