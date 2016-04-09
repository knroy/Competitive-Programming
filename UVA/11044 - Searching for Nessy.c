#include <stdio.h>

int main()
{
    long int n,a,b,nessy;
    scanf("%ld", &n);
    while(n--)
    {
        scanf("%ld %d",&a,&b);
        nessy = ((long int)a/3) * ((long int)b/3);
        printf("%ld\n",nessy);
    }
    return 0;
}
