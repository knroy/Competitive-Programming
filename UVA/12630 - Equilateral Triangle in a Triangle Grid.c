#include <stdio.h>

int main()
{
    int n,total;
    while(scanf("%d", &n) && n)
    {
        total = (n *(n-1)*(n+1)*(n+2))/24;
        printf("%d\n", total);
    }
    return 0;
}
