#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    long long a,b,c,d,x,y,n,i,j,len;
    scanf("%lld",&n);
    getchar();
    for(i=0; i<n; i++)
    {
        a = 0,b = 1,c = 1,d = 0;
        x = a + b;
        y = c + d;
        gets(str);
        len = strlen(str);
        for(j=0; j<len; j++)
        {
            if(str[j]=='R')
            {
                a = x;
                c = y;
            }
            else if(str[j]=='L')
            {
                b = x;
                d = y;
            }
            x = a + b;
            y = c + d;
        }
        printf("%lld/%lld\n",x,y);
    }
    return 0;
}
