#include <stdio.h>
#define max 2000005
long int arr[max],n, c, d, s;
int num=0;

int main()
{
    while(scanf("%ld", &n) && n)
    {
        long int i,j;
        long counter[101]= {0};
        for (c = 1; c <=n; c++)
        {
            scanf("%ld", &arr[c]);
            counter[arr[c]]++;
            if(num<arr[c])
                num = arr[c];
        }
        int item=0;
        for(i=1; i<=num; i++)
        {
            for(j=1; j<=counter[i]; j++)
            {
                printf("%d",i);
                item++;
                if(item==n)
                    printf("\n");
                else
                    printf(" ");
            }
        }
    }
    return 0;
}
