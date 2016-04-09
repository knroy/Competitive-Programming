#include<stdio.h>

int main()
{
    int a,n,wall[50],b,high=0,low=0,i,j=1,k;
    scanf("%d", &a);
    for(k=1; k<=a; k++)
    {
        scanf("%d", &n);
        for(i=0; i<n; i++)
        {
            high=0,low=0;
            scanf("%d",&wall[i]);
        }
        for(i=1; i<n; i++)
        {
            if(wall[i]<wall[i-1])
            {
                low++;
            }
            else if(wall[i]>wall[i-1])
            {
                high++;
            }
            else if(wall[i]==wall[i-1])
            {
                high = high+0;
                low = low+0;
            }
        }
        printf("Case %d: %d %d\n",j,high,low);
        j++;
    }
    return 0;
}
