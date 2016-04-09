#include <stdio.h>
#include <string.h>

int main()
{
    char str[1010];
    int len,i,j,cnt=0;
    while(gets(str))
    {
        if(cnt>0)
            printf("\n");
        int biglen = 0;
        len = strlen(str);
        int ascii[129]= {0};
        for(i=0; i<len; i++)
        {
            if(str[i]>=32 && str[i]<=128)
            {
                ascii[str[i]]++;
                if(ascii[str[i]]>biglen)
                {
                    biglen = ascii[str[i]];
                }
            }

        }
        j = 1;
        while(j<=biglen)
        {
            for(i=128; i>=32; i--)
            {
                if(ascii[i]==j)
                    printf("%d %d\n",i,j);
            }
            j++;
        }
        cnt++;
    }
    return 0;
}
