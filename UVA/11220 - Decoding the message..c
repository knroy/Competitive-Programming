#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,j,k,len,init,diff,b,space,num;
    char str[10000];
    scanf("%d",&n);
    getchar();
    getchar();
    for(i=1; i<=n; i++)
    {
        if(i>1)
            printf("\n");
        printf("Case #%d:\n",i);
        while(gets(str))
        {
            len = strlen(str);
            if(str[0]=='\0' && len==0)
                break;
            b = 0;
            num = 0;
            space = 1;
            for(j=0; j<=len; j++)
            {
                if(str[j]==' ' || str[j]=='\0')
                {
                    num = 0;
                    for(k=b; k<j; k++)
                    {
                        num++;
                    }
                    if(num>=space)
                    {
                        printf("%c",str[space+b-1]);
                        space++;
                    }
                    b = j+1;
                }
            }
            printf("\n");
        }
    }
    return 0;
}
