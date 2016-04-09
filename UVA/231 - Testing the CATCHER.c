#include <stdio.h>

int main()
{
    long long int arr[1000],total[1000];
    long long int i,j,n,l,r,t=1;
    n = 0;
    while(scanf("%lld",&arr[n])==1)
    {
        if(arr[n]!=-1)
        {
            n++;
            continue;
        }
        else if(arr[n]==-1 && n==0)
            break;
        else
        {
            for(i=0; i<=n; i++)
                total[i]= 1;
            for(i=0; i<=n; i++)
            {
                l = i;
                if(i!=0)
                    for(j=i-1; j>=0; j--)
                    {
                        if(arr[l]<arr[j])
                        {
                            l = j;
                            total[i]++;
                        }
                    }
                r = i;
                if(i!=n)
                    for(j=i+1; j<n; j++)
                    {
                        if(arr[r]>arr[j])
                        {
                            r = j;
                            total[i]++;
                        }
                    }
            }
            int num = 0;
            for(i=0; i<n; i++)
            {
                if(total[i]>num)
                    num = total[i];
            }
            if(t>1)
                printf("\n");
            printf("Test #%lld:\n  maximum possible interceptions: %d\n",t,num);
            n = 0;
            t++;
        }
    }
    return 0;
}
