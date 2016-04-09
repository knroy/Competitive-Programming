#include <stdio.h>

int main()
{
    double len,n_len,w,left,right,r;
    int i,n;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%lf", &r);
        w = 5 * r;
        len = 3 * r / 2;
        n_len = -len;
        right = 5.5 * w / 10;
        left = -(w - right);
        printf("Case %d:\n",i);
        printf("%.0lf %.0lf\n%.0lf %.0lf\n%.0lf %.0lf\n%.0lf %.0lf\n",left,len,right,len,right,n_len,left,n_len);
    }
    return 0;
}
