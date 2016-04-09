#include <stdio.h>
#include <string.h>

int main()
{
    char b[25];
    int i,len;
    while(scanf("%s", b)==1)
    {
        len = strlen(b);
        for(i=0; i<len; i++)
        {
            if(b[i]=='B' || b[i]=='F' || b[i]=='P' || b[i]=='V')
                b[i]='1';
            else if(b[i]=='C' || b[i]=='G' || b[i]=='J' || b[i]=='K' || b[i]=='Q' || b[i]=='S' || b[i]=='X' || b[i]=='Z')
                b[i]='2';
            else if(b[i]=='D' || b[i]=='T')
                b[i]='3';
            else if(b[i]=='L')
                b[i]='4';
            else if(b[i]=='M' || b[i]=='N')
                b[i]='5';
            else if(b[i]=='R')
                b[i]='6';
            else
                b[i]=' ';
        }
        for(i=0; i<len; i++)
        {
            if(b[i]>='1' && b[i]<='6')
            {
                if(b[i]!=b[i-1])
                {
                    printf("%c", b[i]);
                }
            }
        }
        printf("\n");
    }
    return 0;
}

