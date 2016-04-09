#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int n,i,num=0,j,big=0;
    char str[10000];
    int alpha[26];
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        gets(str);
        int len = strlen(str);
        for(i=0; i<len; i++)
        {
            if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z')
            {
                if(str[i]==tolower(str[i]))
                {
                    alpha[str[i]-97]++;
                }
                else
                    alpha[str[i]-65]++;
            }
        }
    }
    for(i=0; i<26; i++)
    {
        if(alpha[i]!=0)
        {
            if(alpha[i]>=big)
                big = alpha[i];
        }
    }
    for(i=big; i>=1; i--)
    {
        for(j=0; j<26; j++)
        {
            if(alpha[j]!=0)
            {
                if(alpha[j]== i)
                    printf("%c %d\n",j+65,i);
            }
        }
    }
    return 0;
}
