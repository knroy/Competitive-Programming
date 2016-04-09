#include <stdio.h>

int main()
{
    long long int n,num;
    while(scanf("%lld", &n)==1)
    {
        if(n<0)
            break;
        else
        {
            num = 1 + (n * (n+1))/2;
            printf("%lld\n", num);
        }
    }
    return 0;
}
