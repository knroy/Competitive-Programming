#include <stdio.h>
#include <string.h>

int main()
{
    int n,m,f,i;
    char str[10000];
    scanf("%d",&n);
    getchar();
    while(n--)
    {

        gets(str);
        m = 0,f = 0;
        int len = strlen(str);
        if(len<=3)
            printf("NO LOOP\n");
        else
        {
            for(i=0; i<len; i++)
            {
                if(str[i]=='M')
                    m++;
                else if(str[i]=='F')
                    f++;
            }
            if(m==f)
                printf("LOOP\n");
            else
                printf("NO LOOP\n");
        }
    }
    return 0;
}
