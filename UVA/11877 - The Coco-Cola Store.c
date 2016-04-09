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
            a = 3*n/2;
        }
        printf("%d\n", a-n);
    }
    return 0;
}

