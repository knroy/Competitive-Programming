#include<stdio.h>
#include<math.h>

void jollycheck(int a[],int len)
{
    int i,temp=0;
    for(i=1; i<len; i++)
    {
        if(a[i]==0)
        {
            printf("Not jolly\n");
            temp = 1;
            break;
        }
    }
    if(temp==0)
        printf("Jolly\n");
}

int main()
{
    int n,i,a[3010];
    while(scanf("%d", &n)==1)
    {
        int b[3009]= {0};
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0; i<n-1; i++)
        {
            int temp = abs(a[i]-a[i+1]);
            b[temp]++;
        }
        if(n==1)
            printf("Jolly\n");
        else
        {
            jollycheck(b,n);
        }
    }
    return 0;
}
