#include <stdio.h>
#include <math.h>

int main()
{
    int n,i;
    long int a,b,c;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%ld %ld %ld", &a,&b,&c);
        if(a+b<=c || a+c<=b || b+c<=a)
        {
            printf("Case %d: Invalid\n", i);
        }
        else if(a==b && b==c && a==c)
        {
            printf("Case %d: Equilateral\n", i);
        }
        else if(a==b || b==c || a==c)
        {
            printf("Case %d: Isosceles\n", i);
        }
        else
        {
            printf("Case %d: Scalene\n", i);
        }
    }
    return 0;
}
