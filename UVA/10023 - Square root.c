#include<stdio.h>
#include<string.h>

int main()
{
    long long unsigned a;
    long long int b;
    int i,n;
    scanf("%llu", &n);
    for(i=0; i<n; i++)
    {
        scanf("%llu", &a);
        b = sqrt(a);
        printf("%llu\n", b);
    }
    return 0;
}
