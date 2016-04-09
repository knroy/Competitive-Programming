#include <stdio.h>

int main()
{
    int n,j,i=1,temp,mod;
    while(scanf("%d", &n)==1)
    {
        if(n<0)
            break;
        j = 0,mod = 0;
        while(n>1)
        {
            temp = n/2;
            mod = n%2;
            n = temp + mod;
            j++;
        }
        printf("Case %d: %d\n",i++,j);
    }
    return 0;
}
