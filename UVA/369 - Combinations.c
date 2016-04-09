#include <stdio.h>

int main()
{
    double n,m,p,q,l,i,total;
    while(scanf("%lf %lf", &n,&m)==2)
    {
        if(n==0 && m==0)
            break;
        total = 1;
        p = n - m;
        if(p<=m)
        {
            q = p;
            l = m;
        }
        else
        {
            q = m;
            l = p;
        }
        for(i=n; i>q; i--)
        {
            total = (total * i) / l;
            l--;
        }
        printf("%.0lf things taken %.0lf at a time is %.0lf exactly.\n",n,m,total);
    }
    return 0;
}
