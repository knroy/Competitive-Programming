#include<stdio.h>

int main()
{
    int n,c,a[1000],b,j,i,num;
    double ave,ave_high;
    scanf("%d", &c);
    for(j=1; j<=c; j++)
    {
        num = 0;
        b = 0;
        ave_high = 0;
        scanf("%d", &n);
        for(i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
            b = b+a[i];
            num = b/n;
        }
        for(i=0; i<=n-1; i++)
            if(a[i]>num)
            {
                ave_high++;
            }
        ave = ave_high*100/n;
        printf("%.3lf%%\n",ave);
    }
    return 0;
}
