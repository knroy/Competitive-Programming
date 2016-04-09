#include<stdio.h>

int main()
{
    int n,total;
    while(scanf("%d", &n)==1)
    {
        if(n!=0)
        {
            total = (n*(n+1)*(2*n+1)/6);
            printf("%d\n", total);
        }
        else
        {
            break;
        }
    }
    return 0;
}
