#include <stdio.h>
#include <stdbool.h>

int status[4001];

void pre_bool()
{
    int i,cnt=1;
    for(i=1; i<=4000; i++)
    {
        status[i] = cnt;
        cnt++;
        if(cnt==8)
            cnt = 1;
    }
}

int main()
{
    pre_bool();
    int tcase,n,d,np[4000],i,j,counter;
    scanf("%d",&tcase);
    while(tcase--)
    {
        int hartal[4000] = {0};
        counter = 0;
        scanf("%d",&d);
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            scanf("%d",&np[i]);
        }
        for(i=1; i<=d; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(i%np[j]==0)
                    hartal[i] = 1;
            }
        }
        for(i=1; i<=d; i++)
        {
            if(status[i]!=6 && status[i]!=7 && hartal[i]==1)
            {
                counter++;
            }
        }
        printf("%d\n",counter);
    }
    return 0;
}
