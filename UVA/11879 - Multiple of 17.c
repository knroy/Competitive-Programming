#include <stdio.h>
#include <string.h>

int main()
{
    int i,len,r,sum;
    char s[1020];
    while(gets(s))
    {
        r = 0;
        if(s[0]=='0' && s[1]=='\0')
            break;
        len = strlen(s);
        for(i=0; i<len; i++)
        {
            sum =  r*10+(s[i]-'0');
            r = sum%17;
            printf("%d %d\n", sum,r);
        }
        if(r==0)
            printf("1\n");
        else
            printf("0\n");
    }
    return 0;
}
