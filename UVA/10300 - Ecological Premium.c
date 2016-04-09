#include <stdio.h>

int main()
{
    long int a,b,c,d,n,t;
    scanf("%ld", &t);
    while(t--)
    {
        scanf("%ld", &n);
        d = 0;
        while(n--)
        {
            scanf("%ld %ld %ld", &a,&b,&c);
            d+= a*c;
        }
        printf("%ld\n",d);
    }
    return 0;
}
