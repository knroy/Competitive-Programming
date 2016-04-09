#include <stdio.h>
#include <string.h>

typedef struct
{
    char line[1000];
} linear;

int main()
{
    int n[1000];
    int i=0,j,temp,m;
    linear str[1000];
    while(scanf("%d",&n[i]) && n[i])
    {
        getchar();
        gets(str[i].line);
        if(strcasecmp(str[i].line,"right on")==0)
        {
            m = 0;
            temp = n[i];
            for(j=0; j<i; j++)
            {
                if(temp > n[j] && strcasecmp(str[j].line,"too low")==0)
                    m = m;
                else if(temp < n[j] && strcasecmp(str[j].line,"too high")==0)
                    m = m;
                else
                    m++;
            }
            if(m==0)
                printf("Stan may be honest\n");
            else
                printf("Stan is dishonest\n");
        }
        if(strcasecmp(str[i].line,"right on")==0)
            i = 0;
        else
         i++;
    }
    return 0;
}
