#include <stdio.h>

int main()
{
    int a,mile,juice;
    int i,j,n,t;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d", &n);
        mile = 0,juice = 0;
        for(j=0; j<n; j++)
        {
            scanf("%d", &a);
            mile += (a+30)/30;
            juice += (a+60)/60;
        }
        mile *= 10;
        juice *= 15;
        if(mile<juice)
        {
            printf("Case %d: Mile %d\n",i,mile);
        }
        else if(mile>juice)
        {
            printf("Case %d: Juice %d\n", i,juice);
        }
        else
        {
            printf("Case %d: Mile Juice %d\n",i,mile);
        }
    }
    return 0;
}
