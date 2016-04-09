#include<stdio.h>

int main()
{
    int s,d,i,j,n,big,small,difference;
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%d %d", &big, &small);
        {
            if(small>big)
            {
                printf("impossible\n");
            }
            else if(big==0 && small%2==1)
            {
                printf("impossible\n");
            }
            else if(big==0 && small%2==0)
            {
                printf("impossible\n");
            }
            else if(small==0)
            {
                printf("impossible\n");
            }
            else if(big>small)
            {
                difference = big-small;
                s = difference/2 + small;
                d = s-small;
                if(difference%2==1)
                {
                    printf("impossible\n");
                }
                else
                {
                    printf("%d %d\n",s,d);
                }
            }
        }
    }
    return 0;
}
