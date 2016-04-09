#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,d,e;
    int i,n;
    char x;
    scanf("%d",&n);
    getchar();
    for(i=1; i<=n; i++)
    {
        scanf("%c %f %f",&x,&a,&b);
        getchar();
        if(x =='Q' || x =='r')
        {
            if(a<b)
                printf("%.0f\n", a);
            else
                printf("%.0f\n", b);
        }
        else if(x =='K')
        {
            d = ceil(a/2);
            e = ceil(b/2);
            printf("%.0f\n", d*e);
        }
        else if(x=='k')
        {
            printf("%.0f\n",((a*b)/2+(int)(a*b)%2));
        }
    }
    return 0;
}
