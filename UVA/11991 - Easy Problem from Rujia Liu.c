#include <stdio.h>

long arr[100000][1000];

int main()
{
    long int n,m,i,j,st,k,v,cnt[100];
    long int num=1;
    while(scanf("%ld %ld",&n,&m)==2)
    {
        for(i=1; i<=100; i++)
        {
            cnt[i] = 1;
        }
        for(i=1; i<=n; i++)
        {
            scanf("%ld", &st);
            arr[st][cnt[st]] = i;
            cnt[st]++;
        }
        for(j=0; j<m; j++)
        {
            scanf("%ld %ld",&k,&v);
            printf("%ld\n",arr[v][k]);
        }
        memset(arr,0,sizeof(arr));
        memset(cnt,1,sizeof(cnt));
    }
    return 0;
}

/*
8 4
1 3 2 2 4 3 2 1
*/
