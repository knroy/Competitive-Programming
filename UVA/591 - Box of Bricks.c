#include<stdio.h>

int main()
{
    int i,n,k[120],j,x;
    int avg,a=1;
    while(scanf("%d", &n) && n)
    {
        j = 0;
        for(i=0; i<n; i++)
        {
            scanf("%d", &k[i]);
            j += k[i];
        }
        avg = j/n;
        x = 0;
        for(i=0; i<n; i++)
        {
            if(k[i]>avg)
            {
                x+=(k[i]-avg);
            }
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",a,x);
        a++;
    }
    return 0;
}
