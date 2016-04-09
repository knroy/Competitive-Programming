#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,d,i,j;
    int x;
    while(scanf("%d %d", &a,&b))
    {
        if(a==0 && b == 0)
        {
            break;
        }
        else
        {
            x = 0;
            for(i=a; i<=b; i++)
            {
                c = sqrt(i);
                d = c*c;
                if( d == i)
                {
                    x++;
                }
            }
            printf("%d\n", x);
        }
    }
    return 0;

}
