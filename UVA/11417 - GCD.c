#include <stdio.h>

int gcd(int a,int b)
{
    if(b%a == 0)
        return a;
    return gcd(b,a%b);
}

int main()
{
    int g,n,i,j;
    while(scanf("%d", &n) && n )
    {
        g = 0;
        for(i=1; i<n; i++)
        {
            for(j=i+1; j<=n; j++)
            {
                g+=gcd(i,j);
            }
        }
        printf("%d\n", g);
    }
    return 0;
}
