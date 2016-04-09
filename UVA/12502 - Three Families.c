#include<stdio.h>

int main()
{
    int a,b,c,n,i;
    int total;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d %d %d", &a,&b,&c);
        total = c*(a+(a-b))/(a+b);
        printf("%d\n", total);
    }
    return 0;
}
