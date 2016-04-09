#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    double ha,hb,hc,total,root;
    scanf("%d", &t);
    while(t--)
    {
        while(1)
        {
            scanf("%lf %lf %lf", &ha,&hb,&hc);
            total = 1/((1.0/ha+1.0/hb+1.0/hc)*(1.0/ha+1.0/hb-1.0/hc)*(1.0/ha-1.0/hb+1.0/hc)*(-1.0/ha+1.0/hb+1.0/hc));
            if(total<0 || ha==0 || hb==0 || hc==0)
            {
                printf("These are invalid inputs!\n");
                break;
            }
            else
            {
                root = sqrt(total);
                printf("%.3lf\n",root);
            }
        }
    }
    return 0;
}
