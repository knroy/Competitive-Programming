#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int i,len,odd,even,result;
    char a[1010];
    while(gets(a))
    {
        if(a[0]=='0' && a[1]=='\0')
        {
            break;
        }
        else
        {
            even = 0, odd = 0;
            len = strlen(a);
            for(i=0; i<len; i++)
            {
                if(i%2==0)
                {
                    even+= a[i]-'0';
                }
                else
                {
                    odd+= a[i]-'0';
                }
            }
            a[i]='\0';
            result = abs(even-odd);
            if(result%11==0)
                printf("%s is a multiple of 11.\n", a);
            else
                printf("%s is not a multiple of 11.\n", a);
        }
    }
    return 0;
}
