#include <stdio.h>

int main()
{
    int i,j,n,a[6],count,y;
    while(scanf("%d", &n) &&n )
    {
        while(n--)
        {
            count = 0;
            for(i=1; i<=5; i++)
            {
                scanf("%d", &a[i]);
                if(a[i]<=127)
                {
                    count++;
                    y = i;
                }
            }
            if(count==1)
            {
                printf("%c\n",y+64);
            }
            else
            {
                printf("*\n");
            }
        }
    }
    return 0;
}
