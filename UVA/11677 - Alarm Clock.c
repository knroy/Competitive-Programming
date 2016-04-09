#include <stdio.h>

int main()
{
    int h1,m1,h2,m2,h,m,total,hour;
    while(scanf("%d %d %d %d",&h1,&m1,&h2,&m2)==4)
    {
        if(h1==0 && h2==0 && m1==0 && m2==0)
            break;
        if(h1==0)
        {
            h1 = 24;
        }
        if(h2==0)
        {
            h2 = 24;
        }
        total = 24 * 60;
        if(h2>h1)
        {
            h = (h2-h1) * 60;
            if(m1<=m2)
            {
                m = m2 - m1;
                hour = h + m;
            }
            else
            {
                m = m1 - m2;
                hour = h - m;
            }
        }
        else if(h2==h1)
        {
            if(m2>=m1)
            {
                m = m2 - m1;
                hour =  m;
            }
            else
            {
                m = m1 - m2;
                hour = total - m;
            }
        }
        else
        {
            h = (24-(h1 - h2)) * 60;
            if(m2>=m1)
            {
                m = m2 - m1;
                hour =  h + m;
            }
            else
            {
                m = m1 - m2;
                hour = h - m;
            }
        }
        printf("%d\n", hour);
    }
}
