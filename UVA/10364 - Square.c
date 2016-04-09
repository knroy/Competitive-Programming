#include <stdio.h>
#include <math.h>

int main()
{
    //freopen("In.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int x,n,t,i,j,a[10000],sum,avg;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&t);
        sum = 0;
        for(i=0; i<t; i++)
        {
            scanf("%d",&a[i]);
            sum += a[i];
        }
        x = 0;
        avg = (int)sum / 4;
        for(i=0; i<t; i++)
        {
            if(a[i]>avg)
            {
                x++;
                break;
            }
        }
        if(x==0)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
