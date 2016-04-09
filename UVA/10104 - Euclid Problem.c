#include <stdio.h>

int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        gcd(b,a%b);
}

int lcm(int a,int b)
{
    return (a*b)/gcd(a,b);
}

int main()
{
    int a,b,d;
    while(scanf("%d %d",&a,&b)==2)
    {
        d = gcd(a,b);
        printf("%d\n",lcm(a,b));
    }
    return 0;
}
