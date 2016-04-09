#include <stdio.h>
#include <string.h>

int digit(char p[])
{
    int i,len;
    len = strlen(p);
    for(i=0; i<len; i++)
    {
        if(p[i]>='0' && p[i]<='9')
            return 1;
    }
    return 0;
}
int charater(char d[])
{
    int i,len;
    len = strlen(d);
    for(i=0; i<len; i++)
    {
        if(d[i]>='A' && d[i]<='Z'||
                d[i]>='a' && d[i]<='z' ||
                d[i]==' ' || d[i]=='!' ||
                d[i]=='.' || d[i]==',' ||
                d[i]==';' || d[i]=='?' ||
                d[i]==':')
            return 1;
    }
    return 0;
}
int main()
{
    char a[10000],b[10000];
    int i,n,j,len,dig,e;
    while(gets(a))
    {
        len = strlen(a);
        j = 0;
        if(charater(a))
        {
            for(i=len-1; i>=0; i--)
            {
                n = a[i];
                while(n>0)
                {
                    e = n%10;
                    n = n/10;
                    b[j] = e +'0';
                    printf("%c",b[j]);
                    j++;
                }
            }
        }
        else if(digit(a))
        {
            i = len - 1;
            while(i>=0)
            {
                if(a[i]=='0' || a[i]=='1' || a[i]=='2')
                {
                    dig = (a[i]-'0')*100 + (a[i-1]-'0')*10 + a[i-2] - '0';
                    printf("%c",dig);
                    i = i - 3;
                }
                else
                {
                    dig = (a[i]-'0')*10 + a[i-1] - '0';
                    printf("%c",dig);
                    i = i - 2;
                }
            }
        }
        printf("\n");
        memset(a, ' ', 10000);
        memset(b, ' ', 10000);
    }
    return 0;
}
