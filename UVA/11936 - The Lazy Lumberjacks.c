#include<stdio.h>

int main()
{
    int a,b,c,i,n;
    scanf("%d", &n);
        for(i=1; i<=n; i++)
        {
            scanf("%d %d %d", &a,&b,&c);
            if(a+b>c)
            {
                printf("OK\n");
            }
            else
            {
                printf("Wrong!!\n");
            }
        }
    return 0;
}
