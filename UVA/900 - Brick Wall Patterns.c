#include <stdio.h>

int main()
{
    int i,a[50],wall,n;
    a[0]= 1;
    a[1] = 1;
    for(i=2; i<=50; i++)
    {
        a[i] = a[i-2] + a[i-1];
    }
    while(scanf("%d", &wall) && wall)
    {
        n = a[wall];
        printf("%d\n", n);
    }
    return 0;
}
