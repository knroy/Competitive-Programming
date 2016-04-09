#include <stdio.h>
#include <math.h>

int main()
{
    long long int sqr[20][20],i,j,k,l,m,n,p,c=1,num;
    while(scanf("%lld", &n) && n)
    {
        k = 0,l = 0;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                scanf("%lld", &sqr[i][j]);
            }
        }
        if(n%2==1)
        {
            m = (n/2)+1;
        }
        else
        {
            m = n/2;
        }
        printf("Case %lld: ",c);
        for(l=1; l<=m; l++)
        {
            num = 0;
            p = n - k;
            for(i=k; i<=p-1; i++)
            {
                for(j=k; j<=p-1; j++)
                {
                    if(i==k || j==k || i== p-1 || j==p-1)
                    {
                        num += sqr[i][j];
                    }
                }
            }
            printf("%lld",num);
            if(l<=m-1)
                printf(" ");
            else if(l==m)
                printf("\n");
            k++;
        }
        c++;
    }
    return 0;
}
