#include<stdio.h>

int main()
{
    int a,b,c,i,n;
    scanf("%d", &n);
    {
        for(i=1; i<=n; i++)
        {
            scanf("%d %d %d",&a,&b,&c);
            if((a>b && a<c)||(c<a &&a<b))
            {
                printf("Case %d: %d\n", i, a);
            }
            else if((b>c && b<a)||(a<b&&b<c))
            {
                printf("Case %d: %d\n", i, b);
            }
            else if((c>a && c<b)||(b<c && c<a))
            {
                printf("Case %d: %d\n", i, c);
            }
        }
    }
    return 0;
}
