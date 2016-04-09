#include <stdio.h>
#include <math.h>

int main()
{
    long long int t,x;
    double n;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lf", &n);
        x = ((-1+(sqrt(1+8*n)))/2);
        printf("%lld\n", x);
    }
    return 0;
}
