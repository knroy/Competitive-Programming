#include <stdio.h>

int main()
{
    long long int a,b;
    while(scanf("%lld", &a)==1)
    {
        b = a*a*(a+1)*(a+1)/4;
        printf("%lld\n", b);
    }
    return 0;
}
