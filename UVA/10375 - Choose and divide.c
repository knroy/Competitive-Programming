#include <stdio.h>

double C( int n, int k )
{
    int i;
    double res = 1.0 ;
    for (i = 1 ; i <= k ; ++ i )
        res = res * ( n - k + i ) / i ;
    return (double)( res + 0.01 ) ;
}

int main()
{
    int p,q,r,s;
    while(scanf("%d %d %d %d",&p,&q,&r,&s)==4)
    {
        printf("%lf\n",C(p,q)/C(r,s));
    }
    return 0;
}
/*
10 5 14 9
252.010000
2002.010000
0.125878
*/
