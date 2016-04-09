#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ispalindrome(char a[])
{
    int i,len,mid;
    len = strlen(a);
    mid = (int)len/2;
    for(i=0; i<mid; i++)
    {
        if(a[i]!=a[len-i-1])
            return 0;
    }
    return 1;
}

int main()
{
    char in[10000],a[10000];
    int i,j,len;
    while(gets(in))
    {
        len = strlen(in);
        j = 0;
        for(i=0; i<len; i++)
        {
            if(in[i]>='A' && in[i]<='Z' || in[i]>='a' && in[i]<='z')
            {
                a[j]= tolower(in[i]);
                j++;
            }
        }
        a[j]='\0';
        if(strcasecmp(in,"DONE")==0)
            break;
        else if(ispalindrome(a))
            printf("You won't be eaten!\n");
        else
            printf("Uh oh..\n");
    }
    return 0;
}
