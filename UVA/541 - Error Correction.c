#include <stdio.h>

int main()
{
    int n,arr[200][200],i,j;
    while(scanf("%d",&n) &&n )
    {
        int how_many_corrupt = 0;
        int r_count = 0;
        int c_count = 0;
        int sum[200]={0};
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&arr[i][j]);
                sum[j]+=arr[i][j];
                printf("%d\n",sum[j]);
                if(sum[j]>2)

            }
        }
    }
    return 0;
}
