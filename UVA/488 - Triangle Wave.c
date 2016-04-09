#include <stdio.h>

int main()
{
    int i,j,k,l,n,t,h;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &n,&h);
        for(k=1; k<=h; k++)
        {
            for(j=1; j<=n; j++)
            {
                for(i=1; i<=j; i++)
                {
                    printf("%d", j);
                }
                printf("\n");
            }
            for(j=n-1; j>=1; j--)
            {
                for(i=j; i>=1; i--)
                {
                    printf("%d", j);
                }
                printf("\n");
            }
            if (k!=h)
            {

                printf("\n");
            }
        }
        if (t!=0)
        {
            printf("\n");

        }
    }
    return 0;
}
