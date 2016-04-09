#include<stdio.h>

int main()
{
    int n,a;
    while(scanf("%d", &n)==1)
    {
        if(n==0)
        {
            break;
        }
        else
        {
            printf("%d\n", n/2);
        }
    }
    return 0;
}


