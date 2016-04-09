#include <stdio.h>

int main()
{
    int t,n,k,i,j,num,sum,temp,seq[8];
    scanf("%d", &t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d", &n, &k);
        sum = 0;
        for(j=1;j<=n;j++)
        {
            scanf("%d", &num);
        }
        {
            seq[0] =
        }
        if(sum>=0)
        {
            temp = sum/k;
            printf("%d %d\n",sum,temp*k);
            if(sum==temp*k)
                printf("Divisible\n");
            else
                printf("Not divisible\n");
        }
        else
        {
            printf("Not divisible\n");
        }
    }
    return 0;
}
