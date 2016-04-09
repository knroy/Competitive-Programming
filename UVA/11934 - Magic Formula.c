#include <stdio.h>
#include <math.h>
int a,b,c,d;

int fx(int x)
{
    return a*x*x+x*b+c;
}

int main()
{
    int L,i,j;
    while(scanf("%d %d %d %d %d",&a,&b,&c,&d,&L)==5)
    {
        if(a==0 && b==0 && c==0 && d==0 && L==0)
            break;
        i = 0;
        int count = 0;
        while(i<=L)
        {
            if(fx(i)%d==0)
            {
                count++;
            }
            i++;
        }
        printf("%d\n",count);
    }
}
