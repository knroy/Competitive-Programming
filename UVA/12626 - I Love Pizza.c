#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000];
    int i,len,n,m_c,a_c,r_c,t_c,i_c,g_c,total,y;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%s", a);
        len = strlen(a);
        m_c=0,a_c=0,r_c=0,t_c=0,i_c=0,g_c=0,total=600;
        for(i=0; i<len; i++)
        {
            if(a[i]=='A')
                a_c++;
            else if(a[i]=='G')
                g_c++;
            else if(a[i]=='I')
                i_c++;
            else if(a[i]=='M')
                m_c++;
            else if(a[i]=='R')
                r_c++;
            else if(a[i]=='T')
                t_c++;
        }
        a_c = a_c/3;
        r_c = r_c/2;
        if(a_c<=total)
            total = a_c;
        if(g_c<=total)
            total = g_c;
        if(i_c<=total)
            total = i_c;
        if(m_c<=total)
            total = m_c;
        if(r_c<=total)
            total = r_c;
        if(t_c<=total)
            total = t_c;
        printf("%d\n", total);
    }
    return 0;
}

