#include <stdio.h>
#define pi 2*acos(0)

int main()
{
    int h, l, t, w;
    double trad,trih;
    while(scanf("%d %d %d %d", &l, &w, &h, &t) == 4)
    {
        trad = t * pi/180;
        trih = l * tan(trad);
        if(trih > h)
            printf("%.3lf mL\n", .5*h*h*w/tan(trad));
        else
            printf("%.3lf mL\n", l*w*(h - .5*l*tan(trad)));
    }
    return 0;
}
