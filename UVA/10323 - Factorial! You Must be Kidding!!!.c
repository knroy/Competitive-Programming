#include <stdio.h>

int main()
{
    long long int n,i,total=1;;
    while(scanf("%lld", &n)!=EOF)
    {
        if(n<0)
        {
            if(n%2==0)
            {
                printf("Underflow!\n");
            }
            else
            {
                printf("Overflow!\n");
            }
        }
        else if(n>=0 && n<=7)
        {
            printf("Underflow!\n");
        }
        else if(n>=8 && n<=13)
        {
            for(i=n; i>=1; i--)
            {
                total = total * i;
            }
            printf("%lld\n", total);
        }
        else
        {
            printf("Overflow!\n");
        }
        total= 1;
    }
    return 0;
}
