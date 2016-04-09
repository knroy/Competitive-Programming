#include <stdio.h>

int main()
{
    double hour,min,ch;
    while(scanf("%lf:%lf", &hour, &min)==2)
    {
        if(hour==0 && min == 0)
        {
            break;
        }
        else
        {
            if(hour>=1 && hour<=6)
            {
                ch = (12+hour)*30 - min * (5.5);
            }
            else
            {
                ch = (12-hour)*30 + min * (5.5);
            }
        }
        if(ch>180 && ch<=360)
        {
            printf("%.3lf\n", 360-ch);
        }
        else if(ch>360)
        {
            printf("%.3lf\n", ch-360);
        }
        else
        {
            printf("%.3lf\n", ch);
        }
    }
    return 0;
}
