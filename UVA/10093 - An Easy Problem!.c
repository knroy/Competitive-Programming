#include <stdio.h>
#include <string.h>

int main()
{
    char str[10000];
    int n,i,len,maxn,total,cts,t;
    while(gets(str))
    {
        len = strlen(str);
        maxn = 0;
        total = 0;
        t = 0;
        for(i=0; i<len; i++)
        {
            if(str[i]>='0' && str[i]<='9')
            {
                cts = str[i]-'0';
                total += cts;
                if(cts>maxn)
                    maxn = cts;
            }
            else if(str[i]>='A' && str[i]<='Z')
            {
                cts = str[i]-55;
                total += cts;
                if(cts>maxn)
                    maxn = cts;
            }
            else if(str[i]>='a' && str[i]<='z')
            {
                cts = str[i]-61;
                total += cts;
                if(cts>maxn)
                    maxn = cts;
            }
        }
        str[i]='\0';
        for(i=maxn; i<=61; i++)
        {
            if(i==0)
            {
                printf("2\n");
                t = 1;
                break;
            }
            else if(total%i==0)
            {
                printf("%d\n",i+1);
                t = 1;
                break;
            }
        }
        if(t==0)
            printf("such number is impossible!\n");
    }
    return 0;
}
