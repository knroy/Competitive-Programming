#include <stdio.h>
#include <string.h>
char str[10010];
int len;

int main()
{
    int i,j,tcase,div,divider[12],counter,mod;
    scanf("%d", &tcase);
    getchar();
    while(tcase--)
    {
        counter = 0;
        scanf("%s",str);
        len = strlen(str);
        scanf("%d",&div);
        for(j=0; j<div; j++)
        {
            mod = 0;
            scanf("%d",&divider[j]);
            for(i=0; i<len; i++)
            {
                mod = (mod*10 + (str[i]-'0'))%divider[j];
            }
            if(mod==0)
                counter++;
        }
        if(counter==div)
            printf("%s - Wonderful.\n",str);
        else
            printf("%s - Simple.\n",str);
        memset(str,'\0',sizeof(str));
    }
    return 0;
}
